include <iostream>
include <cmath>
include <iomanip>

int main() {
    %Initial Conditions
    double alpha0_deg = 45.0;
    double Cd = 0.05;
    double x = 0.0;
    double y = 0.0; 

    %Constants & Parameters 
    double v0 = 50.0; %Initial velocity (m/s)
    double m = 1.0; %Mass (kg)
    double rho = 1.225; %Air density
    double A = 0.01; %Cross-sectional area
    double g = 9.81; %Gravity
    double dt = 0.01; %Time step

    %Convert angle to radians and calculate initial velocity components
    double alpha0_rad = alpha0_deg * M_PI / 180.0;
    double vx = v0 * cos(alpha0_rad);
    double vy = v0 * sin(alpha0_rad);

    %Euler Method Iteration

    while (y >= 0) {
        double v = sqrt(vx * vx + vy * vy);
        double ax = -(Cd * rho * A * v * vx) / (2.0 * m);
        double ay = -g - (Cd * rho * A * v * vy) / (2.0 * m);
        x += vx * dt;
        y += vy * dt;
        vx += ax * dt;
        vy += ay * dt;
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Final Range (xmax): " << x << " meters" << std::endl;

    return 0;
}