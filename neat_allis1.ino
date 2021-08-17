int D2 = 4 ;
int D3 = 5 ;

void setup() { 
  
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
}

void loop() {

digitalWrite(4, HIGH);
delay(15);

digitalWrite(4, LOW);
delay(15); 
  
digitalWrite(5, HIGH);
delay(15); 
  
digitalWrite(5, LOW);
delay(15); 
}