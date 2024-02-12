#include <Arduino.h>
///#include "../lib/comms-driver/"
#include "../lib/controller/MovementController.h"
#include "../lib/leak-sensor-driver/LeakSensorDriver.h"
#include "../lib/para-pump-driver/ParaPumpDriver.h"
#include "../lib/pressure-sensor-driver/PressureSensorDriver.h"

void setup() {
    //setup the drivers
    ///TBDCommsDriver::instance();
    LeakSensorDriver::instance();
    ParaPumpDriver::instance();
    PressureSensorDriver::instance();
    MovementController::instance();
}

void loop() {
    PressureSensorDriver::instance().loop();
    MovementController::instance().loop();
}