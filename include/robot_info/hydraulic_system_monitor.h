#ifndef HYDRAULIC_SYSTEM_MONITOR_H
#define HYDRAULIC_SYSTEM_MONITOR_H

#include <string>

class HydraulicSystemMonitor {
private:
    std::string hydraulic_oil_temperature = "Hydraulic oil temperature : 35C";
    std::string hydraulic_oil_tank_fill_level = "Hydraulic oil tank fill level : 85%";
    std::string hydraulic_oil_pressure = "Hydraulic oil pressure : 100 bar";

public:
    std::string get_oil_temperature();
    std::string get_oil_tank_level();
    std::string get_oil_pressure();
};
#endif // HYDRAULIC_SYSTEM_MONITOR_H