char data;
String command;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);

}

void moveRobot(String motion)
{
  if(motion== "f")
  {
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    Serial.println("Forward");
  }

  if(motion== "b")
  {
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    Serial.println("Backward");
  }

  if(motion== "l")
  {
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    Serial.println("Left");
  }

  if(motion== "r")
  {
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    Serial.println("Right");
  }

  if(motion== "s")
  {
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    Serial.println("Stop");
  }
}



void loop() {
  // put your main code here, to run repeatedly:
  
  
    data = Serial.read();
    command = String(data);
    moveRobot(command);
  
    delay(100);
  
  
}
