# Design-and-Implementation-of-Ultrasonic-Humidifier-using-Microcontroller
An Ultrasonic Humidifier design 
# 🌫️ Arduino Humidifier Control System

A simple **Arduino-based automatic humidifier control system** designed and simulated in **Proteus**.

The system monitors environmental conditions and controls a fan/humidifier based on the programmed conditions. The project demonstrates the use of Arduino, sensors, electronic components, and embedded C/C++ programming.

## 📌 Project Overview

This project was created to design and simulate an automatic humidifier system using an **Arduino microcontroller**.

The main goal is to automatically control the humidifier/fan according to the detected environmental conditions instead of manually turning it ON and OFF.

The complete circuit was designed and tested using **Proteus simulation software**.

## ✨ Features

* 🤖 Arduino-based automatic control
* 💧 Humidity/environment monitoring
* 🌀 Automatic fan/humidifier control
* 🔌 Electronic circuit simulation in Proteus
* 💻 Arduino C/C++ source code
* 🧪 Simulation and testing before hardware implementation

## 🛠️ Components Used

The project uses the following components:

* Arduino
* Humidity sensor
* temperature sensor
* DC fan
* Transistor/MOSFET or switching component
* Resistors
* Power supply
* Other supporting electronic components

> **Note:** The exact components and values can be found in the Proteus schematic included in this repository.

## 💻 Software Used

* **Arduino IDE** – for writing and compiling the Arduino program
* **Proteus** – for circuit design and simulation
* **GitHub** – for storing and documenting the project

## 📂 Repository Structure

```text
humidifier/
│
├── README.md
│
├── Arduino_Code/
│   └── humidifier.ino
│
├── Proteus/
│   └── humidifier.pdsprj
│
├── Schematic/
│   └── schematic.png
│
└── Images/
    └── simulation.png
```

## ⚙️ How It Works

The basic working process is:

```text
        Environmental Conditions
                  ↓
             Humidity Sensor
                  ↓
               Arduino
                  ↓
          Compare with Setting
                  ↓
          ┌───────┴───────┐
          ↓               ↓
     Humidity Low    Humidity Normal
          ↓               ↓
   Humidifier/Fan ON   Humidifier/Fan OFF
```

The sensor provides environmental data to the Arduino. The Arduino processes the received data and decides whether the humidifier/fan should be switched ON or OFF.

## 🚀 How to Run the Project

### 1. Download or Clone the Repository

Clone this repository using Git:

```bash
git clone https://github.com/YOUR-USERNAME/humidifier.git
```

Or download the repository as a ZIP file.

### 2. Open the Arduino Code

Navigate to:

```text
Arduino_Code/
```

Open the `.ino` file using **Arduino IDE**.

Review the pin assignments and settings before uploading the code to an actual Arduino.

### 3. Open the Proteus Simulation

Navigate to:

```text
Proteus/
```

Open the Proteus project file.

Run the simulation and observe the behavior of the humidifier/fan.

## 🧪 Simulation

The project was tested using **Proteus** before moving toward physical hardware implementation.

The Proteus simulation allows the circuit and Arduino program to be tested without requiring the physical components.

## 📷 Project Images

Screenshots of the circuit, simulation are included in the repository.


## 🔧 Future Improvements

Possible improvements for future versions include:

* Add an LCD/OLED display
* Add adjustable humidity settings
* Add buttons for user control
* Improve fan speed control
* Add a water-level sensor
* Add an automatic safety shutoff
* Design and manufacture the physical PCB
* Build and test the circuit using real hardware
* Add a proper enclosure for the humidifier

## ⚠️ Disclaimer

This repository contains a **student/educational electronics project** and a Proteus simulation.

The simulated circuit should be carefully reviewed before building the physical circuit. Always verify component ratings, wiring, power requirements, and switching components before connecting real hardware.

## 📄 License

This project is available for educational and personal use.

If you use or modify this project, you are welcome to reference the original repository.

### 👩‍💻 Author

Ebada Amir

GitHub: @ebadaamir11

⭐ If you find this project useful, consider giving the repository a star!
