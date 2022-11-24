void setup() {
  pinMode(12, OUTPUT);
  Serial.begin(9600); //设置串口波特率9600
}

void loop() { 
      digitalWrite(12, LOW);
      delay(8000);
        
      digitalWrite(12, HIGH);
      delay(8000);
}
