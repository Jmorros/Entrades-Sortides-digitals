/*************************************************************************  
**                                                                      **
**                     Entrades-Sortides digitals                       **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  ****************************************************
int I22;
int I24;
int Suma;
int pin5 = LOW;
int pin6 = LOW;
int pin7 = LOW;
int pin8 = LOW;
int pin9 = LOW;
int pin10 = LOW;
int pin11 = LOW;
int pin12 = LOW;

//*******  Setup  ********************************************************
void setup(){
  Serial.begin(9600);     
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (22, INPUT);
  pinMode (24, INPUT);
  
}

//*******  Loop  *********************************************************
void loop(){
  //Part de sumar
  I22= digitalRead (22);
  
  while (I22 == HIGH ) {
    
  I22= digitalRead (22);
  delay (100);
   if ( I22 == LOW){
     if (Suma == 255){
       Suma=0;
     }
     else {
       Suma ++;
     }
     break;
   } 
  }
  //Part de restar
  I24= digitalRead (24);
  
  while (I24 == HIGH ) {
    
  I24= digitalRead (24);
  delay (100);
   if ( I24 == LOW){
     if (Suma == 0){
       Suma=255;
     }
     else {
       Suma --;
     }
     break;
   } 
  }
  
  Serial.println(Suma);
  
  //Aquesta funció em llegeix el bit del numero, aixi redueixo molt el programa
  pin5= bitRead( Suma,0);
  pin6= bitRead( Suma,1);
  pin7= bitRead( Suma,2);
  pin8= bitRead( Suma,3);
  pin9= bitRead( Suma,4);
  pin10= bitRead( Suma,5);
  pin11= bitRead( Suma,6);
  pin12= bitRead( Suma,7);
  
  digitalWrite ( 5, pin5);
  digitalWrite ( 6, pin6);
  digitalWrite ( 7, pin7);
  digitalWrite ( 8, pin8);
  digitalWrite ( 9, pin9);
  digitalWrite ( 10, pin10);
  digitalWrite ( 11, pin11);
  digitalWrite ( 12, pin12);
  
}




