#include <Servo.h>
#define threshold 310
#define unpress_angle 0
#define press_angle 70               
int a = 0; 
int servo = 2;

Servo myservo;
bool trig=true; 
const int potPin = A0;
 
void setup() {
  Serial.begin(9600);
  myservo.attach(servo);
  
}

void loop() {
  
 a = analogRead(potPin);
   
 Serial.println(a); //để xác định giá trị cảm biến khi chưa có cây
 //delay(1000);
 //myservo.write(unpress_angle);
  delay(1);
  if(a > threshold){
    delay(5);
    myservo.write(press_angle);
    
  }
  else
   myservo.write(unpress_angle);

  delay(10);  
                                            
}
