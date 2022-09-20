int t=2;
int e=3;

void setup()
{
  Serial.begin(9600);
  pinMode(t,OUTPUT);
  pinMode(e,INPUT);
  pinMode(12,OUTPUT);
}

void loop()
{
  digitalWrite(t,LOW);
  digitalWrite(t,HIGH);
  delayMicroseconds(10);
  digitalWrite(t,LOW);
  float dur=pulseIn(e,HIGH);
  float dist=(dur*0.0343)/2;
  Serial.print("Distance: ");
  Serial.println(dist);

  if(dist>=100)
  {
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
  }


  double a= analogRead(A0);
  double t=(((a/1024)*5)-0.5)*100;
  Serial.print("Temperature reading: ");
  Serial.println(t);
  delay(1000);

  if(t>=98)
  {
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
  }

  if(t<98)
  {
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
  }
}
