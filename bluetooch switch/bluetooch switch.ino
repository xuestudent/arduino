#include <Servo.h>//引头文件

Servo myservo;
int pos = 0; //舵机旋转角度
char val ='s';//初始化

void setup() {
  myservo.attach(6);  //定义舵机接口为6号引脚
  Serial.begin(9600); //初始化蓝牙，波特率为9600
}

void loop() {
if(Serial.available())//判断串口是否有数据
{
  val = Serial.read();//读取串口数据赋给val
  if(val=='a')//关
  {       
    for (pos = 20; pos <= 40; pos += 1)
    { 
    myservo.write(pos);              
    delay(30);}
    myservo.write(20);//复位
    } 
    
  else if(val=='b')//开
  { 
    for (pos = 20; pos >= 0; pos-= 1)
    { 
    myservo.write(pos);              
    delay(30);
    }
    myservo.write(20);
  }
    else if(val=='r')//复位
    { 
    myservo.write(20);
    }   
  }
}

   
   
   
   
   











