#include <Stepper.h>

// 这里设置步进电机旋转一圈是多少步
#define STEPS 64

//设置步进电机的步数和引脚（就是注意点2里面说的驱动板上IN1～IN4连接的四个数字口）。
Stepper stepper(STEPS, 8, 10, 9, 11);

int a;

void setup()
{
  // 设置电机的转速：每分钟为600步
  pinMode(12, OUTPUT);
  stepper.setSpeed(600);
  // 初始化串口，用于调试输出信息
  Serial.begin(9600);
  digitalWrite(12, LOW);
}

void loop()
{
  
  if ( Serial.available())
    {
      
      if('L' == Serial.read()){
        Serial.println("ZHUAN");
        stepper.step(1900); //4步模式下旋转一周用2048 步。
        digitalWrite(12, HIGH);
      
      }
      else if('R' == Serial.read()){
        Serial.println("LUO");
        stepper.step(0); //4步模式下旋转一周用2048 步。
        digitalWrite(12, HIGH);    
        }
      else{
        stepper.step(0); //4步模式下旋转一周用2048 步。
        delay(8000);    
        }
     //stepper.step(1024);   
     }
    
    stepper.step(1024); //4步模式下旋转一周用2048 步。 
     
}



