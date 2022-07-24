int sensorValue = 0;        
int buttonState = 0;           
int sensorPin = A4; 

void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(A4,INPUT);
  pinMode(12, INPUT); 
  pinMode(A5,INPUT);
pinMode(13,OUTPUT);
  Serial.begin(9600);
  sensorValue = analogRead(sensorPin);

    // record the maximum sensor value



}
void loop() {

  int sensorValue = analogRead(A4);
  
        Serial.println(sensorValue);
        if(sensorValue >= 200){
        Serial.println(sensorValue);
        if(digitalRead(A5)==HIGH){
        Serial.println(digitalRead(A5));
 digitalWrite(3,LOW);
   digitalWrite(5,HIGH);
   digitalWrite(10,HIGH);
   digitalWrite(6,LOW);
   
    }else{
      
    Serial.println(digitalRead(A5));
    digitalWrite(3,HIGH);
   digitalWrite(5,LOW);
   digitalWrite(10,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(13,LOW);
  }

        }
    
      
      Serial.println(sensorValue);
        if(sensorValue <= 199){
      Serial.println(sensorValue);
      if(digitalRead(A5)==HIGH){
        Serial.println(digitalRead(A5));
     
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



