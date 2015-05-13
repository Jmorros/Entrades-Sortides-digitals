/*************************************************************************  
**                                                                      **
**                     Entrades-Sortides digitals                       **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  ****************************************************
int Num;
int Num2;
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
  Serial.println("Quin numero vols visualitzar?");
  
}

//*******  Loop  *********************************************************
void loop(){
  
 if( Serial.available() > 0){
   Num2= Serial.parseInt();
     if (Num2 > 255){
       Serial.println (" El numero ha de ser entre 1-255");
     }
     
     else if (Num2 > 0 ){
       Num=Num2;
       Serial.println (Num);
     }
     
     else {
       Serial.println ("");
       Serial.println("Quin numero vols visualitzar?"); 
     }
   }
  
  //Aquesta funció em llegeix el bit del numero, aixi redueixo molt el programa
  pin5= bitRead( Num,0);
  pin6= bitRead( Num,1);
  pin7= bitRead( Num,2);
  pin8= bitRead( Num,3);
  pin9= bitRead( Num,4);
  pin10= bitRead( Num,5);
  pin11= bitRead( Num,6);
  pin12= bitRead( Num,7);
  
  digitalWrite ( 5, pin5);
  digitalWrite ( 6, pin6);
  digitalWrite ( 7, pin7);
  digitalWrite ( 8, pin8);
  digitalWrite ( 9, pin9);
  digitalWrite ( 10, pin10);
  digitalWrite ( 11, pin11);
  digitalWrite ( 12, pin12);
  
}




