int forward=7;           
int backward=8;           

void setup(){

pinMode(forward,OUTPUT);  
pinMode(backward,OUTPUT);  
}

void loop(){

digitalWrite(forward,HIGH);   
digitalWrite(backward,LOW);    
delay(4000);               
digitalWrite(forward,LOW);    
digitalWrite(backward,LOW);     
delay(3000);               
digitalWrite(backward,HIGH);  
digitalWrite(forward,LOW);    
delay(4000);               
digitalWrite(forward,LOW);    
digitalWrite(backward,LOW);    
delay(3000);               
}
