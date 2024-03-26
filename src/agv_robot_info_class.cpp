#include "robot_info/agv_robot_info_class.h"

AGVRobotInfo::AGVRobotInfo(ros::NodeHandle *nh) {
  nh_ = nh;
  robot_info_pub =
      nh_->advertise<robotinfo_msgs::RobotInfo10Fields>(robot_info_topic, 1);
}

void AGVRobotInfo::publish_data() {
  info_msg.data_field_01 = robot_description;
  info_msg.data_field_02 = serial_number;
  info_msg.data_field_03 = ip_address;
  info_msg.data_field_04 = firmware_version;
  info_msg.data_field_05 = maximum_payload;

  get_hydraulic_info();

  robot_info_pub.publish(info_msg);
}

void AGVRobotInfo::get_hydraulic_info() {
  info_msg.data_field_06 = hydraulic_system.get_oil_temperature();
  info_msg.data_field_07 = hydraulic_system.get_oil_tank_level();
  info_msg.data_field_08 = hydraulic_system.get_oil_pressure();
}