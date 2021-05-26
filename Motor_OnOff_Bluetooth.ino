const int motor1 = 9;
const int motor2 = 10;

int estado = 0;

void setup() {
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if( Serial.available()>0)
  {
    estado = Serial.read();
  }
  
  switch(estado)
  {
    case 'N':
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,HIGH);
    break;
    case 'F':
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,LOW);
    break;
  }

}
