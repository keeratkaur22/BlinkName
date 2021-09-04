void setup() {
  // put your setup code here, to run once:
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //for K
  dash();
  dot();
  dash();
  delay(2000);// 1 sec is delayed in the function created
  //for E
  dot();
  delay(2000);
  //for E
  dot();
  delay(2000);
  //for R
  dot();
  dash();
  dot();
  delay(2000);
  //for A
  dot();
  dash();
  delay(2000);
  //for T
  dash();
  delay(2000);
}
void dash(){
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);                       // wait for 3 seconds
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
}

void dot(){
  digitalWrite(LED_BUILTIN, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
}
