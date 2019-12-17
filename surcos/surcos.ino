
int Index;
const int vuelta = 200;
const float mm = 4.25;
const int bajaz = 50;
const int espera = 100;

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

  digitalWrite(6, LOW); //ENABLE
  Serial.begin(9600);

  //----------------------  1  -------------------------
  //----------------------GIRO X + ------------------------

  digitalWrite(4, LOW); //HIGH STEP - Antihorario (Rojo 1º)

  for (Index = 0; Index < 65 * mm; Index++)
  {
    digitalWrite(5, HIGH);
    delayMicroseconds(500);
    digitalWrite(5, LOW);
    delayMicroseconds(500);
  }
  delay(espera);

  //---------------------- 2  -------------------------
  //----------------------GIRO Y + ------------------------


  digitalWrite(7, LOW);

  for (Index = 0; Index < 65*mm; Index++)
  {
    digitalWrite(8, HIGH);
    delayMicroseconds(500);
    digitalWrite(8, LOW);
    delayMicroseconds(500);
  }
  delay(espera);
  
 //----------------------  3  -------------------------
 //----------------------GIRO Z - ------------------------

  digitalWrite(9,HIGH);

  for(Index = 0; Index < bajaz*mm; Index++)
  {
    digitalWrite(10,HIGH);
    delayMicroseconds(1000);
    digitalWrite(10,LOW);
    delayMicroseconds(1000);
  }
  delay(espera);

//----------------------  4  -------------------------
//----------------------GIRO Z + ------------------------

  digitalWrite(9,LOW);

  for(Index = 0; Index < bajaz*mm; Index++)
  {
    digitalWrite(10,HIGH);
    delayMicroseconds(500);
    digitalWrite(10,LOW);
    delayMicroseconds(500);
  }
  delay(espera);


  //---------------------- 5  -------------------------
  //----------------------GIRO Y + ------------------------


  digitalWrite(7, LOW);

  for (Index = 0; Index < 65*mm; Index++)
  {
    digitalWrite(8, HIGH);
    delayMicroseconds(500);
    digitalWrite(8, LOW);
    delayMicroseconds(500);
  }
  delay(espera);
  
  //----------------------  6  -------------------------
 //----------------------GIRO Z - ------------------------

  digitalWrite(9,HIGH);

  for(Index = 0; Index < bajaz*mm; Index++)
  {
    digitalWrite(10,HIGH);
    delayMicroseconds(1000);
    digitalWrite(10,LOW);
    delayMicroseconds(1000);
  }
  delay(espera);

//----------------------  7  -------------------------
//----------------------GIRO Z + ------------------------

  digitalWrite(9,LOW);

  for(Index = 0; Index < bajaz*mm; Index++)
  {
    digitalWrite(10,HIGH);
    delayMicroseconds(500);
    digitalWrite(10,LOW);
    delayMicroseconds(500);
  }
  delay(espera);



  //---------------------- 8  -------------------------
  //----------------------GIRO Y + ------------------------


  digitalWrite(7, LOW);

  for (Index = 0; Index < 65*mm; Index++)
  {
    digitalWrite(8, HIGH);
    delayMicroseconds(500);
    digitalWrite(8, LOW);
    delayMicroseconds(500);
  }
  delay(espera);
  //----------------------  9  -------------------------
 //----------------------GIRO Z - ------------------------

  digitalWrite(9,HIGH);

  for(Index = 0; Index < bajaz*mm; Index++)
  {
    digitalWrite(10,HIGH);
    delayMicroseconds(1000);
    digitalWrite(10,LOW);
    delayMicroseconds(1000);
  }
  delay(espera);

