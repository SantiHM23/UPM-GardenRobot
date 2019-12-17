int Index;
const int vuelta = 200;
const float mm = 4.25;

void setup()
{
  pinMode(13, OUTPUT); //Regado     - Amarillo
  pinMode(11, INPUT); //FC1 (NC)    - Amarillo
  pinMode(10, OUTPUT); //z Step     - Morado
  pinMode(9, OUTPUT); //z Direction - Azul
  pinMode(8, OUTPUT); //y Step      - Morado
  pinMode(7, OUTPUT); //y Direction - Azul
  pinMode(6, OUTPUT); //Enable      -
  pinMode(5, OUTPUT); //x Step      - Morado
  pinMode(4, OUTPUT); //x Direction - Azul
  digitalWrite(13, LOW); // Bomba OFF
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
  delay(1000);

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
  delay(1000);


 //----------------------  REGADO  -------------------------

  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(1000);
  
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
  delay(1000);


 //----------------------  REGADO  -------------------------

  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(1000);

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
  delay(1000);
  
 //----------------------  REGADO  -------------------------


  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(1000);

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
  delay(1000);


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
  delay(1000);

 //----------------------  REGADO  -------------------------

  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(1000);
  
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
  delay(1000);


 //----------------------  REGADO  -------------------------

  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(1000);
  
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
  delay(1000);

 //----------------------  REGADO  -------------------------


  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(1000);
  
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
  delay(1000);


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
  delay(1000);

 //----------------------  REGADO  -------------------------


  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(1000);
  
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
  delay(1000);


 //----------------------  REGADO  -------------------------


  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(1000);

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
  delay(1000);
  
 //----------------------  REGADO  -------------------------


  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(1000);

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
  delay(1000);

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
  delay(1000);

}

void loop()

{

}

