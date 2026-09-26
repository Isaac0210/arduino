const int LED_AZUL = 2;
const int LED_VERDE = 3;
const int LED_AMARELO = 4;
const int LED_VERMELHO = 5;
const int LED_LARANJA = 6;
const int LED_BRANCO = 7;

byte byteRead;
 
void setup()
{
  Serial.begin(9600);
  pinMode(LED_AZUL, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);	
  pinMode(LED_LARANJA, OUTPUT);
  pinMode(LED_BRANCO, OUTPUT);
}

void loop(){
  if (Serial.available())
  { 		
   byteRead = Serial.read();
 
    switch(byteRead){
      case '1':
      digitalWrite(LED_AZUL,!digitalRead(LED_AZUL));
      Serial.print("Estado Led Azul = ");
      Serial.println(digitalRead(LED_AZUL));
      break;
      
      case '2':
      digitalWrite(LED_VERDE,!digitalRead(LED_VERDE));
      Serial.print("Estado Led Verde = ");
      Serial.println(digitalRead(LED_VERDE));
      break;
      
      case '3':
      digitalWrite(LED_AMARELO,!digitalRead(LED_AMARELO));
      Serial.print("Estado Led Amarelo = ");
      Serial.println(digitalRead(LED_AMARELO));
      break;
      
      case '4':
      digitalWrite(LED_VERMELHO,!digitalRead(LED_VERMELHO));
      Serial.print("Estado Led Vermelho = ");
      Serial.println(digitalRead(LED_VERMELHO));
      break;
      
      case '5':
      digitalWrite(LED_LARANJA,!digitalRead(LED_LARANJA));
      Serial.print("Estado Led Laranja = ");
      Serial.println(digitalRead(LED_LARANJA));
      break;
      
      case '6':
      digitalWrite(LED_BRANCO,!digitalRead(LED_BRANCO));
      Serial.print("Estado Led Branco = ");
      Serial.println(digitalRead(LED_BRANCO));
      break;
    }
  }

  }