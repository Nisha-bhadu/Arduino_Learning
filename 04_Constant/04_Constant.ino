String firstName;
const int x=10;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  bool isStudent = true;
  Serial.println(x);
  delay(1000);
  Serial.println(isStudent);
  delay(1000);
  firstName = "Sita";


}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(firstName);
  delay(500);

}
