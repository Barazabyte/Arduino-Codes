void setup() {
  // put your setup code here, to run once:
    int green = 4;
    int yellow = 5;
    int red = 6;

    pinMode(green, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(red, OUTPUT);
}

void traffic() {
  digitalWrite(4, HIGH);
  delay(5000);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(5000);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(5, LOW);
}


void loop() {
  // put your main code here, to run repeatedly:
    traffic();
}
