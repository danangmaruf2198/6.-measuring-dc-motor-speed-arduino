volatile byte a;
volatile byte c;  
int rpm;
unsigned long waktulalu;
unsigned long coba;
void setup()
{
  Serial.begin(9600);
  attachInterrupt(0,lala,RISING);
    }

 void lala(){
  a++;
  
 }
 
void loop()
{

  if (a>=1){
   // Serial.println(millis());
    coba= millis()-waktulalu;
    //Serial.println(coba);
    rpm = (a/1.0) / (coba/60000.0);
    waktulalu= millis();
    //Serial.println(waktulalu);
    a=0;
    c++;
    //Serial.println(rpm);
    if ((c%2)!=1){
    Serial.println(rpm);
    
    //Serial.println(a);
  
    }
    //Serial.println(waktulalu);
  } //unsigned long waktu=millis();
    //Serial.println(waktu);
    //if(a=1){waktu=0;}

}

