//
// Created by Wring on 2/12/2024.
//

#ifndef INC_2024_FLOAT_PRESSURESENSORDRIVER_H
#define INC_2024_FLOAT_PRESSURESENSORDRIVER_H


class PressureSensorDriver {
public:
    static PressureSensorDriver& instance()
    {
        static PressureSensorDriver    instance; // Guaranteed to be destroyed.
        // Instantiated on first use.
        return instance;
    }

private:
    PressureSensorDriver() {
        setup();
    }
    //these two prevent copies of the singleton from appearing
    PressureSensorDriver(PressureSensorDriver const&);        // Don't Implement
    void operator=(PressureSensorDriver const&);           // Don't implement

    void setup();

public: void loop();
};


#endif //INC_2024_FLOAT_PRESSURESENSORDRIVER_H
