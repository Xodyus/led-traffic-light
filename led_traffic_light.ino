int delay_long = 5000;
void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(8, OUTPUT);
pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(7, HIGH);
delay(delay_long);
digitalWrite(7, LOW);

digitalWrite(8, HIGH);
delay(1000);
digitalWrite(8, LOW);

digitalWrite(13, HIGH);
delay(delay_long);
digitalWrite(13, LOW);
}
