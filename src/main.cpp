#include <Arduino.h>
#include "AudioTools.h"
#include "BluetoothA2DPSink.h"

#define I2S_LRC 14
#define I2S_BCLK 27
#define I2S_DIN 26

// put function declarations here:

I2SStream i2s;
BluetoothA2DPSink a2dp_sink(i2s);

void setup() {
  Serial.begin(115200);

  Serial.println("Hello, Application STARTED");
  // put your setup code here, to run once:
  auto cfg = i2s.defaultConfig();
  cfg.pin_bck = I2S_BCLK;  // BCLK pin
  cfg.pin_ws = I2S_LRC;   // LRC pin
  cfg.pin_data = I2S_DIN; // DIN pin
  i2s.begin(cfg);

  a2dp_sink.start("ESPEAKER");
  a2dp_sink.set_volume(64);
}

void loop() {
  //Serial.println("Loop started");
  //delay(1000);
  // put your main code here, to run repeatedly:
}