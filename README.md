# SDVX Full Size Controller - Keyboard Style v0.1
A full size controller for Sound Voltex with custom arcade size keycaps, and no _required_ soldering (technically) 



![image](https://github.com/user-attachments/assets/9a7b1bfd-62c1-44c1-a583-e57ed6d0b2ee)
###### _Figure 1. Full assembly_
![image](https://github.com/user-attachments/assets/2ac9d35a-dacf-4a22-8c45-e2eea49a2a86)
###### _Figure 2. Modular version (without encoders)_


## Table of Contents:
 [Tools Required](#tools-required)
 
 [Parts Needed](#parts-needed)
 
 [General Instructions](#general-instructions)
 
 [PCB Ordering](#pcb-ordering)
 
 [3D Printing](#3d-printing)
 
 [Todo](#todo)
 
 [Known Issues](#known-issues)
 
 [Part/Assembly Photos](#partassembly-photos)

## Tools Required:
- Gorilla Glue (If 3D printing the case in many parts, which is the most likely scenario)
- Screwdriver to attach encoders
- Allen Key (Check if the knob you buy comes with an appropriately sized one)

## Parts Needed:
- 1x Arduino Micro WITH Headers
- 6x Mechanical keyboard switch of your choice
- 20x Screw in PCB mount stabilizers (I used Durock V3 screw ins)
- 8x 3u Stabilizer wires
- 2x 2u Stabilizer wires
- 6x Kailh Hotswap sockets (Technically optional?)
- 1x PCB (They make you order 5 usually)
- 1x 3D Printed case

## General Instructions:
1. Order PCB [Instructions](#pcb-ordering)
2. 3D Print in many parts and assemble [Details](#3d-printing)
3. Solder Kailh hotswap sockets onto PCB (Technically optional if you just handwire the pins by stuffing the hole with some conductive material)
4. Screw in stabilizers and clip in wires
5. Apply gasket strips to edge of PCB (place them so they're half on/half off the pcb)
6. Screw encoders into their respective housing
7. Place O-rings or felt on encoder shaft
8. Put knob on encoder and tighten
9. Wire encoder, matching your vendor's datasheet with the info printed on the PCB (TODO)
10. Plug Arduino Micro into your computer and upload the Firmware
11. Put keycaps on
12. Socket Arduino into PCB (Optional: Secure it with tape or something)
13. Fill bottom of 3D printed case with foam/dense material
14. Place PCB assembly into socket on the case
15. Game

## PCB Ordering
Make a ZIP archive out of the PCB folder and sent it to a PCB manufacturer of your choosing. Make sure it says 1.6mm, 2 layer. I personally used JLCPCB cause they were the cheapest for me (I'm in the US, also no this is not sponsored). Do some digging and find out what is cheapest for where you live, JLCPCB and PCBWAY seem to be good, Aisler for EU, etc.

The PCB is designed to just have an Arduino Micro (with headers) plug into the back, and just have screw in stabilizers, and (Technically optional?) Kailh hotswap sockets (I'm going to solder mine, I'll update if I try one handwired)

## 3D Printing
The keycap stems are the finest detail in the assembly, so a resin printer is highly recommended. Everything else it doesn't really matter.
(It is probably doable with a 0.2mm nozzle on a filament printer but you might have to mess with the hole sizing yourself.)

To print: After downloading and unzipping, go to SDVX-Keyboard-Controller/3D Manufacturing Files, you should see:
- bt_keycap.3mf
- fx_keycap.3mf
- stem_tolerance_tester.3mf

These are the BT and FX button keycaps, named respectively. I would recommend printing the stem tolerance tester first though to see what setting you need to print with to make the stems fit nicely on the switch. If you do end up needing to edit the tolerances, the design files are under the SDVX-Keyboard-Controller/3D Manufacturing Files/Design Files

The case is in the sdvx_case_v0.1 folder, split into many parts approx 52x52 mm. The files are named as follows:
- enc_L, enc_R are the actual encoder housings, the _side and _lower files go on the side and bottom
- The PCB coordinates start in the top left, you can probably piece it together afterwards with the picture but just know that the top left is 0_0 and the bottom right is 5_2

After printing all the individual parts (Make sure they fit as you put them together), glue them together with your choice of adhesive (e.g. Gorilla Glue)

## Todo
- Improve case by culling the extra parts of the baseplate and adding a connector between the encoder housing and the PCB housing that isn't the baseplate

## Known Issues
- Dunno yet

[Jump to top of page](#table-of-contents)

## Part/Assembly Photos

[Jump to top of page](#table-of-contents)
