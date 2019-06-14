int LEDpin = 2;
int light = 3;

void setup() {
  pinMode(LEDpin,OUTPUT);
  pinMode(light,INPUT);
  Serial.begin(9600);
}
void loop()
  {
   int zhongbest = digitalRead(light);
   Serial.println(zhongbest);
   if  (zhongbest == 0){
   digitalWrite(LEDpin,HIGH); 
   delay(1000);
   digitalWrite(LEDpin,LOW);
   }
   else{
   digitalWrite(LEDpin,LOW);
  }
  }
