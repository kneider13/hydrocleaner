int enA = 5;
int enB = 6;
int entrada1 = 13;
int entrada2 = 12;
int entrada3 = 8;
int entrada4 = 7;

void setup() {
  pinMode(enB, OUTPUT);
  pinMode(entrada1, OUTPUT);
  pinMode(entrada2, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(entrada3, OUTPUT);
  pinMode(entrada4, OUTPUT);
}

void loop() {
  atras();
  delay(5000);
  adelante();
  delay(10000);

}

void atras () {
  digitalWrite(entrada1, LOW);
  digitalWrite(entrada2, LOW);
  digitalWrite(enB, 200);
  digitalWrite(entrada3, LOW);
  digitalWrite(entrada4, LOW);
  digitalWrite(enA, 200);
}

void adelante () {
  digitalWrite(entrada1, LOW);
  digitalWrite(entrada2, HIGH);
  digitalWrite(enB, 200);
  digitalWrite(entrada3, LOW);
  digitalWrite(entrada4, HIGH);
  digitalWrite(enA, 200);
}
