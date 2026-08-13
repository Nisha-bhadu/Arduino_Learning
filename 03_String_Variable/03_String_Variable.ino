String Nisha;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Nisha = "Girl";
  Nisha = "Brand";
  delay(1000);
  Serial.println(Nisha);
  Nisha = "Music";

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(Nisha);
  delay(1000);

}
