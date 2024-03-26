#ifndef AGV_ROBOT_INFO_CLASS_H
#define AGV_ROBOT_INFO_CLASS_H

#include "robot_info/robot_info_class.h"
#include "robot_info/hydraulic_system_monitor.h"

class AGVRobotInfo : public RobotInfo {
public:
    AGVRobotInfo() {};
    AGVRobotInfo(ros::NodeHandle *nh);
    void publish_data() override;

protected:
    HydraulicSystemMonitor hydraulic_system;
    std::string maximum_payload = "Maximum payload : 10 kg";
    void get_hydraulic_info();

};
#endif // AGV_ROBOT_INFO_CLASS_H