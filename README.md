# 🚗 Parking Slot Availability Indicator using Arduino

A simple **Smart Parking System** built using an **Arduino Uno**, **IR Sensors**, and **LEDs** to detect whether parking slots are **available** or **occupied**. Each parking slot is monitored independently using an IR sensor, and its status is displayed through Green and Red LEDs.

---

## 📌 Project Overview

Finding an available parking space can be time-consuming in busy parking areas. This project demonstrates a simple parking slot monitoring system that automatically indicates whether a parking slot is free or occupied.

Each parking slot has:

- An **IR Sensor** to detect a vehicle.
- A **Green LED** to indicate the slot is available.
- A **Red LED** to indicate the slot is occupied.

This project is suitable for beginners learning Arduino and basic automation.

---

## 🎯 Features

- Detects vehicle presence using IR sensors.
- Green LED indicates an available parking slot.
- Red LED indicates an occupied parking slot.
- Real-time status updates.
- Easy to expand for multiple parking spaces.
- Low-cost and beginner-friendly.

---

## 🛠 Components Required

| Component | Quantity |
|-----------|---------:|
| Arduino Uno | 1 |
| IR Obstacle Sensors | 2 |
| Green LEDs | 2 |
| Red LEDs | 2 |
| 220Ω Resistors | 4 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable / 5V Power Supply | 1 |

---

## 🔌 Circuit Connections

### IR Sensor 1

| Sensor Pin | Arduino Pin |
|------------|-------------|
| VCC | 5V |
| GND | GND |
| OUT | D2 |

### IR Sensor 2

| Sensor Pin | Arduino Pin |
|------------|-------------|
| VCC | 5V |
| GND | GND |
| OUT | D3 |

### LEDs

| LED | Arduino Pin |
|-----|-------------|
| Green LED (Slot 1) | D8 |
| Red LED (Slot 1) | D9 |
| Green LED (Slot 2) | D10 |
| Red LED (Slot 2) | D11 |

> Connect a **220Ω resistor** in series with each LED.

---

## ⚙️ Working Principle

1. Arduino continuously reads both IR sensors.
2. If no vehicle is detected:
   - Green LED turns ON.
   - Red LED remains OFF.
3. When a vehicle is detected:
   - Green LED turns OFF.
   - Red LED turns ON.
4. Each parking slot operates independently, allowing multiple slots to be monitored simultaneously.

---

## 📊 System Logic

| Vehicle Status | Green LED | Red LED |
|---------------|-----------|---------|
| No Vehicle | ON | OFF |
| Vehicle Present | OFF | ON |

---

## ▶️ How to Run

1. Assemble the circuit according to the connection table.
2. Open the Arduino IDE or Cirkit Designer IDE.
3. Upload the Arduino code to the Arduino Uno.
4. Power the circuit.
5. Place an object in front of an IR sensor to simulate a parked vehicle.
6. Observe the LED indicators changing according to the parking slot status.

---

## 📷 Expected Output

### Slot Available

- Green LED: ON
- Red LED: OFF

### Slot Occupied

- Green LED: OFF
- Red LED: ON

Example:

| Slot 1 | Slot 2 |
|--------|--------|
| 🟢 Available | 🔴 Occupied |
| 🔴 Occupied | 🟢 Available |
| 🔴 Occupied | 🔴 Occupied |

---

## 📁 Project Structure

```
Parking-Slot-Availability-Indicator/
│
├── Parking_Slot_Indicator.ino
├── README.md
├── circuit_diagram.png
├── simulation_link.txt
└── images/
    └── project_output.png
```

---

## 🚀 Future Improvements

- Display available slots on a 16×2 LCD.
- Control the parking gate using a Servo Motor.
- Add a buzzer when all parking slots are occupied.
- Connect to Wi-Fi using ESP8266/ESP32 for remote monitoring.
- Create a mobile app to display parking availability.
- Store parking data in the cloud.

---

## 💡 Applications

- Shopping malls
- Hospitals
- Universities
- Office buildings
- Apartment parking
- Smart city parking systems

---

## 🎓 Learning Outcomes

By completing this project, you will learn:

- Digital input using IR sensors
- Digital output using LEDs
- Conditional programming in Arduino
- Real-time monitoring systems
- Basic smart parking automation

---

## 📜 License

This project is open-source and may be used for educational and personal learning purposes.

---

## 👨‍💻 Author

**Project:** Parking Slot Availability Indicator using Arduino

Developed for Arduino and IoT learning purposes.
