cmake_minimum_required(VERSION 3.5)
project(assignment3)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)

# Add your package's C++ executables
add_executable(turtlebot3_driver
  src/Turtlebot3Driver.cpp
  src/main.cpp
)

# Link against ROS 2 libraries
target_link_libraries(turtlebot3_driver
  ${rclcpp_LIBRARIES}
  ${sensor_msgs_LIBRARIES}
  ${geometry_msgs_LIBRARIES}
)

# Add include directories
target_include_directories(turtlebot3_driver
  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

# Install
install(TARGETS
  turtlebot3_driver
  DESTINATION lib/${PROJECT_NAME}
)

# Install launch files
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
)

ament_package()

