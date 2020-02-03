/********************************************************************************
**                                                                             **
**                               Conexio arduino                               **
**                                                                             **
**                                                                             **
********************************************************************************/
//********************************* Includes ***********************************

//********************************* Variables **********************************
const int led2 = 2;          
const int led3 = 3;  
const int led4 = 4;          
const int led5 = 5;         
const int led6 = 6;
const int led7 = 7;
const int led8 = 8;
const int led9 = 9;
const int marxa = A2;
const int entrada = A1;
const int sortida = A0;  

//*********************************** SETUP*************************************
void setup()              // run once, when the sketch starts
{
 pinMode(marxa, INPUT);
 pinMode(sortida, OUTPUT);
 pinMode(entrada, INPUT);
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
}

//************************************ LOOP*************************************
void loop()  // we need this to be here even though its empty
{    
if ( digitalRead(marxa) == HIGH || digitalRead(entrada) == HIGH)
{
  digitalWrite(2,HIGH);
  delay(500);
   
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(500);
  
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(500);
  
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(500);
  
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay(500);
  
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  delay(500);

  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  delay(500);
 
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  delay(500);
  
  digitalWrite(9,LOW);
  delay(500);
  
  digitalWrite(sortida,HIGH);
  delay(500);
  digitalWrite(sortida,LOW);
  }
}
//********************************FUNCIONS************************************
