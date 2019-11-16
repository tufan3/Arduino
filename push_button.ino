void setup(){
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(2,INPUT);
}
void loop(){
  int val = 0;
  val = digitalRead(2);
  Serial.println(val);
  digitalWrite(13,val);
}
