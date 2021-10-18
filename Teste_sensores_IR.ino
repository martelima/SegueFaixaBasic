#define sensorE 4
#define sensorD 12

int leituraSE=0;
int leituraSD=0;

void setup()
{
  pinMode(sensorE, INPUT);
  pinMode(sensorD, INPUT);  
  Serial.begin(9600);
}
void loop()
{
  leituraSE=digitalRead(sensorE);
  leituraSD=digitalRead(sensorD);
  Serial.print("E :");
  Serial.print(leituraSE);
  Serial.print("D :");      
  Serial.println(leituraSD);
  delay(1000);
}
