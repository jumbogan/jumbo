int Buzzer = 9;
int TouchSensor = 2; 
int val;

void setup() {
  // put your setup code here, to run once:
pinMode (Buzzer, OUTPUT);
pinMode (TouchSensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
val = digitalRead (TouchSensor) ;
if (val == LOW){
digitalWrite (Buzzer, HIGH);
}
else
{
  digitalWrite (Buzzer, LOW);
}
}
