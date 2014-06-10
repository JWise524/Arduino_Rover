//Arduino PWM Speed Control：
int E1 = 5;  
int M1 = 4;
int E2 = 6;
int M2 = 7;

void setup() 
{ 
    pinMode(M1, OUTPUT); 
    pinMode(M2, OUTPUT); 
} 
 
void loop() 
{
  //for(value = 0 ; value <= 255; value+=5) 
  //{ 
   digitalWrite(M1, HIGH);          
   analogWrite(E1, -155);
   delay(5000); 
   digitalWrite(M2, HIGH);          
   analogWrite(E2, -155);
   delay(1000);
   analogWrite(E2, 0);
   delay(1000);
   analogWrite(E2, 155);
   delay(1000);
}
