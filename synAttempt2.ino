// THE DELAY FOR MAXIMUM SPEED IS LESS THAN FOR HALF SPEED, THE DIVSION OF 20 WAS ONLY AN ASSUMPTION.
const byte s1 = 2;
const byte s2 = 3;
const byte s3 = 18;
const byte s4 = 19;
int v1 = 3;
int v2 = 5;
int v3 = 6;
int setSpeedMotor=10; // 100 HZ
void setup() {
  // put your setup code here, to run once:
  pinMode(s1, INPUT_PULLUP); 
  pinMode(s2, INPUT_PULLUP);
  pinMode(s3, INPUT_PULLUP);
  pinMode(s4, INPUT_PULLUP);
  pinMode(v1, OUTPUT);
  pinMode(v2, OUTPUT);
  pinMode(v3, OUTPUT);
  
  
  attachInterrupt(digitalPinToInterrupt(s1), ISR_Function, CHANGE);
  attachInterrupt(digitalPinToInterrupt(s2), ISR_Function, CHANGE);
  attachInterrupt(digitalPinToInterrupt(s3), ISR_Function, CHANGE);
  attachInterrupt(digitalPinToInterrupt(s4), ISR_Function, CHANGE);
}
  

void HALF(kPin){

  while(state=1){
    
    
    
    kDelay= setSpeedMotor/2;
    
    digitalWrite(kPin, HIGH);
    delay(kDelay);
    
    digitalWrite(kPin, LOW);
    delay(kDelay);
    digitalWrite(kPin, HIGH);
    delay(kDelay);
    
    digitalWrite(kPin, LOW);
    delay(kDelay);
  }
}
void MAX(){
  

  while(state=1){
    
  }
    kDelay= setSpeedMotor/20;
    
    digitalWrite(kPin, HIGH);
    delay(kDelay);
    
    digitalWrite(kPin, LOW);
    delay(kDelay);
    digitalWrite(kPin, HIGH);
    delay(kDelay);
    
    digitalWrite(kPin, LOW);
    delay(kDelay);
    
}

  
void loop(){
  if (s1==0&& s2==0 && s3==0 && s4==0){
    
    state=1;
    HALF(v1);
    HALF(v2);
    HALF(v3);
    
  }
  else if(s1==1&& s2==1 && s3==1 && s4==1){
    state=1;
    MAX(v1);
    HALF(v2);
    HALF(v3);
  }
  else if (s1==1&& s2==0 && s3==1 && s4==1) || (s1==0&& s2==1 && s3==1 && s4==1){
    state=1;
    MAX(v1);
    MAX(v2);
    HALF(v3);
  }
  else if (s1==1&& s2==1 && s3==1 && s4==0){
    state=1;
    MAX(v1);
    HALF(v2);
    HALF(v3);

  }
  else if (s1==1&& s2==1 && s3==0 && s4==1){
    state=1;
    MAX(v1);
    MAX(v2);
    MAX(v3);
  }
  else {
    state=1;
    MAX(v1);
    MAX(v2);
    MAX(v3);
  }


  

}

void ISR_Function(){
  state=0;
}

  

 
