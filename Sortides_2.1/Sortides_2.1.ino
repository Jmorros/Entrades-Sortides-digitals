/*************************************************************************  
**                                                                      **
**                     Entrades-Sortides digitals                       **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  ****************************************************


//*******  Setup  ********************************************************
void setup(){
  Serial.begin(9600);   
  pinMode (30, OUTPUT);
  pinMode (31, OUTPUT);
  pinMode (32, OUTPUT);
  pinMode (36, OUTPUT);
  pinMode (37, OUTPUT);
  pinMode (38, OUTPUT);
  
}

//*******  Loop  *********************************************************
void loop(){
  //Semafor B
  digitalWrite ( 30, HIGH);
  digitalWrite ( 36, HIGH); 
  delay (2000);
  
  digitalWrite ( 36, LOW);
  digitalWrite ( 38, HIGH);  
  delay(8000);
  
  digitalWrite ( 38, LOW);
  digitalWrite ( 37, HIGH);
  delay(1000);
  
  digitalWrite ( 37, LOW);
  digitalWrite ( 36, HIGH);
  delay (2000);
  
  //Semafor A

  digitalWrite ( 30, LOW);
  digitalWrite ( 32, HIGH);  
  delay(8000);
  
  digitalWrite ( 32, LOW);
  digitalWrite ( 31, HIGH);
  delay(1000);
  
  digitalWrite ( 31, LOW);



  
}




