#include "robot_info/agv_robot_info_class.h"
#include "ros/init.h"

int main(int argc, char **argv) {
    ros::init(argc, argv, "agv_robot_info_node");
    ros::NodeHandle nh;

    AGVRobotInfo my_agv(&nh);

    ros::Rate loop_rate(0.5);
    while(ros::ok()){
        my_agv.publish_data();

        loop_rate.sleep();
        ros::spinOnce();
    }
}