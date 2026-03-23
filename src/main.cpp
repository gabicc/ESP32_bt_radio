#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  Serial.begin(115200);

  Serial.println("Hello, Application started");
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  Serial.println("Loop started");
  delay(1000);
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}