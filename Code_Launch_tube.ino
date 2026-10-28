// 1. Definition of digital pin numbers for the start and end sensors
const int switchstart = 3;
const int switchend = 2;

// 2. Setting the distance between sensors (0.8 meters)
float distance = 0.8;  

// 3. Variables to store the internal clock time (in milliseconds) for start and stop
unsigned long startTime;
unsigned long stopTime;

// 4. Variables to store calculated flight time and velocity
float duration;
float velocity;

void setup() {
  // 5. Configures pins 2 and 3 to receive signals from the rocket sensors 
  pinMode(switchstart, INPUT);
  pinMode(switchend, INPUT);
  
  // 6. Initializes the Serial Monitor and print "Waiting for rocket" in the serial monitor
  Serial.begin(9600);
  Serial.println("Waiting for rocket");
}

void loop() {
  // 7. While loop that pauses the code as long as the start sensor is LOW
  while(digitalRead(switchstart) == LOW)
    
    // 8. While loop that prints "Rocket is in place" as long as the start sensor is HIGH 
    while(digitalRead(switchstart) == HIGH)
      Serial.println("Rocket is in place");
      
  // 9. Captures the current time the moment the start sensor logic finishes
  startTime = millis();

  // 10. Pauses execution while waiting for the rocket to reach the end sensor
  while(digitalRead(switchend) == LOW){
  }
  
  // 11.Captures the current time the moment the end sensor logic finishes
  while(digitalRead(switchend) == HIGH)
  stopTime = millis();
  
  // 12. Calculates duration time by subtracting start from stop and converting ms to seconds
  duration = (stopTime - startTime) / 1000.0;
  
  // 13. Computes the initial velocity (Vo) using the distance divided by time formula 
  velocity = distance / duration;
  
  // 14. Calculates predicted travel distance based on projectile motion at 45 degrees 
  float travelled_distance = (velocity*velocity)/9.81;
  
  // 15. Calculates the theoretical error relative to the desired 13-meter distance 
  float error = 13 - travelled_distance;

  // 16. Prints the final calculated parameters to the serial monitor
  Serial.print("Time (s): ");
  Serial.println(duration);
  Serial.print("Speed (m/s): ");
  Serial.println(velocity);
  Serial.print("travelled distance: ");
  Serial.println(travelled_distance);
  Serial.print("error: ");
  Serial.println(error);
}