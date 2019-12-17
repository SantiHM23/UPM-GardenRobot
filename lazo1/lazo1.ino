/*int x;
  const int enaPin = 6;
  const int stepPin = 5;
  const int dirPin = 4;

  void setup()
  {
  pinMode(enaPin, OUTPUT); //Enable
  pinMode(stepPin, OUTPUT); //Step
  pinMode(dirPin, OUTPUT); //Direction

  digitalWrite(6,LOW);
  }

  void loop()
  {
  digitalWrite(4,HIGH);

  for(x = 0; x < 6000; x++)
  {
    digitalWrite(5,HIGH);
    delayMicroseconds(100);
    digitalWrite(5,LOW);
    delayMicroseconds(100);
  }
  delay(1000);

  digitalWrite(4,LOW);

  for(x = 0; x < 6000; x++)
  {
    digitalWrite(5,HIGH);
    delayMicroseconds(50);
    digitalWrite(5,LOW);
    delayMicroseconds(50);
  }
  delay(1000);
  }
  */


/*int Index;
  const int vuelta = 200;
  float xA=1, xB=1 ;

  void setup()
  {
  pinMode(6, OUTPUT); //Enable
  pinMode(5, OUTPUT); //Step
  pinMode(4, OUTPUT); //Direction
  pinMode(3, OUTPUT); //Step
  pinMode(2, OUTPUT); //Direction

  }

  void loop()
  {
  digitalWrite(4,HIGH);

  for(Index = 0; Index < xA*vuelta; Index++)
  {
    digitalWrite(5,HIGH);
    delayMicroseconds(500);
    digitalWrite(5,LOW);
    delayMicroseconds(500);
  }
  delay(1000);

  digitalWrite(4,LOW);

  for(Index = 0; Index < xB*vuelta; Index++)
  {
    digitalWrite(5,HIGH);
    delayMicroseconds(500);
    digitalWrite(5,LOW);
    delayMicroseconds(500);
  }
  delay(1000);


  digitalWrite(2,LOW);

  for(Index = 0; Index < 1*vuelta; Index++)
  {
    digitalWrite(3,HIGH);
    delayMicroseconds(500);
    digitalWrite(3,LOW);
    delayMicroseconds(500);
  }
  delay(1000);
  }
*/

/*int Index;

  void setup()
  {
  pinMode(6, OUTPUT); //Enable
  pinMode(5, OUTPUT); //Step
  pinMode(4, OUTPUT); //Direction
  //  pinMode(7, OUTPUT); //Direction
  //  pinMode(8, OUTPUT); //Step

  digitalWrite(6,LOW);
  }

  void loop()
  {
  digitalWrite(4,HIGH);

  for(Index = 0; Index < 200; Index++)
  {
    digitalWrite(5,HIGH);
    delayMicroseconds(500);
    digitalWrite(5,LOW);
    delayMicroseconds(500);
  }
  delay(1000);

  digitalWrite(4,LOW);

  for(Index = 0; Index < 200; Index++)
  {
    digitalWrite(5,HIGH);
    delayMicroseconds(500);
    digitalWrite(5,LOW);
    delayMicroseconds(500);
  }
  delay(1000);


  /* digitalWrite(7,LOW);

  for(Index = 0; Index < 200; Index++)
  {
    digitalWrite(8,HIGH);
    delayMicroseconds(500);
    digitalWrite(8,LOW);
    delayMicroseconds(500);
  }
  delay(1000);*/

int Index;
const int vuelta = 200;
const float mm = 4.25;

void setup() 
{
  
  pinMode(11, INPUT); //FC1 (NC)    - Amarillo
  pinMode(10, OUTPUT); //z Step     - Morado
  pinMode(9, OUTPUT); //z Direction - Azul
  pinMode(8, OUTPUT); //y Step      - Morado
  pinMode(7, OUTPUT); //y Direction - Azul
  pinMode(6, OUTPUT); //Enable      - 
  pinMode(5, OUTPUT); //x Step      - Morado
  pinMode(4, OUTPUT); //x Direction - Azul
  
  digitalWrite(6,LOW);//ENABLE
  Serial.begin(9600);

}







void loop() 

{ 
bool value = digitalRead(11);
 //----------------------GIRO X------------------------
if (value == LOW) {

            digitalWrite(4,HIGH); //HIGH STEP - Antihorario (Rojo 1º)
          
            for(Index = 0; Index < 47.1*mm; Index++)
            {
              digitalWrite(5,HIGH);
              delayMicroseconds(500);
              digitalWrite(5,LOW);
              delayMicroseconds(500);
            }
            delay(1000);
          
            digitalWrite(4,LOW);
          
            for(Index = 0; Index < 47.1*mm; Index++)
            {
              digitalWrite(5,HIGH);
              delayMicroseconds(500);
              digitalWrite(5,LOW);
              delayMicroseconds(500);
            }
            delay(1000);
  }
  else {
    delay(1000);
  }
}


/*
 //----------------------GIRO Y------------------------

  {
  digitalWrite(7,HIGH);

  for(Index = 0; Index < 0.25*vuelta; Index++)
  {
    digitalWrite(8,HIGH);
    delayMicroseconds(500);
    digitalWrite(8,LOW);
    delayMicroseconds(500);
  }
  delay(1000);

 //----------------------GIRO Z------------------------

  digitalWrite(9,HIGH);

  for(Index = 0; Index < 0.25*vuelta; Index++)
  {
    digitalWrite(10,HIGH);
    delayMicroseconds(500);
    digitalWrite(10,LOW);
    delayMicroseconds(500);
  }
  delay(1000);
  }*/



