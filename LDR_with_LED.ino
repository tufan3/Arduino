void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  int v = analogRead(A0);
  Serial.println(v);
  if(v > 100){
    int i = 255;
    analogWrite(3,i);
      delay(1000);
    }else{
      int j = 128;
      analogWrite(3,j);
      delay(1000);
    }

}
