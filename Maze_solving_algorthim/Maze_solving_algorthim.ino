int left_irsen= 2;
int right_irsen= 4;
int center_irsen= 7;
int leftmotor1= 5;
int leftmotor2= 6;
int rightmotor1= 9;
int rightmotor2= 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode( leftmotor1, OUTPUT);
  pinMode( leftmotor2, OUTPUT);
  pinMode( rightmotor1, OUTPUT);
  pinMode( rightmotor2, OUTPUT);
  
}
void loop(){
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


