#include "robot-config.h"
using namespace vex;        

////////////////////////////////////////////////////////////////////////////////////
//         ////////          ///////     ///////////     ////////         //////////
//   //////   //////   /////////////   /  /////////  /   //////   ///////   ////////
//   ///////   /////   /////////////   //  ///////  //   ////   //////////   ///////
//   ////////   ////   /////////////   ///  /////  ///   ////   //////////   ///////
//   /////////  ////         ///////   ////  ///  ////   ////   //////////   ///////
//   ////////   ////   /////////////   /////  /  /////   ////   /////////   ////////
//   ///////   /////   /////////////   //////   //////   //////   //////   /////////
//          ////////         ///////   ///////////////   ////////        ///////////
////////////////////////////////////////////////////////////////////////////////////

//////////////////////////Program Outline/////////////////////////////////////////// 
////////////////////////////////////////////////////////////////////////////////////
//   Code for the Dragon Robotics V5 Summer Camps of 2019                         //                                             
//   Meant as simple code to demo subsystems in an instructional setting          //
//   Don't expect alot of complicated stuff                                       //
//   For any help or if something doesn't work text me at 901-462-5295            //
////////////////////////////////////////////////////////////////////////////////////

///////////////////////Port Info    (Add as you see fit)///////////////////////////
//                                                                               //
//  Port 1      Puncher                                                          //
//  Port 2      Lift                                                             //
//  Port 3      Lift (On opposite sides)                                           //    
//  Port 4      Intake                                                           //
//  Port 5      Back Left                                                        //
//  Port 6      Front Left                                                       //
//  Port 7      Back Right                                                       //   
//  Port 9      Front Right                                                      //
//                                                                               //   
///////////////////////////////////////////////////////////////////////////////////




///////// Control Functions //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PuncherControl(bool reverse){                                                                      //Puncher Control
    if(reverse == true){
        if(ControllerMain.ButtonA.pressing()){
            Puncher.spin(directionType::rev, 100, velocityUnits::pct);
        }
        else if(ControllerMain.ButtonB.pressing()){
            Puncher.spin(directionType::fwd, 100, velocityUnits::pct);
        }
        else{
            Puncher.stop(brakeType::hold);                              //change brake type here 
        }
    }
    
    else{
        if(ControllerMain.ButtonA.pressing()){
            Puncher.spin(directionType::fwd, 100, velocityUnits::pct);
        }
        else if(ControllerMain.ButtonB.pressing()){
            Puncher.spin(directionType::rev, 100, velocityUnits::pct);
        }
        else{
            Puncher.stop(brakeType::hold);                              //change brake type here 
        }        
    }
    
}   //end PuncherControl


void LiftControl(bool reverse){                                                                         //Lift Control
    if(reverse == true){
        if(ControllerMain.ButtonR1.pressing()){
            Lift1.spin(directionType::rev, 100, velocityUnits::pct);
            Lift2.spin(directionType::rev, 100, velocityUnits::pct);
        }
        else if(ControllerMain.ButtonR2.pressing()){
            Lift1.spin(directionType::fwd, 100, velocityUnits::pct);
            Lift2.spin(directionType::fwd, 100, velocityUnits::pct);        
        }
        else{
            Lift1.stop(brakeType::hold);
            Lift2.stop(brakeType::hold);
        }        
            
    }
    
    
    else{
        if(ControllerMain.ButtonR1.pressing()){
            Lift1.spin(directionType::fwd, 100, velocityUnits::pct);
            Lift2.spin(directionType::fwd, 100, velocityUnits::pct);
        }
        else if(ControllerMain.ButtonR2.pressing()){
            Lift1.spin(directionType::rev, 100, velocityUnits::pct);
            Lift2.spin(directionType::rev, 100, velocityUnits::pct);        
        }
        else{
            Lift1.stop(brakeType::hold);
            Lift2.stop(brakeType::hold);
        }        
    }
} //end Lift Control

void IntakeControl(bool reverse){                                                                       //Intake Control
    if(reverse == true){
        if(ControllerMain.ButtonR1.pressing()){
            Intake.spin(directionType::rev, 100, velocityUnits::pct);
        }
        else if(ControllerMain.ButtonR2.pressing()){
            Intake.spin(directionType::fwd, 100, velocityUnits::pct);
        }
        else{
            Intake.stop(brakeType::hold);
         }        
            
    }
    
    
    else{
        if(ControllerMain.ButtonR1.pressing()){
            Intake.spin(directionType::fwd, 100, velocityUnits::pct);
        }
        else if(ControllerMain.ButtonR2.pressing()){
            Intake.spin(directionType::rev, 100, velocityUnits::pct);
            
        }
        else{
            Intake.stop(brakeType::hold);
           
        }        
    }
} //end Intake Control 

void BaseDriveControl(bool rev){                                                                        //Base Control
    int speed = 100;
    if(rev == true){
        //speed = -1 * speed
        BackLeft.spin(directionType::rev, ControllerMain.Axis3.value(), velocityUnits::pct);
        FrontLeft.spin(directionType::rev, ControllerMain.Axis3.value(), velocityUnits::pct);
        BackRight.spin(directionType::rev, ControllerMain.Axis2.value(), velocityUnits::pct);
        FrontRight.spin(directionType::rev, ControllerMain.Axis2.value(), velocityUnits::pct);
        
    }
    else{
        BackLeft.spin(directionType::fwd, ControllerMain.Axis3.value(), velocityUnits::pct);
        FrontLeft.spin(directionType::fwd, ControllerMain.Axis3.value(), velocityUnits::pct);
        BackRight.spin(directionType::fwd, ControllerMain.Axis2.value(), velocityUnits::pct);
        FrontRight.spin(directionType::fwd, ControllerMain.Axis2.value(), velocityUnits::pct);
    }
    
} //end BaseDriveControl
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///// Auton Commands /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Praise(){
    Brain.Screen.printAt(1, 40, "Courtesy of Shake");
    Brain.Screen.printAt(1,60, "I hope it works");
    // print timer 
}
int main() {
    Brain.Screen.clearScreen();
    Brain.resetTimer();
    Brain.setTimer(0,timeUnits::sec);
    while(true){
       //insert desired function here     
        
    }
}
