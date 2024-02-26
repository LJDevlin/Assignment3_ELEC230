#include "rclcpp/rclcpp.hpp"
#include "Turtlebot3Driver.hpp"

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Turtlebot3Driver>();
    while (rclcpp::ok()) {
        // ------------------------------ FUNCTIONS AVAILABLE -----------------------------
        // moveForward() - Moves the robot forward at a given speed
        // stopMoving() - Stops the robot in its current position
        // obstacleDetected() - Returns true or false if obstacle within threshold
        // turn(1.0) - Turns the robot counterclockwise at speed 1 rad/s
        // turn(-1,0) - Turns the robot clockwise at speed 1 rad/s
        // ----------------------------- ALGORITHM GOES HERE -----------------------------
    
        
        // --------------------------------------------------------------------------------
        rclcpp::spin_some(node);
    }
    rclcpp::shutdown();
    return 0;
}

