/*Arduino SDVX Controller Code for Leonardo
 * 2 Encoders + 10 Buttons
 * Based on original code from:
 * http://knuckleslee.blogspot.com/2018/06/RhythmCodes.html
 * 
 * Arduino Joystick Library
 * https://github.com/MHeironimus/ArduinoJoystickLibrary/
 */
#include <Joystick.h>
Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID,JOYSTICK_TYPE_GAMEPAD, 10, 0,
 true, true, false, false, false, false, false, false, false, false, false);

boolean state[2]={false}, set[4]={false};
int encL=0, encR=0;
const int PULSE = 360;  //number of pulses per revolution of encoders 
byte EncPins[]    = {18, 19, 20, 21};
byte ButtonPins[] = {5, 6, 7, 8, 9, 10};

/* pin assignments
 * VOL-L Green to pin 0 and White to pin 1
 * VOL-R Green to pin 2 and White to pin 3
 * ButtonPins {5,7,9,11,13,19,21,23,15,17} = Button input 1 to 10
 *    connect button pin to ground to trigger button press
 */
 
byte ButtonCount = sizeof(ButtonPins) / sizeof(ButtonPins[0]);
byte EncPinCount = sizeof(EncPins) / sizeof(EncPins[0]);

int ReportDelay = 700;
unsigned long ReportRate;

void setup() {
  Serial.begin(9600);
  Joystick.begin(false);
  Joystick.setXAxisRange(-PULSE/2, PULSE/2-1);
  Joystick.setYAxisRange(-PULSE/2, PULSE/2-1);
  
  // setup I/O for pins
  for(int i=0; i<ButtonCount; i++) {
    pinMode(ButtonPins[i], INPUT_PULLUP);
  }
  for(int i=0; i<EncPinCount; i++) {
    pinMode(EncPins[i], INPUT_PULLUP);
  }

  //setup interrupts
  attachInterrupt(digitalPinToInterrupt(EncPins[0]), doEncoder0, CHANGE);
  attachInterrupt(digitalPinToInterrupt(EncPins[2]), doEncoder1, CHANGE);
} //end setup

void loop() {
  ReportRate = micros();
  
  // read buttons
  for(int i=0; i<ButtonCount; i++) {
    Joystick.setButton(i, !(digitalRead(ButtonPins[i])));
  }

  //read encoders, detect overflow and rollover
  if(encL < -PULSE/2 || encL > PULSE/2-1)
    encL = constrain(encL*-1, -PULSE/2, PULSE/2-1);
  if(encR < -PULSE/2 || encR > PULSE/2-1)
    encR = constrain(encR*-1, -PULSE/2, PULSE/2-1);
  Joystick.setXAxis(encL);
  Joystick.setYAxis(encR);

  //report
  Joystick.sendState();
  delayMicroseconds(ReportDelay);
  //ReportRate Display
  Serial.print(micros() - ReportRate);
  Serial.println(" micro sec per loop");
}//end loop

//Interrupts
void doEncoder0() {
  if(state[0] == false && digitalRead(EncPins[0]) == LOW) {
    set[0] = digitalRead(EncPins[1]);
    state[0] = true;
  }
  if(state[0] == true && digitalRead(EncPins[0]) == HIGH) {
    set[1] = !digitalRead(EncPins[1]);
    if(set[0] == true && set[1] == true) {
      encL++;
    }
    if(set[0] == false && set[1] == false) {
      encL--;
    }
    state[0] = false;
  }
}

void doEncoder1() {
  if(state[1] == false && digitalRead(EncPins[2]) == LOW) {
    set[2] = digitalRead(EncPins[3]);
    state[1] = true;
  }
  if(state[1] == true && digitalRead(EncPins[2]) == HIGH) {
    set[3] = !digitalRead(EncPins[3]);
    if(set[2] == true && set[3] == true) {
      encR++;
    }
    if(set[2] == false && set[3] == false) {
      encR--;
    }
    state[1] = false;
  }
}