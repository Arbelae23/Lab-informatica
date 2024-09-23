int pinPotenciometro = A0;
int pinLED = 2; 
int valorPotenciometro = 0; 
int brilloLED = 0;

void setup() {
  pinMode(pinLED, OUTPUT);
}

void loop() {
  valorPotenciometro = analogRead(pinPotenciometro); 
  brilloLED = valorPotenciometro / 4; 
  analogWrite(pinLED, brilloLED);
  delay(10);
}