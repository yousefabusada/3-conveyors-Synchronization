int s1=A0;
int s2=A1;
int s3=A2;
int s4=A3;
int v1=3;
int v2=5;
int v3=6;
int setSpeedMotor= ; 
//int MAX=255;
//int HALF=128;
const uni8_t kPin=2;
const uni32_t kDelay= 10; // 100 Hz
int HALF(){
  while(1){
    kDelay= setSpeedMotor/2
    pinMode(kPin, true);
    digitalWrite(kPin, HalfSpeed);
    delay(kDelay);
    pinMode(kPin, false);
    delay(kDelay);
    pinMode(kPin, true);
    digitalWrite(kPin, HalfSpeed);
    delay(kDelay);
    pinMode(kPin, false);
    delay(kDelay);
    
  }
}
int MAX(inputPin){
  while(1){
    kDelay= setSpeedMotor
    pinMode(inputPin, HIGH);
    digitalWrite(kPin, HalfSpeed);
    delay(kDelay);
    pinMode(inputPin, LOW);
    delay(kDelay);
    pinMode(inputPin, HIGH);
    digitalWrite(inputPin, HalfSpeed);
    delay(kDelay);
    pinMode(inputPin, LOW);
    delay(kDelay);
    
  }
}
  
void setup() {
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);
  pinMode(s3,INPUT);
  pinMode(s4,INPUT);
  pinMode(v1,OUTPUT);
  pinMode(v2,OUTPUT);
  pinMode(v3,OUTPUT);
  pinMode(v4,OUTPUT);
}

void loop() {
  if (s1==0&& s2==0 && s3==0 && s4==0){

    analogWrite(v1,HALF);
    analogWrite(v2,HALF);
    analogWrite(v3,HALF);
   
    
  }
  else if(s1==1&& s2==1 && s3==1 && s4==1){
    analogWrite(v1,MAX(V1));
    analogWrite(v2,HALF(V2));
    analogWrite(v3,HALF(V3));  
    delay 1000;
  }
  else if (s1==1&& s2==0 && s3==1 && s4==1) || (s1==0&& s2==1 && s3==1 && s4==1){
    analogWrite(v1,MAX(V1));
    analogWrite(v2,MAX(V2));
    analogWrite(v3,HALF(V3));
    delay 1000;
  }
  else if (s1==1&& s2==1 && s3==1 && s4==0){
    analogWrite(v1,MAX(V1));
    analogWrite(v2,HALF(v2));
    analogWrite(v3,HALF(V3));
    delay 1000;
  }
  else if (s1==1&& s2==1 && s3==0 && s4==1){
    analogWrite(v1,MAX(V1));
    analogWrite(v2,MAX(V2));
    analogWrite(v3,MAX(V3));
    delay 1000;
  }
  else {
    analogWrite(v1,MAX(V1));
    analogWrite(v2,MAX(V2));
    analogWrite(v3,MAX(V3));
    delay 1000;

  }
  
    
  }

}
