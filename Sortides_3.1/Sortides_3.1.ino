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
  
    if (num == 10){
      num= 0;
    }
    
    else {
      num++;
      delay (1000);
    }
    
    Serial.println (num);
  
  switch (num) {
    case 0:
      digitalWrite (a, HIGH);
      digitalWrite (b, HIGH);
      digitalWrite (c, HIGH);
      digitalWrite (d, HIGH);
      digitalWrite (e, HIGH);
      digitalWrite (f, HIGH);
      digitalWrite (g, LOW);
      break;
      
    case 1:
      digitalWrite (a, LOW);
      digitalWrite (f, LOW);
      digitalWrite (e, LOW);
      digitalWrite (d, LOW);
      break;
      
    case 2:
      digitalWrite (a, HIGH);
      digitalWrite (g, HIGH);
      digitalWrite (e, HIGH);
      digitalWrite (d, HIGH);
      digitalWrite (c, LOW);
      break;
      
    case 3:
      digitalWrite (e, LOW);
      digitalWrite (c, HIGH);
      break;
      
    case 4:
      digitalWrite (a, LOW);
      digitalWrite (f, HIGH);
      digitalWrite (d, LOW);
      break;
      
    case 5:
      digitalWrite (a, HIGH);
      digitalWrite (b, LOW);
      digitalWrite (d, HIGH);
      break;
      
    case 6:
      digitalWrite (a, LOW);
      digitalWrite (e, HIGH);
      break;
      
    case 7:
      digitalWrite (a, HIGH);
      digitalWrite (b, HIGH);
      digitalWrite (c, HIGH);
      digitalWrite (f, LOW);
      digitalWrite (g, LOW);
      digitalWrite (e, LOW);
      digitalWrite (d, LOW);
      break;
      
    case 8:
      digitalWrite (a, HIGH);
      digitalWrite (b, HIGH);
      digitalWrite (c, HIGH);
      digitalWrite (e, HIGH);
      digitalWrite (e, HIGH);
      digitalWrite (f, HIGH);
      digitalWrite (g, HIGH);
      break;
      
    case 9:
      digitalWrite (e, LOW);
      digitalWrite (d, LOW);
      break;  
 }
}




