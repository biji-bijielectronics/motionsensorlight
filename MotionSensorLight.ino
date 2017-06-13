void setup() {
  // put your setup code here, to run once:

pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
pinMode(2,INPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  int motion = digitalRead(2);

  if (motion == 1) {
    //analogWrite(pin,number) (5,255)
  digitalWrite(5, HIGH); 
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);

  } else {
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  }

}
