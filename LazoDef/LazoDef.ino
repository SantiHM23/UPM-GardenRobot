//    CÓDIGO DE LAZO CERRADO ROBOT JARDINERO (COMPLEMENTO MEMORIA)

//            GRUPO A-302

//    Álvaro Ruedas Mora (50.995) 
//    Daniel Romero de Miguel (51.453) 
//    Álvaro Iglesias Muñoz (51.044)
//    Santiago Herrero Melo (50.690)




int Index;
const int vuelta = 200;
const float mm = 4.25;
const int bajaz = 50;
const int espera = 100;

void setup()
{

  pinMode(12, INPUT); //FC2 (NC)    - Blanco LED ROJO
  pinMode(11, INPUT); //FC1 (NC)    - Gris LED VERDE
  pinMode(10, OUTPUT); //z Step     - Morado
  pinMode(9, OUTPUT); //z Direction - Azul
  pinMode(8, OUTPUT); //y Step      - Morado
  pinMode(7, OUTPUT); //y Direction - Azul
  pinMode(6, OUTPUT); //Enable      -
  pinMode(5, OUTPUT); //x Step      - Morado
  pinMode(4, OUTPUT); //x Direction - Azul
  int valueR = 0;
  int valueV = 0;
  digitalWrite(6, LOW); //ENABLE
  
do
{
  //----------------------  1  -------------------------
  //----------------------GIRO X + ------------------------

  digitalWrite(4, LOW);

  for (Index = 0; Index < 65 * mm; Index++)
  {
    digitalWrite(5, HIGH);
    delayMicroseconds(500);
    digitalWrite(5, LOW);
    delayMicroseconds(500);
  }
  delay(espera);
  
              do
               { 
                

              
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
                 //---------------------- 2  -------------------------
                //----------------------GIRO Y + ------------------------
              
              
                digitalWrite(7, LOW);
              
                for (Index = 0; Index < 60*mm; Index++)
                {
                  digitalWrite(8, HIGH);
                  delayMicroseconds(500);
                  digitalWrite(8, LOW);
                  delayMicroseconds(500);
                }
                delay(espera);
             
                valueV = digitalRead(11);
                valueR = digitalRead(12);
               }while(valueV == LOW);

               
//---------------------- RECOGE Y  ----------------------
//----------------------GIRO Y + ------------------------
              
              
digitalWrite(7, HIGH);
              
for (Index = 0; Index < 290*mm; Index++)
{
    digitalWrite(8, HIGH);
    delayMicroseconds(500);
    digitalWrite(8, LOW);
    delayMicroseconds(500);
}
delay(espera);
valueV = digitalRead(11);
valueR = digitalRead(12);
              
}while(valueR == LOW);

  //----------------------  RECOGE X  ---------------------
  //----------------------GIRO X + ------------------------

  digitalWrite(4, HIGH);

  for (Index = 0; Index < 350* mm; Index++)
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

