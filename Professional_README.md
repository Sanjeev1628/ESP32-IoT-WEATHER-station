
# 🌦️ ESP32 IoT Weather Station

![Arduino](https://img.shields.io/badge/Arduino-IDE-blue?style=for-the-badge&logo=arduino)
![ESP32](https://img.shields.io/badge/ESP32-Microcontroller-red?style=for-the-badge&logo=espressif)
![IoT](https://img.shields.io/badge/IoT-Project-green?style=for-the-badge)
![Wokwi](https://img.shields.io/badge/Wokwi-Simulation-orange?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)

An embedded systems and IoT project using **ESP32**, **DHT22 Sensor**, and **OLED Display** to monitor real-time temperature and humidity.

---

## 🚀 Features

✅ Real-time Temperature Monitoring  
✅ Humidity Monitoring  
✅ OLED Live Display  
✅ Serial Monitor Output  
✅ ESP32 Wi-Fi Integration  
✅ Wokwi Simulation Support  
✅ GitHub Ready Project Structure  

---

## 🛠️ Components Used

| Component | Quantity |
|----------|----------|
| ESP32 DevKit V1 | 1 |
| DHT22 Sensor | 1 |
| SSD1306 OLED Display | 1 |
| Jumper Wires | Few |

---

## 📷 Project Preview

### ESP32 + OLED + DHT22 Setup

Add your project screenshots here after running the simulation.

---

## 📂 Project Structure

```bash
ESP32_IoT_Weather_Station/
│
├── weather_station.ino
├── diagram.json
└── README.md
```

---

## ⚡ Circuit Connections

### DHT22 Sensor

| DHT22 Pin | ESP32 Pin |
|-----------|-----------|
| VCC | 3.3V |
| GND | GND |
| DATA | GPIO 15 |

### OLED Display

| OLED Pin | ESP32 Pin |
|----------|-----------|
| VCC | 3.3V |
| GND | GND |
| SDA | GPIO 21 |
| SCL | GPIO 22 |

---

## ▶️ How to Run the Project

### Method 1 — Wokwi Simulation

1. Open Wokwi
2. Create a new ESP32 project
3. Replace the generated files with:
   - `weather_station.ino`
   - `diagram.json`
4. Start the simulation

🔗 https://wokwi.com

---

### Method 2 — Arduino IDE

1. Install Arduino IDE
2. Install ESP32 Board Package
3. Install Required Libraries:
   - DHTesp
   - Adafruit GFX
   - Adafruit SSD1306
4. Upload the code to ESP32
5. Open Serial Monitor

---

## 📈 Output

The OLED screen displays:

- 🌡️ Temperature in °C
- 💧 Humidity in %

Serial monitor updates every 2 seconds.

---

## 🌐 Future Enhancements

- Firebase Integration
- Blynk IoT Dashboard
- MQTT Communication
- Cloud Data Logging
- Mobile Notifications
- Web Dashboard

---

## 🧠 Technologies Used

- Embedded Systems
- Internet of Things (IoT)
- ESP32 Programming
- Arduino IDE
- Sensor Interfacing
- OLED Display Interface

---

## 🤝 Contribution

Contributions are welcome.

Fork the repository and submit a pull request.

---

## 📜 License

This project is licensed under the MIT License.

---

## 👨‍💻 Author

**Sanjeev K**

Made with ❤️ using ESP32 and Arduino.
