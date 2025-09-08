int ldr1=0;
void setup(){
  pinMode(2,INPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  ldr1=digitalRead(2);
  if(ldr1==HIGH){
    digitalWrite(5,HIGH);
  }
  else{
    digitalWrite(5,LOW);
  }
  Serial.println("Intensity");
  Serial.println(ldr1);
}
