using namespace vex;
brain Brain;
controller ControllerMain = controller();


//motor for the puncher 
motor Puncher = motor(PORT1);

//lift motors
motor Lift1 = motor(PORT2);
motor Lift2 = motor(PORT3, true);       // delete this true if both motors are on the same lift

//intake motor
motor Intake = motor(PORT4);

//drive base motors (4 wheel tank)
        
        //Left
motor BackLeft = motor(PORT5);
motor FrontLeft = motor(PORT6);
        
        //Right
motor BackRight = motor(PORT7, true);
motor FrontRight = motor(PORT8, true);

