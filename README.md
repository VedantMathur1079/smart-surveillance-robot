# 🚨 Smart Surveillance Robot

## 📌 Overview
An IoT-based surveillance robot built using **ESP32-CAM and Arduino Uno** for real-time monitoring, obstacle detection, and hazard detection.

This project combines **embedded systems, IoT, and robotics** to create a smart security solution.

---

## 🔥 Features
- 📷 Live video streaming using ESP32-CAM
- 🚗 Remote-controlled movement (Forward, Backward, Left, Right)
- 🧠 Obstacle detection using Ultrasonic & IR sensors
- 👤 Motion detection using PIR sensor
- 🔥 Gas leak detection using MQ-2 sensor
- ⚡ Real-time monitoring system

---

## 🛠️ Technologies Used
- Arduino Uno
- ESP32-CAM
- Embedded C / Arduino IDE
- IoT Sensors
- L298N Motor Driver

---

## ⚙️ Hardware Components
- ESP32-CAM
- Arduino UNO
- L298N Motor Driver
- Ultrasonic Sensor (HC-SR04)
- PIR Motion Sensor
- IR Obstacle Sensors
- Gas Sensor (MQ-2)
- Servo Motor
- DC Motors + Chassis

---

## 🧠 System Architecture
- Arduino handles motor control & sensor input
- ESP32-CAM handles video streaming over WiFi
- Sensors detect motion, obstacles, and gas leakage

---

## 📄 Diagrams
### Block Diagram
![Block Diagram](docs/block_diagram.png)

### Circuit Diagram
![Circuit Diagram](docs/circuit_diagram.png)

---

## 🚀 How to Run
1. Upload Arduino code to Arduino UNO
2. Upload ESP32-CAM code using FTDI
3. Power the robot using a battery
4. Connect to WiFi:
   - SSID: ESP32CAM_ROBOT
   - Password: 12345678
5. Open the browser and go to:
   http://192.168.4.1

---

## 👨‍💻 Author
**Vedant Mathur**

---

## ⭐ Future Improvements
- Mobile app control
- AI-based object detection
- Cloud integration
- Telegram alerts
