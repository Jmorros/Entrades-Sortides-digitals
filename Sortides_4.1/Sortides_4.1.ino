/*************************************************************************  
**                                                                      **
**                     Entrades-Sortides digitals                       **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  **************************************************
int p1= 23;
int p2= 25;
int p3= 27;
int p4= 29;

//*******  Setup  ********************************************************
void setup(){
  Serial.begin(9600);   
  pinMode (p1, OUTPUT);
  pinMode (p2, OUTPUT);
  pinMode (p3, OUTPUT);
  pinMode (p4, OUTPUT);
  
}

//*******  Loop  *********************************************************
void loop(){
  digitalWrite (p1, HIGH);
  digitalWrite (p2, LOW);
  digitalWrite (p3, LOW);
  digitalWrite (p4, LOW);
  delay(1000);
  
  digitalWrite (p1, LOW);
  digitalWrite (p2, HIGH);
  delay(1000);
  
  digitalWrite (p2, LOW);
  digitalWrite (p1, HIGH);
  digitalWrite (p3, HIGH);
  delay(1000);
  
  digitalWrite (p1, LOW);
  digitalWrite (p2, HIGH);
  delay(1000);
  
  digitalWrite (p1, HIGH);
  delay(1000);
  
  digitalWrite (p1, LOW);
  digitalWrite (p4, HIGH);
  delay(2000);
  
  
  }