//----------------------  10  -------------------------
//----------------------GIRO Z + ------------------------

  digitalWrite(9,LOW);

  for(Index = 0; Index < bajaz*mm; Index++)
  {
    digitalWrite(10,HIGH);
    delayMicroseconds(500);
    digitalWrite(10,LOW);
    delayMicroseconds(500);
  }
  delay(espera);




  //---------------------- 11  -------------------------
  //----------------------GIRO Y - ------------------------


  digitalWrite(7, HIGH);

  for (Index = 0; Index < 130*mm; Index++)
  {
    digitalWrite(8, HIGH);
    delayMicroseconds(500);
    digitalWrite(8, LOW);
    delayMicroseconds(500);
  }
  delay(espera);


  //----------------------  12  -------------------------
  //----------------------GIRO X + ------------------------

  digitalWrite(4, LOW); //HIGH STEP - Antihorario (Rojo 1º)

  for (Index = 0; Index < 65 * mm; Index++)
  {
    digitalWrite(5, HIGH);
    delayMicroseconds(500);
    digitalWrite(5, LOW);
    delayMicroseconds(500);
  }
  delay(espera);
  //----------------------  13  -------------------------
 //----------------------GIRO Z - ------------------------

  digitalWrite(9,HIGH);

  for(Index = 0; Index < bajaz*mm; Index++)
  {
    digitalWrite(10,HIGH);
    delayMicroseconds(1000);
    digitalWrite(10,LOW);
    delayMicroseconds(1000);
  }
  delay(espera);

//----------------------  14  -------------------------
//----------------------GIRO Z + ------------------------

  digitalWrite(9,LOW);

  for(Index = 0; Index < bajaz*mm; Index++)
  {
    digitalWrite(10,HIGH);
    delayMicroseconds(500);
    digitalWrite(10,LOW);
    delayMicroseconds(500);
  }
  delay(espera);



  //---------------------- 15  -------------------------
  //----------------------GIRO Y - ------------------------


  digitalWrite(7, LOW);

  for (Index = 0; Index < 65*mm; Index++)
  {
    digitalWrite(8, HIGH);
    delayMicroseconds(500);
    digitalWrite(8, LOW);
    delayMicroseconds(500);
  }
  delay(espera);
  
 //----------------------  16  -------------------------
 //----------------------GIRO Z - ------------------------

  digitalWrite(9,HIGH);

  for(Index = 0; Index < bajaz*mm; Index++)
  {
    digitalWrite(10,HIGH);
    delayMicroseconds(1000);
    digitalWrite(10,LOW);
    delayMicroseconds(1000);
  }
  delay(espera);

//----------------------  17  -------------------------
//----------------------GIRO Z + ------------------------

  digitalWrite(9,LOW);

  for(Index = 0; Index < bajaz*mm; Index++)
  {
    digitalWrite(10,HIGH);
    delayMicroseconds(500);
    digitalWrite(10,LOW);
    delayMicroseconds(500);
  }
  delay(espera);



  //---------------------- 18  -------------------------
  //----------------------GIRO Y + ------------------------


  digitalWrite(7, LOW);

  for (Index = 0; Index < 65*mm; Index++)
  {
    digitalWrite(8, HIGH);
    delayMicroseconds(500);
    digitalWrite(8, LOW);
    delayMicroseconds(500);
  }
  delay(espera);
 //----------------------  19  -------------------------
 //----------------------GIRO Z - ------------------------

  digitalWrite(9,HIGH);

  for(Index = 0; Index < bajaz*mm; Index++)
  {
    digitalWrite(10,HIGH);
    delayMicroseconds(1000);
    digitalWrite(10,LOW);
    delayMicroseconds(1000);
  }
  delay(espera);

//----------------------  20  -------------------------
//----------------------GIRO Z + ------------------------

  digitalWrite(9,LOW);

  for(Index = 0; Index < bajaz*mm; Index++)
  {
    digitalWrite(10,HIGH);
    delayMicroseconds(500);
    digitalWrite(10,LOW);
    delayMicroseconds(500);
  }
  delay(espera);


  //---------------------- 21  -------------------------
  //----------------------GIRO Y - ------------------------


  digitalWrite(7, HIGH);

  for (Index = 0; Index < 130*mm; Index++)
  {
    digitalWrite(8, HIGH);
    delayMicroseconds(500);
    digitalWrite(8, LOW);
    delayMicroseconds(500);
  }
  delay(espera);


  //----------------------  22  -------------------------
  //----------------------GIRO X + ------------------------

  digitalWrite(4, LOW); //HIGH STEP - Antihorario (Rojo 1º)

  for (Index = 0; Index < 65 * mm; Index++)
  {
    digitalWrite(5, HIGH);
    delayMicroseconds(500);
    digitalWrite(5, LOW);
    delayMicroseconds(500);
  }
  delay(espera);
 //----------------------  23  -------------------------
 //----------------------GIRO Z - ------------------------

  digitalWrite(9,HIGH);

  for(Index = 0; Index < bajaz*mm; Index++)
  {
    digitalWrite(10,HIGH);
    delayMicroseconds(1000);
    digitalWrite(10,LOW);
    delayMicroseconds(1000);
  }
  delay(espera);

