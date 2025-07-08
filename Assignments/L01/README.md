## IoT Lab 1: LED Fundamentals
## Trying different setup methods for lights on an arduino 

Part 1:
Blink[https://github.com/DuskPearl/4443-IoT-Wilkins/blob/main/Assignments/L01/Blink.ino]

![20250708_130436](https://github.com/user-attachments/assets/85b30d26-9a57-4c1e-b8df-c68e4336fd94)


Part 2: 
Potentiometer[https://github.com/DuskPearl/4443-IoT-Wilkins/blob/main/Assignments/L01/Potentiometer.ino]

![20250708_131008](https://github.com/user-attachments/assets/cbdf7bec-b7b9-43a5-9738-78ec19bee2ea)


Part 3: 
RGB[https://github.com/DuskPearl/4443-IoT-Wilkins/blob/main/Assignments/L01/RGB.ino]

https://github.com/user-attachments/assets/6e8e4c80-1e49-438c-8766-12c93103c899


Reflection Questions:
1. What happens if you reduce the delay to 10ms?
  The lights change faster and become harder to discern from eachother when they're in RGB mode.

2. Why do we use resistors with LEDs?  
  The resistors ensure that the bulbs do not burn themselves out too fast or overload the system.

3. What challenges would arise using an RGB LED as a signal light?
   You have to ensure that everything connects correctly and doesnt interfere with eachother
  
4. How would you add a pushbutton to toggle blinking on/off?
   I would make it a constant variable that countinuously checks if the toggle is on or not
