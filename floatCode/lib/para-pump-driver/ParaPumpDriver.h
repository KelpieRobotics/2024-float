//
// Created by Wring on 2/12/2024.
//

#ifndef INC_2024_FLOAT_PARAPUMPDRIVER_H
#define INC_2024_FLOAT_PARAPUMPDRIVER_H


class ParaPumpDriver {
public:
    static ParaPumpDriver& instance()
    {
        static ParaPumpDriver    instance; // Guaranteed to be destroyed.
        // Instantiated on first use.
        return instance;
    }

private:
    ParaPumpDriver() {
        setup();
    }
    //these two prevent copies of the singleton from appearing
    ParaPumpDriver(ParaPumpDriver const&);        // Don't Implement
    void operator=(ParaPumpDriver const&);           // Don't implement

    void setup();

    /*I'd expect a public updatePumpValues function or something*/
};


#endif //INC_2024_FLOAT_PARAPUMPDRIVER_H
