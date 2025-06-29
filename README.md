<p align="center">
  <a href="https://ibb.co/mVfrPQwL">
    <img src="https://i.ibb.co/jPn9j72c/projectY.webp" alt="projectY" width="300"/>
  </a>
</p>

<h1 align="center">ProjectY: RoboRAVE 2020 Fire Fighting Robot</h1>
<p align="center"><em>Omnidirectional Autonomous Fire Fighting Robot for Czech National and International RoboRAVE 2020</em></p>

## Overview
ProjectY is an advanced Arduino-based autonomous robot featuring omnidirectional movement capabilities and distributed sensor architecture, designed for the 2020 RoboRAVE Czech national competition and international competition in Japan. This sophisticated robot uses four stepper motors for full directional control, 16 ultrasonic sensors for comprehensive obstacle detection, and multiple specialized sensor arrays for precise candle detection and line following. The robot incorporates multiplexer systems and distributed microcontroller architecture for optimal performance in competitive fire fighting challenges. This project was developed as a high school graduation thesis (maturitní práce), demonstrating advanced robotics engineering principles.

---

# ProjectY: RoboRAVE 2020 Fire Fighting Robot

This repository contains the code and documentation for our advanced omnidirectional fire fighting robot designed for the 2020 RoboRAVE Czech national competition and international competition in Japan, developed as a high school graduation thesis (maturitní práce).

## Robot Specifications

### Motors
- **4 Stepper Motors** for omnidirectional locomotion
  - **Motor A, B, C, D** with individual control
  - **Microstepping configuration:** Configurable (1/1, 1/2, 1/4, 1/8, 1/16)
  - **Step timing:** 1100-2000 microseconds (configurable)
  - **Omnidirectional movement:** Forward, backward, left, right, diagonal, rotation

### Sensors

#### Obstacle Detection Sensors (16 total)
- **16 Ultrasonic sensors** for 360-degree obstacle detection
- **Detection ranges:** 35cm (front/back), 40cm (cross), 60cm (special)
- **Positioned around robot perimeter** for complete coverage
- **High-speed communication:** 250,000 baud rate

#### Candle Detection Sensors (58 total)
- **8 Omnidirectional candle sensor rails** with 7 sensors each (stacked vertically)
- **Rail 1:** 7 sensors
- **Rail 2:** 7 sensors
- **Rail 3:** 7 sensors
- **Rail 4:** 7 sensors
- **Rail 5:** 7 sensors
- **Rail 6:** 7 sensors
- **Rail 7:** 7 sensors
- **Rail 8:** 7 sensors
- **Detection threshold:** 850 (configurable)
- **Distributed processing** via dedicated Arduino Nano
- **Backup sensors on blower**
  

#### Line Following Sensors (12 total)
- **8 IR line sensors:** Front, back, left, right (2 each direction)
- **4 RGB line sensors:** Front, back, left, right
- **Detection threshold:** 200 (configurable)
- **Multiplexer control** for sensor management

#### Control Sensors
- **Start button:** For competition control
- **Mode switches:** Multiple operational modes
- **Status indicators:** LED feedback systems

### Actuators
- **Servo motors:** Multiple servo systems for various functions
- **Propeller system:** For candle extinguishing
- **Additional actuators:** Based on specific competition requirements

### Control System
- **Primary microcontrollers:** 2 Arduino Mega boards
  - **Main Mega:** Primary operations and calculations
  - **Ultrasonic Mega:** Dedicated ultrasonic sensor processing
- **Secondary microcontrollers:** 10 Arduino Nano boards
  - **8 Arduino Nano boards** for candle sensor arrays (1 per rail)
  - **1 Arduino Nano board** for LED control
  - **1 Arduino Nano board** for light sensor processing
- **Communication:** High-speed serial communication (250,000 baud)
- **Power:** Autonomous operation with onboard power supply

## Robot Behavior

The robot operates autonomously with the following advanced behaviors:
1. **Omnidirectional movement** using 4-motor differential drive
2. **Advanced obstacle avoidance** using 16 ultrasonic sensors
3. **Precise candle detection** using 8-sensor array
4. **Dual-mode line following** using IR and RGB sensors
5. **Distributed processing** for optimal performance
6. **Multiplexer-controlled sensors** for efficient resource management
7. **High-speed communication** between microcontrollers
8. **Adaptive navigation** with multiple movement patterns

## Project Structure

### Main Project Files
- `motory.cpp` - Main motor control and movement algorithms
- `motory.h` - Motor control header file

### IDE Development Environment
- `arduino_IR_line/` - IR line sensor multiplexer control
- `candle_1_nano/` - Candle detection system
- `ESC/` - Electronic Speed Controller systems
- `motory/` - Motor control systems
- `RGB_line/` - RGB line sensor systems
- `Ultrasonic_READ/` - Ultrasonic sensor processing

### VSC Development Environment
- `main mega/` - Main Arduino Mega controller
- `candle nano/` - Candle sensor processing
- `candle multiplex nano/` - Multiplexed candle detection
- `ultrasonic/` - Ultrasonic sensor systems
- `RGB sensor/` - RGB sensor processing
- `ir line read/` - IR line sensor reading
- `IR sensor multiplex/` - IR sensor multiplexing
- `mega line read/` - Line sensor reading on Mega
- `mega candle read/` - Candle reading on Mega
- `mega all print/` - Comprehensive sensor output
- `mega print/` - Sensor data printing
- `rgb_ring/` - RGB LED ring control
- `CANDLE_MULTIPLEX_IDE/` - Candle multiplexer IDE version
- `candle_multiplexer_nano_old_boot/` - Legacy candle multiplexer

