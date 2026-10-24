# LINE-FOLLOWER-ROBOT-MDV
A simple line-following robot project built with an Arduino Uno, L298N motor driver, dual DC motors, and IR sensors. Includes a complete circuit connection diagram for quick assembly and reference.
# 🤖 Line Following Robot Using Arduino

## 📌 Project Overview

This project is an Arduino-based Line Following Robot that follows a black line on a white surface using two IR sensors. An L298N motor driver controls the two DC motors according to the sensor readings.

The robot automatically moves forward, turns left, turns right, or stops depending on the detected line.

## 🛠️ Components Required

- Arduino Uno
- L298N Motor Driver Module
- 2 DC Geared Motors
- 2 IR Line Tracking Sensors
- Robot Chassis and Wheels
- Battery or suitable motor power supply
- Jumper Wires

## 🔌 Circuit Diagram

![Line Following Robot Circuit Diagram](circuit_diagram.webp)

## 📍 Pin Connections

| Component | Arduino Pin |
|---|---|
| L298N ENA | D5 |
| L298N IN1 | D6 |
| L298N IN2 | D7 |
| L298N IN3 | D9 |
| L298N IN4 | D10 |
| L298N ENB | D11 |
| Right IR Sensor OUT | A1 |
| Left IR Sensor OUT | A0 |

**Power connections:**
- Connect the motor driver's ground (GND) to Arduino GND.
- Connect the left and right motors to the L298N motor output terminals.
- Power the Arduino and motors using suitable power supplies.
- Ensure that the Arduino and motor driver share a common ground.

## ⚙️ Working Principle

The two IR sensors detect the black line and send digital signals to the Arduino. The Arduino processes these signals and controls the motors through the L298N motor driver.

| Right Sensor | Left Sensor | Robot Action |
|---|---|---|
| LOW (0) | LOW (0) | Move Forward |
| HIGH (1) | LOW (0) | Turn Right |
| LOW (0) | HIGH (1) | Turn Left |
| HIGH (1) | HIGH (1) | Stop |

*Note: These actions assume the sensors output LOW on black and HIGH on white. Verify the output of your particular sensor modules and adjust the code if needed.*

## 💻 Arduino Code

The Arduino program is available in [`line_following_robot.ino`](line_following_robot.ino).

### Motor Speed

The default motor speed is set to 70 out of 255.

```cpp
int motorSpeed = 70;
```

You can adjust this value according to your robot's performance and motor requirements.

## 🚀 How to Run the Project

1. Assemble the robot and connect the components according to the circuit diagram.
2. Open `line_following_robot.ino` in the Arduino IDE.
3. Select **Arduino Uno** under Tools → Board.
4. Select the correct port under Tools → Port.
5. Verify and upload the program.
6. Place the robot on a surface with a black line over a white background.
7. Test the sensor readings and adjust the sensor positions and motor speed as necessary.

## 🎯 Applications

- Robotics and automation learning
- Autonomous mobile robots
- Embedded systems projects
- Arduino programming practice
- Educational robotics competitions

## 🔮 Future Improvements

- Implement PID control for smoother line tracking.
- Add obstacle detection using an ultrasonic sensor.
- Improve turning accuracy and line recovery.
- Add adjustable motor speed and calibration.
- Integrate a rechargeable battery system.

## 👨‍💻 Technologies Used

- Arduino Uno
- Arduino C/C++
- Infrared Sensors
- L298N Motor Driver
- DC Motors

## 📄 License

This project is available for educational and personal learning purposes.

---

**If you find this project useful, consider giving the repository a ⭐ on GitHub!**
