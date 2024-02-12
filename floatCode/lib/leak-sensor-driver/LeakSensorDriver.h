//
// Created by Wring on 2/12/2024.
//

#ifndef INC_2024_FLOAT_LEAKSENSORDRIVER_H
#define INC_2024_FLOAT_LEAKSENSORDRIVER_H


class LeakSensorDriver {
public:
    static LeakSensorDriver& instance()
    {
        static LeakSensorDriver    instance; // Guaranteed to be destroyed.
        // Instantiated on first use.
        return instance;
    }

private:
    LeakSensorDriver() {
        setup();
    }
    //these two prevent copies of the singleton from appearing
    LeakSensorDriver(LeakSensorDriver const&);        // Don't Implement
    void operator=(LeakSensorDriver const&);           // Don't implement

    void setup();

    /*no loop since this will use a callback*/
};


#endif //INC_2024_FLOAT_LEAKSENSORDRIVER_H
