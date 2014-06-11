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
   digitalWrite(M1, LOW);
   digitalWrite(E1, HIGH);
   delay(5000);  
   digitalWrite(E1, LOW);
   delay(1000);
   digitalWrite(M1, HIGH);
   digitalWrite(E1, HIGH); 
   delay(5000);
   digitalWrite(E2, LOW);
   delay(1000);
   digitalWrite(M2, LOW);          
   digitalWrite(E2, HIGH);
   delay(5000);
   digitalWrite(E2, LOW);
   delay(1000);
   digitalWrite(M2, HIGH);
   digitalWrite(E2, HIGH);
   delay(5000);
   digitalWrite(E2, LOW);
   delay(1000); 
}
