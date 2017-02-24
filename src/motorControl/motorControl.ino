const int buttonB = 3;
const int buttonF = 5;

const int DIR_F = 10; //Set pin for Forward Direction
const int DIR_B = 8; //Set pin for Backward Direction
const int PWM = 11; // Set speed output pin



void setup()
{
  pinMode (DIR_F, OUTPUT);
  pinMode (DIR_B, OUTPUT);
  pinMode (PWM, OUTPUT);
  pinMode (buttonB, INPUT);
  pinMode (buttonF, INPUT);
  
}

void loop()
{
  int buttonStateb = digitalRead(buttonB);
  int buttonStatef = digitalRead(buttonF);

  if ((buttonStateb == LOW) && (buttonStatef == LOW))
  {
   digitalWrite(DIR_F, LOW);
   digitalWrite(DIR_B, LOW);
   analogWrite(PWM, 0);
  }
  
  else if ((buttonStateb == HIGH) && (buttonStatef == HIGH))
  {
   digitalWrite(DIR_F, LOW);
   digitalWrite(DIR_B, LOW);
   analogWrite(PWM, 0);
  }
  
  else if ((buttonStateb == LOW) && (buttonStatef == HIGH))
  {
   digitalWrite(DIR_F, LOW);
   digitalWrite(DIR_B, HIGH);
   analogWrite(PWM, 255);
  }
  
  else if ((buttonStatef == LOW) && (buttonStateb == HIGH))
  {
   digitalWrite(DIR_F, HIGH);
   digitalWrite(DIR_B, LOW);
   analogWrite(PWM, 255);
  }


}






