#define DATA 5


void setup() {
  // put your setup code here, to run once:
  pinMode(DATA , OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

    analogWrite(DATA , 1);

  
}
