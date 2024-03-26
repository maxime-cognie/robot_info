#include "robot_info/robot_info_class.h"

int main(int argc, char **argv) {
    ros::init(argc, argv, "robot_info_node");
    ros::NodeHandle nh;

    RobotInfo my_robot(&nh);

    ros::Rate loop_rate(0.5);
    while(ros::ok()){
        my_robot.publish_data();

        loop_rate.sleep();
        ros::spinOnce();
    }
}