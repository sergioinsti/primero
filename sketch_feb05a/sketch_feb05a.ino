int ledPin = 13;     // LED que se encuentra en el pin 13
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);   // Establece 'pin' como salida 
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(ledPin, HIGH);  // Activa 'pin'
   delay(1000);     // Pausa un segundo 
   digitalWrite(ledPin, LOW);  // Desactiva 'pin'
   delay(1000);
}
