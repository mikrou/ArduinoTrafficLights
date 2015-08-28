int trafficState = 0;
void setup() {
  pinMode(2, INPUT); //button
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  trafficState = digitalRead(2);
  if (trafficState == LOW) { //default state
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    delay(250);
  }
   else { //pedestrian crossing
     digitalWrite(3, LOW);
     digitalWrite(4, HIGH);
     delay(2000);
     digitalWrite(4, LOW);
     digitalWrite(7, HIGH);
     delay(8000);
   }
  }
     
