#include <Servo.h>

#define SERVO_SIGNAL_PIN 9

Servo servoMotor;

void setup()
{
    servoMotor.attach(SERVO_SIGNAL_PIN, 900, 1500);
}

void loop()
{
    for(int i = 55; i<115; i+=1){
        servoMotor.write(i);
        delay(35);
    }

    delay(1000);

    for(int i = 115; i>55; i-=1){
        servoMotor.write(i);
        delay(35);
    }
}
