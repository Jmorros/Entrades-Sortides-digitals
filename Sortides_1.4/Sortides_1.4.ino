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
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);

  
  
}

//*******  Loop  *********************************************************
void loop(){
  
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);

  delay(1000);
  
  digitalWrite (5, HIGH);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);

  delay(1000);

  digitalWrite (5, LOW);
  digitalWrite (6, HIGH);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);

  delay(1000);

  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (7, LOW);
  digitalWrite (8, LOW);

  delay(1000);

  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, HIGH);
  digitalWrite (8, LOW);

  delay(1000);

  digitalWrite (5, HIGH);
  digitalWrite (6, LOW);
  digitalWrite (7, HIGH);
  digitalWrite (8, LOW);

  delay(1000);

  digitalWrite (5, LOW);
  digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);
  digitalWrite (8, LOW);

  delay(1000);

  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);
  digitalWrite (8, LOW);

  delay(1000);

  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, HIGH);

  delay(1000);

  digitalWrite (5, HIGH);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);
  digitalWrite (8, HIGH);

  delay(1000);

  digitalWrite (5, LOW);
  digitalWrite (6, HIGH);
  digitalWrite (7, LOW);
  digitalWrite (8, HIGH);

  delay(1000);

  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (7, LOW);
  digitalWrite (8, HIGH);

  delay(1000);

  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, HIGH);
  digitalWrite (8, HIGH);

  delay(1000);

  digitalWrite (5, HIGH);
  digitalWrite (6, LOW);
  digitalWrite (7, HIGH);
  digitalWrite (8, HIGH);

  delay(1000);

  digitalWrite (5, LOW);
  digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);
  digitalWrite (8, HIGH);

  delay(1000);

  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);
  digitalWrite (8, HIGH);

  delay(1000);

}




