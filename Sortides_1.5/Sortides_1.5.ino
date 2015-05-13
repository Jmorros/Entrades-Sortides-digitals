/*************************************************************************  
**                                                                      **
**                     Entrades-Sortides digitals                       **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  ****************************************************
int I22;
int Suma;
int pin5 = LOW;
int pin6 = LOW;
int pin7 = LOW;
int pin8 = LOW;

//*******  Setup  ********************************************************
void setup(){
  Serial.begin(9600);     
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (22, INPUT);
  
}

//*******  Loop  *********************************************************
void loop(){
  I22= digitalRead (22);
  
  while (I22 == HIGH ) {
    
  I22= digitalRead (22);
  delay (100);
   if ( I22 == LOW){
     if (Suma == 15){
       Suma=0;
     }
     else {
       Suma ++;
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
  
  digitalWrite ( 5, pin5);
  digitalWrite ( 6, pin6);
  digitalWrite ( 7, pin7);
  digitalWrite ( 8, pin8);
  
}




