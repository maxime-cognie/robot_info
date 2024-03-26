#include "robot_info/robot_info_class.h"

RobotInfo::RobotInfo(ros::NodeHandle *nh) {
    nh_ = nh;
    robot_info_pub = nh_->advertise<robotinfo_msgs::RobotInfo10Fields>(robot_info_topic, 1);
}

void RobotInfo::publish_data() {
    info_msg.data_field_01 = robot_description;
    info_msg.data_field_02 = serial_number;
    info_msg.data_field_03 = ip_address;
    info_msg.data_field_04 = firmware_version;

    robot_info_pub.publish(info_msg);
}