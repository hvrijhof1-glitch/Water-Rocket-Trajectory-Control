# 🚀 Water Rocket & Parachute Deployment System

## 📝 About The Project
This multidisciplinary project focused on designing, simulating, and building a water bottle rocket capable of consistently hitting a 13-meter distance target while safely landing a fragile payload (an egg).

The project integrates mechanical CAD design, fluid dynamics simulation, and an embedded electronic system for trajectory tracking and parachute deployment.

## 🛠️ Built With
* **Programming:** Python, C++ (Arduino/ESP32)
* **CAD & Simulation:** Creo Parametric, Simscale (CFD)
* **Hardware:** Arduino UNO, ESP32 DevKit, IR Sensors, 9g Servo Motor

## ✨ Key Features
* **Trajectory Simulation:** Developed a Python script using the Euler Method to predict the rocket's flight path, factoring in air resistance and a drag coefficient ($C_D=0.3$) approximated via Simscale.
* **Mechanical Design:** 3D-modeled and printed an optimized 4-fin configuration, a custom nozzle, and internal mounts for the electronics payload.
* **Launch Tube Telemetry:** Programmed an Arduino-based timing circuit with sensors to calculate the initial launch velocity ($V_0$) and predict the theoretical landing distance.
* **Embedded Parachute System:** Engineered an onboard ESP32 system that detects the launch via an infrared sensor and actuates a servo motor to deploy the parachute at the precise apogee (0.5 seconds post-launch).

## 📊 Results
The final physical launch achieved a distance of 14.2m (well within the $13m \pm 3m$ objective), and the electronic deployment system successfully protected the egg payload upon landing.

