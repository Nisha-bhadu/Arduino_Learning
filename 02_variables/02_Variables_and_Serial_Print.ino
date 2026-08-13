int x;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  x = 10;
  Serial.println(x);
  delay(1000);
  x = 20;

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(x);

}
