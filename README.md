# SDVX Full Size Controller - Keyboard Style
A full size controller for Sound Voltex with custom arcade size keycaps, and no _required_ soldering (technically) 


![image](https://github.com/user-attachments/assets/9a7b1bfd-62c1-44c1-a583-e57ed6d0b2ee)
###### _Figure 1. Full assembly_


## Table of Contents:
#### Tools Required
#### Parts Needed
#### General Instructions
#### PCB Ordering
#### 3D Printing Details
#### Todo
#### Known Issues
#### Part/Assembly Photos

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
1. Order PCB (Instructions here)
2. 3D Print in many parts and assemble (Details)
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

## PCB Ordering Details
Make a ZIP archive out of the PCB folder and sent it to a PCB manufacturer of your choosing. Make sure it says 1.6mm, 2 layer. I personally used JLCPCB cause they were the cheapest for me (I'm in the US, also no this is not sponsored). Do some digging and find out what is cheapest for where you live, JLCPCB and PCBWAY seem to be good, Aisler for EU, etc.


## 3D Printing Details
The keycap stems are the finest detail in the assembly, so a resin printer is highly recommended. Everything else it doesn't really matter.
(It is probably doable with a 0.2mm nozzle on a filament printer but you might have to mess with the hole sizing yourself.)

I have a folder with the case spliced into ~52x52mm tiles for easy printing. You can go into FreeCad and easily change up the splicing yourself if need be, just look up FreeCad Splice Apart tool.

## Todo
- BT Stabilizer Holes are too far apart, decide between BT Keycap with no lip or redo PCB

## Known Issues
- Dunno yet

## Part/Assembly Photos
