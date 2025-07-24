#define TRIG_PIN 13
#define ECHO_PIN 12
#define GREEN_LED 25
#define RED_LED 33
#define BIN_HEIGHT_CM 150.0
void setup() {
  Serial.begin(9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
}
void loop() {
  // Ultraschall senden
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Echo-Zeit messen
  long duration = pulseIn(ECHO_PIN, HIGH, 30000);
  float distance = duration * 0.034 / 2;
  // Füllstand in Prozent berechnen
  float fillLevel = BIN_HEIGHT_CM - distance;
  if (fillLevel < 0) fillLevel = 0;
  if (fillLevel > BIN_HEIGHT_CM) fillLevel = BIN_HEIGHT_CM;
  int percent = (fillLevel / BIN_HEIGHT_CM) * 100;
  
  // Ausgabe
  Serial.print("Abstand: ");
  Serial.print(distance);
  Serial.print(" cm | Füllstand: ");
  Serial.print(percent);
  Serial.println(" %");
  // LED steuern
  if (percent >= 50) {
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(RED_LED, HIGH);
  } else {
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(RED_LED, LOW);
  } 
  delay(1000);
}