//----------------------  24  -------------------------
//----------------------GIRO Z + ------------------------

  digitalWrite(9,LOW);

  for(Index = 0; Index < bajaz*mm; Index++)
  {
    digitalWrite(10,HIGH);
    delayMicroseconds(500);
    digitalWrite(10,LOW);
    delayMicroseconds(500);
  }
  delay(espera);


  //---------------------- 25  -------------------------
  //----------------------GIRO Y + ------------------------


  digitalWrite(7, LOW);

  for (Index = 0; Index < 65*mm; Index++)
  {
    digitalWrite(8, HIGH);
    delayMicroseconds(500);
    digitalWrite(8, LOW);
    delayMicroseconds(500);
  }
  delay(espera);
  
 //----------------------  26  -------------------------
 //----------------------GIRO Z - ------------------------

  digitalWrite(9,HIGH);

  for(Index = 0; Index < bajaz*mm; Index++)
  {
    digitalWrite(10,HIGH);
    delayMicroseconds(1000);
    digitalWrite(10,LOW);
    delayMicroseconds(1000);
  }
  delay(espera);

//----------------------  27  -------------------------
//----------------------GIRO Z + ------------------------

  digitalWrite(9,LOW);

  for(Index = 0; Index < bajaz*mm; Index++)
  {
    digitalWrite(10,HIGH);
    delayMicroseconds(500);
    digitalWrite(10,LOW);
    delayMicroseconds(500);
  }
  delay(espera);



  //---------------------- 28  -------------------------
  //----------------------GIRO Y + ------------------------


  digitalWrite(7, LOW);

  for (Index = 0; Index < 65*mm; Index++)
  {
    digitalWrite(8, HIGH);
    delayMicroseconds(500);
    digitalWrite(8, LOW);
    delayMicroseconds(500);
  }
  delay(espera);
 //----------------------  29  -------------------------
 //----------------------GIRO Z - ------------------------

  digitalWrite(9,HIGH);

  for(Index = 0; Index < bajaz*mm; Index++)
  {
    digitalWrite(10,HIGH);
    delayMicroseconds(1000);
    digitalWrite(10,LOW);
    delayMicroseconds(1000);
  }
  delay(espera);

//----------------------  30  -------------------------
//----------------------GIRO Z + ------------------------

  digitalWrite(9,LOW);

  for(Index = 0; Index < bajaz*mm; Index++)
  {
    digitalWrite(10,HIGH);
    delayMicroseconds(500);
    digitalWrite(10,LOW);
    delayMicroseconds(500);
  }
  delay(espera);


  //---------------------- 31  -------------------------
  //----------------------GIRO Y - ------------------------


  digitalWrite(7, HIGH);

  for (Index = 0; Index < 195*mm; Index++)
  {
    digitalWrite(8, HIGH);
    delayMicroseconds(500);
    digitalWrite(8, LOW);
    delayMicroseconds(500);
  }
  delay(espera);

  //----------------------  32  -------------------------
  //----------------------GIRO X - ------------------------

  digitalWrite(4, HIGH); //HIGH STEP - Antihorario (Rojo 1º)

  for (Index = 0; Index < 195* mm; Index++)
  {
    digitalWrite(5, HIGH);
    delayMicroseconds(500);
    digitalWrite(5, LOW);
    delayMicroseconds(500);
  }
  delay(espera);
}


void loop()

{
  
}
