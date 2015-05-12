/*************************************************************************  
**                                                                      **
**                     Entrades-Sortides digitals                       **                                               
**                                                                      **
*************************************************************************/
//Descripcio del programa
//Aquest programa té dos funcions 
// La 1 els leds van d'una banda a una altra
// La 2 els leds van del centre als costats i dels costats al centre


//*******  Includes  *****************************************************


//*******  Variables  ****************************************************
int Funcio= 1 ;
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
  
  
}

//*******  Loop  *********************************************************
void loop(){
  
  while ( Serial.available() > 0){
    Funcio = Serial.parseInt();
    Serial.print (Funcio);
    
    if ( Funcio == 1){
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, HIGH); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, HIGH);
  digitalWrite (12, HIGH); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, HIGH);
  digitalWrite (11, HIGH);
  digitalWrite (12, HIGH); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, HIGH);
  digitalWrite (10, HIGH);
  digitalWrite (11, HIGH);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, HIGH);
  digitalWrite (9, HIGH);
  digitalWrite (10, HIGH);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, HIGH);
  digitalWrite (8, HIGH);
  digitalWrite (9, HIGH);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);
  digitalWrite (8, HIGH);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, HIGH);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, HIGH);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);
  digitalWrite (8, HIGH);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, HIGH);
  digitalWrite (8, HIGH);
  digitalWrite (9, HIGH);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, HIGH);
  digitalWrite (9, HIGH);
  digitalWrite (10, HIGH);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, HIGH);
  digitalWrite (10, HIGH);
  digitalWrite (11, HIGH);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, HIGH);
  digitalWrite (11, HIGH);
  digitalWrite (12, HIGH); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, HIGH);
  digitalWrite (12, HIGH); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, HIGH); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
    }
  
 //*Aqui comença la part del centre cap als costats 
  else if (Funcio == 2) {
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, HIGH);
  digitalWrite (9, HIGH);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, HIGH);
  digitalWrite (8, HIGH);
  digitalWrite (9, HIGH);
  digitalWrite (10, HIGH);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, HIGH);
  digitalWrite (11, HIGH);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, HIGH);
  digitalWrite (12, HIGH); 
  
  delay(100);
  
  digitalWrite (5, HIGH);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, HIGH); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, HIGH);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, HIGH); 
  
  delay(100);
  
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, HIGH);
  digitalWrite (12, HIGH); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, HIGH);
  digitalWrite (11, HIGH);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, HIGH);
  digitalWrite (8, HIGH);
  digitalWrite (9, HIGH);
  digitalWrite (10, HIGH);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, HIGH);
  digitalWrite (9, HIGH);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);
  digitalWrite (9, LOW);
  digitalWrite (10, LOW);
  digitalWrite (11, LOW);
  digitalWrite (12, LOW); 
  
  delay(100);
  
  }
  else {
    Funcio = 0 ;
  }
  }
  
}




