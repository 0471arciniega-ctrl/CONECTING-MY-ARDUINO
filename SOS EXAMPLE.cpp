void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // 3 Short blinks (S)
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);
  }
  // Pause between letters
  delay(500);

  // 3 Long blinks (O)
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(600);
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);
  }
  // Pause between letters
  delay(500);

  // 3 Short blinks (S)
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);
  }
  // Pause before repeating the whole message
  delay(2000);
}