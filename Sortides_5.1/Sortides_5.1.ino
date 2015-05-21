/*************************************************************************  
**                                                                      **
**                     Entrades-Sortides digitals                       **                                               
**                                                                      **
*************************************************************************/

//*******  Includes  *****************************************************


//*******  Variables  **************************************************

int LED1= 22;
int LED2= 24;
int LED3= 26;
int LED4= 28;
int LED5= 30;
int LED6= 32;
int LED9= 34;
int LED8= 36;
int LED7= 38;
int Col1= 44;
int Col2= 40;
int Col3= 42;
int T= 100;

//*******  Setup  ********************************************************
void setup(){
  Serial.begin(9600); 
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  pinMode (LED4, OUTPUT);
  pinMode (LED5, OUTPUT);
  pinMode (LED6, OUTPUT);
  pinMode (LED7, OUTPUT);
  pinMode (LED8, OUTPUT);
  pinMode (LED9, OUTPUT);
  pinMode (Col1, OUTPUT);
  pinMode (Col2, OUTPUT);
  pinMode (Col3, OUTPUT);
  
}

//*******  Loop  *********************************************************
void loop(){
  
  //Comença la columna 1 dels LEDs 1-9
 digitalWrite (LED9, LOW);
 digitalWrite (Col3, LOW);
 digitalWrite (LED1, HIGH);
 digitalWrite (Col1, HIGH);
 delay (T);
 
 digitalWrite (LED1, LOW);
 digitalWrite (LED2, HIGH);
 delay (T);
 
 digitalWrite (LED2, LOW);
 digitalWrite (LED3, HIGH);
 delay (T);
 
 digitalWrite (LED3, LOW);
 digitalWrite (LED4, HIGH);
 delay (T);
 
 digitalWrite (LED4, LOW);
 digitalWrite (LED5, HIGH);
 delay (T);
 
 digitalWrite (LED5, LOW);
 digitalWrite (LED6, HIGH);
 delay (T);
 
 digitalWrite (LED6, LOW);
 digitalWrite (LED7, HIGH);
 delay (T);
 
 digitalWrite (LED7, LOW);
 digitalWrite (LED8, HIGH);
 delay (T);
 
 digitalWrite (LED8, LOW);
 digitalWrite (LED9, HIGH);
 delay (T);
 
 //Comença la columna 2 dels LEDs 1-9
 digitalWrite (LED9, LOW);
 digitalWrite (Col1, LOW);
 digitalWrite (LED1, HIGH);
 digitalWrite (Col2, HIGH);
 delay (T);
 
 digitalWrite (LED1, LOW);
 digitalWrite (LED2, HIGH);
 delay (T);
 
 digitalWrite (LED2, LOW);
 digitalWrite (LED3, HIGH);
 delay (T);
 
 digitalWrite (LED3, LOW);
 digitalWrite (LED4, HIGH);
 delay (T);
 
 digitalWrite (LED4, LOW);
 digitalWrite (LED5, HIGH);
 delay (T);
 
 digitalWrite (LED5, LOW);
 digitalWrite (LED6, HIGH);
 delay (T);
 
 digitalWrite (LED6, LOW);
 digitalWrite (LED7, HIGH);
 delay (T);
 
 digitalWrite (LED7, LOW);
 digitalWrite (LED8, HIGH);
 delay (T);
 
 digitalWrite (LED8, LOW);
 digitalWrite (LED9, HIGH);
 delay (T);
 
 //Comença la columna 3 dels LEDs 1-9
 digitalWrite (LED9, LOW);
 digitalWrite (Col2, LOW);
 digitalWrite (LED1, HIGH);
 digitalWrite (Col3, HIGH);
 delay (T);
 
 digitalWrite (LED1, LOW);
 digitalWrite (LED2, HIGH);
 delay (T);
 
 digitalWrite (LED2, LOW);
 digitalWrite (LED3, HIGH);
 delay (T);
 
 digitalWrite (LED3, LOW);
 digitalWrite (LED4, HIGH);
 delay (T);
 
 digitalWrite (LED4, LOW);
 digitalWrite (LED5, HIGH);
 delay (T);
 
 digitalWrite (LED5, LOW);
 digitalWrite (LED6, HIGH);
 delay (T);
 
 digitalWrite (LED6, LOW);
 digitalWrite (LED7, HIGH);
 delay (T);
 
 digitalWrite (LED7, LOW);
 digitalWrite (LED8, HIGH);
 delay (T);
 
 digitalWrite (LED8, LOW);
 digitalWrite (LED9, HIGH);
 delay (T);

  }





