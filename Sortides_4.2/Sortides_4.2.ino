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
int pols= 31;
int estat;
int num;

//*******  Setup  ********************************************************
void setup(){
  Serial.begin(9600);   
  pinMode (p1, OUTPUT);
  pinMode (p2, OUTPUT);
  pinMode (p3, OUTPUT);
  pinMode (p4, OUTPUT);
  pinMode (pols, INPUT);
  
}

//*******  Loop  *********************************************************
void loop(){
  estat= digitalRead(pols);
  Serial.println(estat);
  if (estat==HIGH){
   num=random(1, 7);
   delay(500);
  } 
  
  switch (num){
  
  case 1:
  digitalWrite (p1, HIGH);
  digitalWrite (p2, LOW);
  digitalWrite (p3, LOW);
  digitalWrite (p4, LOW);
  break;
  
  case 2:
  digitalWrite (p1, LOW);
  digitalWrite (p2, HIGH);
  digitalWrite (p3, LOW);
  digitalWrite (p4, LOW);
  break;
  
  case 3:
  digitalWrite (p1, HIGH);
  digitalWrite (p2, LOW);
  digitalWrite (p3, HIGH);
  digitalWrite (p4, LOW);
  break;
  
  case 4:
  digitalWrite (p1, LOW);
  digitalWrite (p2, HIGH);
  digitalWrite (p3, HIGH);
  digitalWrite (p4, LOW);
  break;
  
  case 5:
  digitalWrite (p1, HIGH);
  digitalWrite (p2, HIGH);
  digitalWrite (p3, HIGH);
  digitalWrite (p4, LOW);
  break;
  
  case 6:
  digitalWrite (p1, LOW);
  digitalWrite (p2, HIGH);
  digitalWrite (p3, HIGH);
  digitalWrite (p4, HIGH);
  break;
}
  
  }





