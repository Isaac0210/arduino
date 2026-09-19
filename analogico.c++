// C++ code
//
int LED_G = 4;
int LED_R = 2;

void setup()
{
  Serial.begin(9600);
  pinMode (LED_G, OUTPUT);
  pinMode (LED_R, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(A0));
  
  if (analogRead(A0) <511)
  {
    digitalWrite(LED_G, LOW);
    digitalWrite(LED_R, HIGH);
  }else {
  
    digitalWrite(LED_G, HIGH);
    digitalWrite(LED_R, LOW);
  }
}