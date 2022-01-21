// Original version Copyright (c) 2016 Scott W Harden
//Adapted version for Arduino microcontroller by S Stoppacher

void setup() {
  // 3 stati: high (5V), high impedance, low(0V)
  // Order: Z, H, L, Z
  // pinMode() and 4 different stati
  // Output low
  // Output High
  // Input low == High Z
  // Input high = Pullup is activated
  Serial.begin(115200);
  pinMode(13, OUTPUT);
}

void loop() {
    //rising part = charging the capacitor
    pinMode(13, OUTPUT);
    digitalWrite(13,HIGH);
    delay(2); // 2ms rise time
    delayMicroseconds(100);

    //pause at the top

    //falling part
    digitalWrite(13,LOW);
    delay(2); // fall time
    delayMicroseconds(150); // extra fall

    //return to rest state
    pinMode(13, INPUT);
    digitalWrite(13, HIGH);
    delay(50);
}
