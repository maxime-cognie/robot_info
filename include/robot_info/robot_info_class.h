#ifndef ROBOT_INFO_CLASS_H
#define ROBOT_INFO_CLASS_H

#include "ros/ros.h"
#include "robotinfo_msgs/RobotInfo10Fields.h"

class RobotInfo {
public:
    RobotInfo(){};
    RobotInfo(ros::NodeHandle *nh);
    virtual void publish_data();

protected:
    std::string robot_description = "Robot description : turtlebot";
    std::string serial_number = "Serial number : 10210";
    std::string ip_address = "ip address : 127.0.0.1";
    std::string firmware_version = "firmware version : 1.0.0";
    robotinfo_msgs::RobotInfo10Fields info_msg;
    std::string robot_info_topic = "robot_info";
    ros::Publisher robot_info_pub;
    ros::NodeHandle *nh_;

};
#endif // ROBOT_INFO_CLASS_H