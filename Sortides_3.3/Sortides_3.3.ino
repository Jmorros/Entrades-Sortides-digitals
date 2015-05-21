/*************************************************************************  
**                                                                      **
**                     Entrades-Sortides digitals                       **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  **************************************************
int g= 53;
int f= 51;
int a= 49;
int b= 47;
int e= 45;
int d= 43;
int c= 41;
int dot= 39;
int num;
//*******  Setup  ********************************************************
void setup(){
  Serial.begin(9600);   
  pinMode (g, OUTPUT);
  pinMode (f, OUTPUT);
  pinMode (a, OUTPUT);
  pinMode (b, OUTPUT);
  pinMode (e, OUTPUT);
  pinMode (d, OUTPUT);
  pinMode (c, OUTPUT);
  pinMode (dot, OUTPUT);
  
}

//*******  Loop  *********************************************************
void loop(){
  digitalWrite (dot, LOW);
  digitalWrite (e, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (b, HIGH);
  delay(1000);
  
  digitalWrite (f, HIGH);
  digitalWrite (a, HIGH);
  delay(1000);
  
  digitalWrite (g, HIGH);
  digitalWrite (a, LOW);
  digitalWrite (f, LOW);
  digitalWrite (b, LOW);
  digitalWrite (c, LOW);
  digitalWrite (d, LOW);
  delay (1000);
  
  digitalWrite (d, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (b, HIGH);
  delay (1000);
  
  digitalWrite (g, LOW);
  digitalWrite (e, LOW);
  digitalWrite (d, LOW);
  delay (1000);
  
  digitalWrite (dot, HIGH);
  digitalWrite (b, LOW);
  digitalWrite (c, LOW);
  delay (500);
 
}




