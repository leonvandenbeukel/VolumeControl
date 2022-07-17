// Analog potentiometer / Volume part
int const potPin = A0;
int potVal;
int vol;
float volf;

void setup() { 
  Serial.begin(9600);  
}

void loop() { 
  volume();
  delay(100);
}

void volume() {
  potVal = analogRead(potPin);
  vol = map(potVal, 0, 1023, 0, 80); // 80 is max but way too loud so use 40
  float lastvalue = volf;
  volf = float(vol) / 10;

  if (lastvalue != volf) {
    Serial.println(volf);
  }
}
