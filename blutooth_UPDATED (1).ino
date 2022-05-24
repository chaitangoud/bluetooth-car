int pin1=2;
int pin2=3;
int pin3=4;
int pin4=5;
int pin5=6;
int pin6=7;
int pin7=8;
int pin8=9;
int pin9=10;
void setup() {
Serial.begin(9600);
pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);
pinMode(pin3,OUTPUT);
pinMode(pin4,OUTPUT);
pinMode(pin5,OUTPUT);
pinMode(pin6,OUTPUT);
pinMode(pin7,OUTPUT);
pinMode(pin8,OUTPUT);
pinMode(pin9,OUTPUT);

 
 }

void loop() {
  
 if(Serial.available()>0)
   {     
      char data = Serial.read(); 
      switch(data)
      {
        case 'a': { digitalWrite(pin1,HIGH);//FORWARD
                    digitalWrite(pin2,LOW);
                    digitalWrite(pin3,LOW);
                    digitalWrite(pin4,HIGH);
                    digitalWrite(pin5,HIGH);
                    digitalWrite(pin6,HIGH);
                    digitalWrite(pin7,LOW);
                    digitalWrite(pin8,LOW);
                    digitalWrite(pin9,LOW);
                    
                    }
                    break;
                   
        case 'b': { digitalWrite(pin1,HIGH);
                    digitalWrite(pin2,LOW);  //RIGHT
                    digitalWrite(pin3,LOW);
                    digitalWrite(pin4,LOW);
                    digitalWrite(pin5,HIGH);
                    digitalWrite(pin6,HIGH);
                    digitalWrite(pin7,LOW);
                    digitalWrite(pin8,LOW);
                    digitalWrite(pin9,LOW);
                    }
                    break; 
        case 'c' : {  digitalWrite(pin1,LOW);
                      digitalWrite(pin2,LOW); //LEFT
                      digitalWrite(pin3,LOW);
                      digitalWrite(pin4,HIGH);
                      digitalWrite(pin5,HIGH);
                     digitalWrite(pin6,HIGH);
                     digitalWrite(pin7,LOW);
                     digitalWrite(pin8,LOW);
                    digitalWrite(pin9,LOW);
                      }
                      break;
        
        case 'd' : { digitalWrite(pin1,LOW);
                     digitalWrite(pin2,HIGH);  //stop
                     digitalWrite(pin3,HIGH);
                     digitalWrite(pin4,LOW);
                     digitalWrite(pin7,HIGH);
                     digitalWrite(pin5,LOW);
                     digitalWrite(pin6,LOW);
                     digitalWrite(pin8,HIGH);
                     digitalWrite(pin9,HIGH);
                     ;}
                     break;
       case 'e'  : { digitalWrite(pin1,LOW);
                     digitalWrite(pin2,LOW);  //BACK
                     digitalWrite(pin3,HIGH);
                     digitalWrite(pin4,HIGH);
                     
                     digitalWrite(pin5,HIGH);
                     digitalWrite(pin7,HIGH);
                     digitalWrite(pin6,HIGH);
                     digitalWrite(pin8,HIGH);
                     digitalWrite(pin9,HIGH);
                     delay(500);
                     
                     digitalWrite(pin6,LOW);
                     digitalWrite(pin5,LOW);
                     
                     
                     
                     digitalWrite(pin7,LOW);
                     
                     
                     
                     digitalWrite(pin8,LOW);
                     
                     
                     
                     digitalWrite(pin9,LOW);
                     delay(500);
                     
                  }
                     break;
        
        default : break;
      }
      Serial.println(data);
   }
   delay(50);
}
