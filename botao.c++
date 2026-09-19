// C++ code
//
int LED = 4;
int BOTAO =2;

void setup()
{
  pinMode (LED, OUTPUT);
  pinMode (BOTAO, INPUT);
}

void loop()
{  
  if (digitalRead(BOTAO) == HIGH)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
    
}