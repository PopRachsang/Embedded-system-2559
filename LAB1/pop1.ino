void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
}


void loop() {
  //L
  short1();  long1();   short1();   short1();
  //O
  long1();  long1();   long1();  
  //V
  short1();   short1();  short1();  long1();
  //e
  short1();
  delay(1400);
}


void short1() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
}

void long1() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