### Dependencies
- `libraries/` - External libraries directory
  - `Servo/` - Servo motor control library

### Configuration Files
- `.gitignore` - Git ignore rules
- `.DS_Store` - macOS system files (ignored by git)
- `roborave_readme.md` - Competition rules and specifications

## Challenge Overview

This robot is designed for advanced RoboRAVE Fire Fighting Challenges, where it must:
- Navigate omnidirectionally within defined arenas
- Locate and extinguish candles without physical contact
- Avoid obstacles using comprehensive sensor arrays
- Complete tasks within time limits
- Operate with distributed processing architecture

---

## Competition Rules & Specifications

### Challenge Goal

The objective of this challenge is to design, build, and program an autonomous robot capable of locating and extinguishing four randomly placed candles within a field outlined by a white and black line. The robot must extinguish the candles without making physical contact with them.

### Divisions

This challenge typically includes teams from:
- Middle School
- High School  
- "Big Kids" divisions

### Robot Requirements & Constraints

Our robot adheres to the following requirements and design constraints for the Fire Fighting Challenge:

- **Autonomy**: The robot operates autonomously
- **Cost**: The total cost of the robot is $1,500 USD or less
- **Extinguishing System Control**: The robot's program can control the start and stop of its extinguishing system via a sensor that interacts with either the candle or the circle the candle is placed on
- **Safety Guard**: If a high-speed propeller is used, the robot has a safety guard in place
- **Sensors and Processors**: Multiple sensors and processors are allowed
- **Volume**: The robot's volume does not exceed 65,030 cm³

### General Rules of Play

- **Starting Position**: The robot begins each heat at a spot along the border chosen by the challenge coordinator
- **First Candle Visibility**: The first candle is in plain view of the robot at the start of the challenge
- **Time Limit**: The robot has 3 minutes to extinguish all four candles
- **Player Interaction**: Only players can operate and manipulate the robot during a heat. If a player touches the robot after the challenge begins, the run ends, and scoring is based on the number of candles extinguished at that point
- **Practice Tracks**: Official tracks are available for practice when not in use by competitors
- **Official Runs**: Teams get 10 official scored runs during the challenge scoring period
- **Tournament Selection**: The total of the 5 highest official scores are used to determine tournament selection

### Challenge Specifications

#### The Track

- **Field Dimensions**: The challenge field is 2.4m × 3.5m
- **Border**: A border is constructed using white and black duct tape. The white duct tape is 7.5cm wide with a 2.5cm black duct tape line down its center
- **Random Placement**: Candles and walls are randomly placed for every run
- **Lighting Conditions**: The challenge may be held in areas with natural light, so the robot is engineered to adapt to changing lighting conditions

#### The Candles

- **Placement**: Candles stand at the center of a white vinyl circle, indicated by a 5cm diameter black circle
- **Height**: Candle heights vary between 10cm and 45cm
- **Circle Dimensions**: The circle has a 40cm diameter, with a 2.5cm black line 2.5cm in from its outer edge

**Wall Obstructions**: Candles can be blocked by walls in varying configurations:
- 1 candle: No wall
- 1 candle: 1 wall
- 1 candle: 2 walls
- 1 candle: 3 walls

#### The Walls

- **Width**: Wall widths vary from 20cm to 35cm
- **Height**: Walls are 40cm tall
- **Bases**: Walls are held up by wooden bases that are 3.5cm tall and may span the approximate width of the wall

> **Note**: All challenge dimensions are approximate.

### Scoring

Scoring is based on the number of candles extinguished. A "remaining time bonus" is awarded only if all four candles are extinguished. Otherwise, only points for extinguished candles are awarded.

#### Penalty Rules

A 50% penalty off the candle's value is applied if:
- A candle is extinguished by the robot when it is completely outside the circle
- The candle is touched during the process of extinguishing the flame

The "process of extinguishing the lit candle" is defined as: entering into the circle, extinguishing, and leaving the circle. During this time, the robot cannot make contact with the candle.

Previously extinguished candles become obstacles and do not count as a penalty if touched.

#### Scoring Matrix

| Number of Candles Extinguished | First | Second | Third | Fourth | Total Possible Score |
|--------------------------------|-------|---------|-------|--------|---------------------|
| Half points due to penalty*    | 50    | 100     | 150   | 200    | 1000               |
| Full Points                    | 100   | 200     | 300   | 400    |                    |
| **Time Bonus**                 |       |         |       |        | **0-180** (Clock counts down from 180 seconds and stops when the robot extinguishes the fourth candle) |

### Tournament Scoring

The top eight teams will compete in a final tournament. Advancing teams are seeded into the tournament bracket based on their aggregate score. The "Runner Up" is used to determine 3rd place based on the outcome of the semi-finals.

---

## 🔐 License

This project is licensed under the **Non-Commercial Public License (NCPL v1.0)**  
© 2025 Jakub Ešpandr - Born4FLight, FlyCamCzech

See the [LICENSE](https://github.com/Jakub-Espandr/ProjectY/raw/main/LICENSE) file for full terms.