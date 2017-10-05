int left_irsen =3; 
int center_irsen= 7;
int right_irsen= 13;
int leftmotor1= 9;
int leftmotor2= 10;
int rightmotor1= 5;
int rightmotor2= 6;
int center_irpow = 8;
int right_irpow =12;
int left_irpow=2;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode( leftmotor1, OUTPUT);
  pinMode( leftmotor2, OUTPUT);
  pinMode( rightmotor1, OUTPUT);
  pinMode( rightmotor2, OUTPUT);
  pinMode( left_irpow, OUTPUT);
  pinMode( right_irpow, OUTPUT);
  pinMode( center_irpow, OUTPUT);
  pinMode(4,OUTPUT);
  digitalWrite(4,LOW);
  digitalWrite(left_irpow,HIGH);
  digitalWrite(right_irpow,HIGH);
  digitalWrite(center_irpow,HIGH);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  readsensor();
 if (left==1 && center == 0 && right == 1)
   forward();
 if (left==1 && center == 0 && right == 0)
   forward();
 if (left==0 && center == 1 && right == 1)
   left_turn();
 if (left==0 && center == 0 && right == 1)
   left_turn();
 if (left==0 && center == 0 && right == 0)
   left_turn();
 if (left == 0 && center == 1 && right == 0)
  left_turn();  
 if (left == 1 && center == 1 && right ==0)
  right_turn();
 if (left == 1 && center ==1 && right ==1)
  turn_around();  
} 
void readsensor()
{
  int left = digitalRead(left_irsen);
  int right = digitalRead(right_irsen);
  int center = digitalRead(center_irsen);
}
void forward()
{
digitalWrite(leftmotor1,HIGH);
digitalWrite(leftmotor2,LOW);
digitalWrite(rightmotor1,HIGH);
digitalWrite(rightmotor2,LOW);
}
void left_turn()
{
digitalWrite(leftmotor1,LOW);
digitalWrite(leftmotor2,LOW);
digitalWrite(rightmotor1,HIGH);
digitalWrite(leftmotor2,LOW);
}  
void right_turn()
{
digitalWrite(leftmotor1,HIGH);
digitalWrite(leftmotor2,LOW);
digitalWrite(rightmotor1,LOW);
digitalWrite(rightmotor2,LOW);
}
void turn_around()
{
digitalWrite(leftmotor1,HIGH);
digitalWrite(leftmotor2,LOW);
digitalWrite(rightmotor1,LOW);
digitalWrite(rightmotor2,HIGH);
} 

