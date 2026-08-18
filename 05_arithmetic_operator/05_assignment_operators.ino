  int y = 10;
  int x = 20;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(x+y);
  Serial.println(x-y);
  Serial.println(x*y);
  Serial.println(x/y);
  Serial.println(x%y);

}

void loop() {
  // put your main code here, to run repeatedly:

}
