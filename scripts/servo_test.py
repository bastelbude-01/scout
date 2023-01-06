from gpiozero import Servo
from time import sleep

servo = Servo(25)
val = -1
try:
    while True:
        servo.value = val
        sleep(0.1)
        val = val +0.01
        if val > 1:
            val = -1
        

except KeyboardInterrupt:
    print("Programm Beendet")