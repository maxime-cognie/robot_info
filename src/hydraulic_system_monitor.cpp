#include "robot_info/hydraulic_system_monitor.h"

std::string HydraulicSystemMonitor::get_oil_temperature() {
  return hydraulic_oil_temperature;
}

std::string HydraulicSystemMonitor::get_oil_tank_level() {
  return hydraulic_oil_tank_fill_level;
}
std::string HydraulicSystemMonitor::get_oil_pressure() {
  return hydraulic_oil_pressure;
}