
int button=12;
int x=0;
int button2=7;
void setup()
{
  pinMode(12,INPUT);
  pinMode(9,OUTPUT);
 pinMode(7,INPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  
    if (digitalRead(button)==1){
      
  analogWrite(9,analogRead(A0));

  }


 
  if (digitalRead(button2)==1){
  analogWrite(8,analogRead(A1/8));
   
}
 
}
