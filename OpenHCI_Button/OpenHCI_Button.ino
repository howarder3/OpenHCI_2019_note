int button = A2;
int xAxis = A0, yAxis = A1;


void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT_PULLUP);

}

void loop() {
  int xVal = analogRead(xAxis);
  int yVal = analogRead(yAxis);
  int isPress = digitalRead(button);
  Serial.print("X="); Serial.println(xVal);
  Serial.print("Y="); Serial.println(yVal);

  
  if(isPress == 0) 
    Serial.println("Button is pressed.");
  else 
    Serial.println("Button is not pressed.");
    
  delay(200);
}
