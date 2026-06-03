byte wypelnienie = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode(2,OUTPUT); // wyjście PWM
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(14,OUTPUT);
  pinMode(15,OUTPUT);
  pinMode(A0,INPUT); // wejście potencjometru
}

void loop() 
{
  wypelnienie = map(analogRead(A0) ,0,1023,0,255);
  Serial.println("Wypełnienie:" );
  Serial.println(wypelnienie);
  analogWrite(2,wypelnienie);
  if(wypelnienie >= 25.5)
  {
    digitalWrite(3,HIGH);
  }
  else
  {
    digitalWrite(3,LOW);
  }

  if(wypelnienie >= 51)
  {
    digitalWrite(4,HIGH);
  }
  else
  {
    digitalWrite(4,LOW);
  }

  if(wypelnienie >= 76.5)
  {
    digitalWrite(5,HIGH);
  }
  else
  {
    digitalWrite(5,LOW);
  }

  if(wypelnienie >= 102)
  {
    digitalWrite(6,HIGH);
  }
  else
  {
    digitalWrite(6,LOW);
  }

  if(wypelnienie >= 127.5)
  {
    digitalWrite(7,HIGH);
  }
  else
  {
    digitalWrite(7,LOW);
  }

    if(wypelnienie >= 153)
  {
    digitalWrite(8,HIGH);
  }
  else
  {
    digitalWrite(8,LOW);
  }

  if(wypelnienie >= 178.5)
  {
    digitalWrite(9,HIGH);
  }
  else
  {
    digitalWrite(9,LOW);
  }

  if(wypelnienie >= 204)
  {
    digitalWrite(10,HIGH);
  }
  else
  {
    digitalWrite(10,LOW);
  }

  if(wypelnienie >= 229.5)
  {
    digitalWrite(14,HIGH);
  }
  else
  {
    digitalWrite(14,LOW);
  }

  if(wypelnienie >= 255)
  {
    digitalWrite(15,HIGH);
  }
  else
  {
    digitalWrite(15,LOW);
  }
  
}
