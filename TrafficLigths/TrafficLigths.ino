const int btnPin = 2;
const int greenPin= 13;
const int yellowPin= 12;
const int redPin= 11;

int btnState = 0;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(btnPin, INPUT);
 pinMode(greenPin, OUTPUT);
 pinMode(yellowPin, OUTPUT);
 pinMode(redPin, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
 btnState = digitalRead(btnPin);


 if (btnState == LOW){
  ledOn(greenPin);
  
 } else {
  ledOff(greenPin);
  delay(2000);
  ledOn(yellowPin);
  delay(2000);
  ledOff(yellowPin);
  delay(2000);
  ledOn(redPin);
  delay(3000);
  ledOff(redPin);
  delay(2000);
  ledOn(yellowPin);
  delay(2000);
  ledOff(yellowPin);
  delay(2000);
  ledOn(greenPin);

 } 
}

void ledOn(int pin) {
  digitalWrite(pin, HIGH);
  Serial.print("LedPin : ");
  Serial.print(pin);
  Serial.println(" is on");
}

void ledOff(int pin) {
  digitalWrite(pin, LOW);
  Serial.print("LedPin : ");
  Serial.print(pin);
  Serial.println(" is Off");
}

void blinkLed(int pin, int millisec){
  ledOn(pin);
  delay(millisec);
  ledOff(pin);
  delay(millisec);
  }
