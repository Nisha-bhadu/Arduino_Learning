void setup() {
  // put your setup0 code here, to run once:
  Serial.begin(9600);
  int x = 10;
  x+=2;
  Serial.println(x);
  x-=2;
  Serial.println(x);
  x*=2;
  Serial.println(x);
  x/=2;
  Serial.println(x);
  x%=2;
  Serial.println(x);


}

void loop() {
  // put your main code here, to run repeatedly:

}
