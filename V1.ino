#define IN1 3 //fe
#define IN2 9 //te
#define IN3 10 //fd
#define IN4 11  //td

#define sensorE 4
#define sensorD 12

int leituraSE=0;
int leituraSD=0;

void setup() {
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(sensorE, INPUT);
  pinMode(sensorD, INPUT);  
  Serial.begin(9600);

}

void loop() {
  leituraSE=digitalRead(sensorE);
  leituraSD=digitalRead(sensorD);
  
  if(leituraSD==1){
  digitalWrite(IN1,0);
  digitalWrite(IN2,1);
  }else{
    digitalWrite(IN1,1);
    digitalWrite(IN2,0);
    }
if(leituraSE==1){
  digitalWrite(IN3,0);
  digitalWrite(IN4,1);
  }else{
    digitalWrite(IN3,1);
    digitalWrite(IN4,0);
    }
  
}
