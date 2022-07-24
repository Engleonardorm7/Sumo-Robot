// definir variables
int sensorValue = 0;        
int pulsador = 0;           
int sensorPin = A4; 
int pwml=9;  //derecho 
int pwm=11; //izquierdo 

void setup(){
 //configuracion de señales de entrada y salida
//motores derecha
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  //motores izquierda
  pinMode(10,OUTPUT);
  pinMode(6,OUTPUT);
  //sensores
  pinMode(A4,INPUT);
  pinMode(12, INPUT);
  pinMode(A5,INPUT);
  pinMode(13,OUTPUT);
 

  Serial.begin(9600);

   Serial.println(digitalRead(12));
   delay(30);
   
  while(digitalRead(12)==HIGH){ //mientras el pulsador no se presione el robot no se mueve
  digitalWrite(13,HIGH); //prende led
  
  }
  delay(5000); //si el pulsador se presiona, espera 5 segundos
                //y empieza a correr el programa
}
void loop(){
  pulsador=(digitalRead(12)==LOW);

  Serial.println(analogRead(A4));
  delay(30);
    if(analogRead(A4)>=200){ //si la lectura del sensor marca mas de 200 es decir 
                             // aproximadamente 30 cm el robot detecta un objeto                    
      Serial.println(digitalRead(A5)); 
  delay(30);

      if(digitalRead(A5)==HIGH){ //si el sensor de linea detecta el color negro

        digitalWrite(3,LOW); // se dirige hacia el objeto
        digitalWrite(5,HIGH);
        analogWrite(pwml,255);
        digitalWrite(10,LOW);
        digitalWrite(6,HIGH);
        analogWrite(pwm,255);
      }
      else{
        digitalWrite(3,HIGH); //si el robot detecto algo en los 30cm 
        digitalWrite(5,LOW); // pero el sensor de linea detecta el color blanco
        analogWrite(pwml,255);// el robot retrocede 
        digitalWrite(10,HIGH);
        digitalWrite(6,LOW);
        analogWrite(pwm,255);
        digitalWrite(13,LOW);
      }
    }
    else{ // si el robot no detecta nada en los 30cm
      Serial.println(digitalRead(A5)); 
  delay(30);
      if(digitalRead(A5)==HIGH){ //si el sensor de linea detecta el color  
        digitalWrite(3,HIGH);    // negro comienza a girar hasta que 
        digitalWrite(5,LOW);     //encuentre algo dentro de sus 30 cm de alcance 
        analogWrite(pwml,100);
        digitalWrite(10,LOW);
        digitalWrite(6,HIGH);
        analogWrite(pwm,100);
      }
      else{
        digitalWrite(3,HIGH); //si el sensor de linea detecta el color blanco
        digitalWrite(5,LOW);  // el robot retrocede
        analogWrite(pwml,100);
        digitalWrite(10,HIGH);
        digitalWrite(6,LOW);
        analogWrite(pwm,100);
        digitalWrite(13,LOW);
      }
    }
  }



