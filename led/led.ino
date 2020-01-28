#define DATA 3


void setup() {
  // put your setup code here, to run once:
  pinMode(DATA , OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 255; i++) {
    delay(10);
    analogWrite(DATA , i);
  }
  for (int i = 255; i > 0; i--) {
    delay(10);
    analogWrite(DATA , i);
  }
}
