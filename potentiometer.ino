int potpin=0;
void setup() {
  // put your setup code here, to run once:
pinMode(potpin,INPUT);
Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
Serial.println(analogRead(potpin));
delay(1000);
}
