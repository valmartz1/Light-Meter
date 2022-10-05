//  Light Meter - made by Valeria Martinez
//

int pinLDR = A3;
int valorLDR = 0;

const int led1 = 5;
const int led2 = 6;
const int led3 = 9;
const int led4 = 10;
const int led5 = 11;

void setup() {
  Serial.begin(9600);    
  pinMode(led1 , OUTPUT);
  pinMode(led2 , OUTPUT); 
  pinMode(led3 , OUTPUT); 
  pinMode(led4 , OUTPUT); 
  pinMode(led5 , OUTPUT);   
}
 
void loop(){
  
  valorLDR = analogRead(pinLDR);
  Serial.println(valorLDR);
  if(valorLDR >= 523){
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  } else if((valorLDR >= 423) & (valorLDR < 523)){
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    } else if((valorLDR >= 323) & (valorLDR < 423)){
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
    } else if((valorLDR >= 223) & (valorLDR < 323)){
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      } else if((valorLDR >= 123) & (valorLDR < 223)){
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led5, HIGH);
        }
  else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
  } 
}
