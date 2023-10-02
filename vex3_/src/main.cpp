/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       z                                                         */
/*    Created:      2023/9/29 11:36:48                                        */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain       Brain;

// define your global instances of motors and other devices here


int main() {
    vex::motor motor1(0);
    vex::motor motor2(6);
    //Brain.Screen.printAt( 10, 50, "Hello V5" );
     int count=0;
     int x1=100,x2=30;
     int time1,time2=0;
    // double time;
    // vex::encoder Encoder = vex::encoder(Brain.ThreeWirePort.A);
    // vex::encoder encoder1(Brain.ThreeWirePort.A);
    // vex::encoder encoder2(Brain.ThreeWirePort.B);
      
    while(1)
    {
       
          motor1.spin(vex::directionType::fwd,x1,rpm);
          motor2.spin(vex::directionType::rev,x2,rpm);//左右边电机正方向不一致
          count++;
         this_thread::sleep_for(1800);
         if(count>=5)
         {
          x1=x1==100?30:100;
          x2=x2==30?100:30;
       
          count=0;
         }
    }
  
    return 0;
}
