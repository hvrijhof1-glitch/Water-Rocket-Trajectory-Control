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
<br>

**Version Française**
<br>

# 🚀 Fusée à Eau & Système de Déploiement de Parachute

## 📝 À Propos du Projet
Ce projet multidisciplinaire s'est concentré sur la conception, la simulation et la fabrication d'une fusée à eau capable d'atteindre une cible de 13 mètres de distance tout en faisant atterrir en toute sécurité une charge utile fragile (un œuf).

Le projet intègre la conception CAO mécanique, la simulation de la dynamique des fluides et un système électronique embarqué pour le suivi de la trajectoire et le déploiement du parachute.

## 🛠️ Technologies Utilisées
* **Programmation :** Python, C++ (Arduino/ESP32)
* **CAO & Simulation :** Creo Parametric, Simscale (CFD)
* **Matériel :** Arduino UNO, ESP32 DevKit, Capteurs Infrarouges, Servomoteur 9g

## ✨ Fonctionnalités Principales
* **Simulation de Trajectoire :** Développement d'un script Python utilisant la méthode d'Euler pour prédire la trajectoire de vol de la fusée, en tenant compte de la résistance de l'air et d'un coefficient de traînée ($C_D=0.3$) approximé via Simscale.
* **Conception Mécanique :** Modélisation 3D et impression d'une configuration optimisée à 4 ailerons, d'une tuyère sur mesure et de supports internes pour protéger l'électronique.
* **Télémétrie du Tube de Lancement :** Programmation d'un circuit de chronométrage basé sur Arduino avec des capteurs pour calculer la vitesse de lancement initiale ($V_0$) et prédire la distance d'atterrissage théorique.
* **Système de Parachute Embarqué :** Conception d'un système ESP32 embarqué qui détecte le lancement via un capteur infrarouge et actionne un servomoteur pour déployer le parachute à l'apogée précise (0,5 seconde après le lancement).

## 📊 Résultats
Le lancement physique final a atteint une distance de 14,2 m (largement dans l'objectif de $13m \pm 3m$), et le système de déploiement électronique a protégé avec succès l'œuf lors de l'atterrissage.
