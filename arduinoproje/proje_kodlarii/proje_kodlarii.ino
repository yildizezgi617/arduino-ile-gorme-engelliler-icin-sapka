#define echoPin 13
#define trigPin 12

int a;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}

void loop() {
  int olcum = mesafe();

  if(olcum != 0)
  {
    a = 0;
    if(olcum <= 400 && olcum > 300)
    {
      a = 1;
    }
    else if(olcum <=300 && olcum > 200)
    {
      a = 2;
    }
    else if(olcum <=200 && olcum > 150)
    {
      a = 3;
    }
    else if(olcum <=150 && olcum > 100)
    {
      a = 4;
    }
    else if(olcum <=100 && olcum > 50)
    {
      a = 5;
    }
    else if(olcum <=50 && olcum > 25)
    {
      a = 6;
    }
    else if(olcum <=25 && olcum > 0)
    {
      a = 7;
    }
    else
    {
      a = 0;
    }
  }
  
  if(a == 1)
  {
    Serial.print("1");
    delay(4000);
  }
  if(a == 2)
  {
    Serial.print("2");
    delay(4000);
  }
  if(a == 3)
  {
    Serial.print("3");
    delay(4000);
  }
  if(a == 4)
  {
    Serial.print("4");
    delay(4000);
  }
  if(a == 5)
  {
    Serial.print("5");
    delay(4000);
  }
  if(a == 6)
  {
    Serial.print("6");
    delay(4000);
  }
  if(a == 7)
  {
    Serial.print("7");
    delay(4000);
  }
}

int mesafe()
{
  long sure, uzaklik;
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  sure = pulseIn(echoPin, HIGH);
  uzaklik = sure / 58.2;
  delay(50);
  return uzaklik;  
}
