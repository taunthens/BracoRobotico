#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  Serial.begin(9600);
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(12);
}

void loop() {
  if (Serial.available() > 0) {
    String data = Serial.readStringUntil('\n');
    int pos1 = data.substring(0, data.indexOf(',')).toInt();
    data.remove(0, data.indexOf(',') + 1);
    int pos2 = data.substring(0, data.indexOf(',')).toInt();
    data.remove(0, data.indexOf(',') + 1);
    int pos3 = data.substring(0, data.indexOf(',')).toInt();
    data.remove(0, data.indexOf(',') + 1);
    int pos4 = data.toInt();
    
    servo1.write(pos1);
    servo2.write(pos2);
    servo3.write(pos3);
    servo4.write(pos4);
  }
}
