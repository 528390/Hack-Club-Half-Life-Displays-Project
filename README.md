Glass Collection LED Lighting System

What is this project?
This project is a custom-designed printed circuit board (PCB) that provides lighting for a glass collection cabinet. It combines white LEDs and RGB lighting to illuminate the collection while allowing different lighting modes.

How does this project work?
The lighting system uses a XIAO RP2040 microcontroller to control two 5mm white LEDs and a 5mm RGB LED. A push button allows the user to switch between lighting modes, and a 10kΩ potentiometer is included for brightness adjustment. The schematic and PCB layout were designed in KiCad, and the firmware will be written using Arduino.

List of hardware components:

- XIAO RP2040 microcontroller(1x)
- 5 mm white LEDs(2x)
- 5 mm common-cathode RGB LED(1x)
- Resistors(5x)
- Push button (1x)
- 10kΩ potentiometer (1x)
- Custom PCB designed with KiCad

My Project Status:
I have finished designing the schematic and PCB layout in KiCad. The firmware and physical assembly are not yet complete because the parts have not been shipped. My goal is to finish the design, test the lighting system on the physical hardware, and prepare the files for manufacturing.

Repository Contents:

- BOM.md — Bill of materials
- JOURNAL.md — Project progress and analysis
- Schematic and PCB layout files designed in KiCad
- Gerber and drill files for PCB manufacturing
- Arduino firmware

PCB Design:
https://github.com/528390/Hack-Club-Half-Life-Displays-Project/blob/main/PCB%20layout.png
https://github.com/528390/Hack-Club-Half-Life-Displays-Project/blob/main/wired%20PCB.png

PCB Schematic Layout:
https://github.com/528390/Hack-Club-Half-Life-Displays-Project/blob/main/schematic%20layout.png

PCB Images

<img width="1157" height="677" alt="wired PCB" src="https://github.com/user-attachments/assets/95f04c9d-62e7-4619-bcf6-46fe5b36fc51" />
<img width="1762" height="655" alt="schematic layout" src="https://github.com/user-attachments/assets/349ff722-1df9-4773-89d1-aa4afe6f48fc" />


Bill of Materials (BOM) Table

| Part / Material | Quantity | Unit Price | Buying Link |
|---|---:|---:|---|
| XIAO RP2040 | 1 | $5.00 | [Seeed Studio](https://www.seeedstudio.com/) |
| 5 mm white LED | 2 | $0.40 | [MicroCenter](https://www.microcenter.com/product/456219/adafruit-industries-super-bright-white-5mm-led-25-pack) |
| 5 mm common-cathode RGB LED | 1 | $1.49 | [TinkerSphere](https://tinkersphere.com/standard-leds/46-rgb-led.html) |
| Resistors(100 Ohms) | 4 | $0.08 | [SparkFun Electronics](https://www.sparkfun.com/components/resistors.html) |
| Resistor(270 Ohms) | 1 | $0.05 | [Jameco](https://www.jameco.com/z/CF1-4W271JRC-Jameco-Valuepro-Resistor-Carbon-Film-270-Ohm-1-4-Watt-5-_690726.html) |
| Push button | 1 | $0.13 | [DigiKey](https://www.digikey.com/en/products/detail/te-connectivity-alcoswitch-switches/1825910-6/1632536) |
| 10kΩ potentiometer | 1 | $1.25 | [SparkFun Electronics](https://www.sparkfun.com/rotary-potentiometer-linear-10k-ohm.html) |
| Custom PCB | 1 | $4.00 | [JLCPCB](https://jlcpcb.com/) |
