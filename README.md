# 🚆 RakshaTrail

## AI-Powered Smart Railway Track Monitoring & Emergency Response System

RakshaTrail is an AI-powered autonomous railway inspection robot designed to improve railway safety by detecting track cracks, missing clips, obstacles, and abnormal vibrations in real time. The robot combines Artificial Intelligence, Computer Vision, IoT, GPS tracking, and cloud connectivity to assist railway authorities in preventive maintenance and emergency response.

## 📌 Problem Statement

Railway tracks are inspected manually, which is time-consuming, expensive, and may fail to detect hazards in time. RakshaTrail automates railway track inspection using AI and IoT technologies

# 🎯 Objectives

- Detect railway track cracks
- Detect missing clips and damaged tracks
- Monitor railway tracks in real time
- Send emergency alerts instantly
- Track robot location using GPS
- Reduce manual inspection effort
- 
# ✨ Key Features

- 🤖 AI-Based Crack Detection
- 📷 Computer Vision using YOLOv8
- 📡 IoT Monitoring
- 📍 Live GPS Tracking
- 🚨 Emergency Alert System
- 💡 LED Night Inspection
- 🔊 Buzzer Alarm
- 📶 Wi-Fi Connectivity
- 📊 Cloud Dashboard
- 🎥 Live Camera Monitoring
- 
# 🛠 Hardware Components

| Component | Purpose |
|------------|---------------------------|
| Raspberry Pi Pico W / Raspberry Pi 5 | Main Controller |
| ESP32-CAM / Raspberry Pi Camera | Crack & Missing Clip Detection |
| USB HD Camera | Front Track Monitoring |
| MPU6050 | Vibration & Track Irregularity Detection |
| NEO-6M GPS Module | Live Location Tracking |
| DC Geared Motors | Robot Movement |
| L298N Motor Driver | Motor Control |
| Rotary Encoder | Distance Measurement |
| 12V Li-ion Battery | Power Supply |
| Buck Converter | Voltage Regulation |
| Railway Chassis & Wheels | Robot Body |
| LED Lights | Night Inspection |
| Buzzer | Emergency Alerts |
| OLED/LCD Display | Status Display |
| Wi-Fi | Data Transmission |
| Emergency Stop Switch | Safety |
| Jumper Wires & PCB | Connections |
| SD Card | Data Storage |

# 💻 Software Stack

- Python
- OpenCV
- YOLOv8
- TensorFlow / PyTorch
- Flask Dashboard
- MQTT
- Firebase
- Arduino IDE
- Raspberry Pi OS
- GitHub

# ⚙ Working Principle

1. Robot moves along the railway track.
2. Camera captures continuous images of the track.
3. YOLOv8 detects cracks and missing clips.
4. MPU6050 detects abnormal vibration.
5. GPS continuously updates robot location.
6. ESP32 controls motors, LEDs, and buzzer.
7. Raspberry Pi processes AI models.
8. Alert is sent through Wi-Fi/MQTT/Firebase.
9. Monitoring dashboard displays live status.

# 📂 Project Structure

RakshaTrail/
│
├── README.md
├── LICENSE
├── RakshaTrail.ino
├── ESP32_CAM.ino
├── RAKSHATRAIL.pptx
├── Circuit Diagram.png
├── CAD Model.jpeg
├── Images/
├── RaspberryPi/
├── ESP32

# CAD Model
# Circuit Diagram
# Prototype
# 🎥 Project Demo

YouTube Demo

https://youtu.be/bnVLzFBuWvc


# 🚀 Future Scope

- AI-based Predictive Maintenance
- Thermal Camera Integration
- Autonomous Navigation
- Cloud Analytics
- Mobile Application
- Railway Digital Twin
- Railway Control Room Dashboard

# 📄 License

MIT License
