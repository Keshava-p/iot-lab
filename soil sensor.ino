int sensor = 0; 
void setup()
{
  pinMode(A0, INPUT);         
  pinMode(13, OUTPUT);
  Serial.begin(9600);        
}

void loop()
{
  sensor = analogRead(A0);
  Serial.println(sensor);

  if (sensor >= 800) {
    Serial.println("very dry");
    digitalWrite(13, HIGH);
  }
  else if (sensor > 600 && sensor < 800) {
    Serial.println("moderately dry");
    digitalWrite(13, LOW);  
  }
  else {
    Serial.println("wet");
    digitalWrite(13, LOW);
  }

  delay(1000);  
}