//
// Created by Wring on 2/12/2024.
//

#ifndef INC_2024_FLOAT_MOVEMENTCONTROLLER_H
#define INC_2024_FLOAT_MOVEMENTCONTROLLER_H


class MovementController {
public:
    static MovementController& instance()
    {
        static MovementController    instance; // Guaranteed to be destroyed.
        // Instantiated on first use.
        return instance;
    }

private:
    MovementController() {
        setup();
    }
    //these two prevent copies of the singleton from appearing
    MovementController(MovementController const&);        // Don't Implement
    void operator=(MovementController const&);           // Don't implement

    void setup();
    
public: void loop();

};


#endif //INC_2024_FLOAT_MOVEMENTCONTROLLER_H
