#ifndef AGV_ROBOT_INFO_CLASS_H
#define AGV_ROBOT_INFO_CLASS_H

#include "robot_info/robot_info_class.h"

class AGVRobotInfo : public RobotInfo {
public:
    AGVRobotInfo() {};
    AGVRobotInfo(ros::NodeHandle *nh);
    void publish_data() override;

protected:
    std::string maximum_payload = "Maximum payload : 10 kg";

};
#endif // AGV_ROBOT_INFO_CLASS_H