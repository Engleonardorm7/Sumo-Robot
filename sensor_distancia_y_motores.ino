
int buttonState = 0;   
void setup(){
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(A4,INPUT);
  pinMode(12, INPUT); 
  pinMode(A5,INPUT);
}
  void loop(){
     buttonState = digitalRead(12);
  if (buttonState == LOW) {     
       delay(5000);
       buttonState=HIGH;
         while((digitalRead(A4==HIGH))&&(digitalRead(A4==LOW))){
        while(digitalRead(A4)==HIGH){
    if(digitalRead(A5)==HIGH){
       
   digitalWrite(3,LOW);
   digitalWrite(5,HIGH);
   digitalWrite(10,HIGH);
   digitalWrite(6,LOW);
       }else{
    digitalWrite(3,HIGH);
   digitalWrite(5,LOW);
   digitalWrite(10,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(13,LOW);
       }
         }
    while(digitalRead(A4)==LOW){
      if(digitalRead(A5)==HIGH){
    digitalWrite(3,LOW);
    digitalWrite(5,HIGH);
     digitalWrite(10,LOW);
   digitalWrite(6,HIGH);
    }else{
    digitalWrite(3,HIGH);
   digitalWrite(5,LOW);
   digitalWrite(10,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(13,LOW);
         }
    }
  }
  }
  }
  
