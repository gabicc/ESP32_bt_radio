# ESP32_bt_radio
Bluetooth radio via ESP 32


## ESP32-S Wiring with CP2102(USB-to-UART)



| CP2102 Pin | Connect To ESP32 Pin | Power source | 	Purpose |
|------|------|---------|------|
| TXD	| RX0 (GPIO3) | |	CP2102 transmits → ESP32 receives |
|RXD |	TX0 (GPIO1) | |	CP2102 receives ← ESP32 transmits|
|GND 	|GND | |	Common ground|
| | GND | - connector | |
|  |	3.3V | + connector |	|
|  | GPIO 0 | - connector | Use this for uploading source code |


## ESP32-S Wiring with MAX98357A (I2S Sound amplifier)

| MAX98357A Pin | ESP32 Pin | 	Purpose |
|------|------|------|
| LRC	| D14 |	 |
|BCLK |	D27 | |
| DIN	| D26 |	|
| GND | GND | |
| VIN | VIN | |


Sources: https://www.otronic.nl/nl/aansluitschemas-met-voorbeeldcode-voor-arduino/max98357a-wifi-radio-aansluitschema-en-voorbeeldco/
https://www.instructables.com/DIY-Bluetooth-Speaker-Using-Esp32-With-Controls/