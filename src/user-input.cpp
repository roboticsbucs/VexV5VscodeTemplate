#include <chrono>
#include "vex.h"
#include "main.h"
using namespace std::chrono;
/*
------------------------------------------------------------------
BUTTON DEFINITIONS ! READ ME !
------------------------------------------------------------------
Each button has a respective namespace which has four methods:
- initialize()
- onPress()
- onRelease()
- onPing()
initialize():
Is called at the start of usercontrol to allow proper control flow.
This should be called exactly once.

onPress():
Is called once each time that the namespace's respective button is pressed
onRelease():
Is called once each time that the namespace's respective button is released.

onPing()
Is called once and only once every tick.
A tick is every iteration of the main gameplay loop that is found in usercontrol()
This is useful for when you want some operation to happen while the button is pressed,
or have a button toggle an operation.

All Variables that impact only one button must be stored within the button's namespace
! Even if the method is empty, DO NOT DELETE the method, this will cause the system to break.

A note to advanced readers: every use of the method vex::controller::button::pressed spins up a new thread,
so try to make your methon fail-safe to collisions
*/
/*
---------------Enums---------------------------
*/

/*
---------------Constants------------------------
(constants and variables should go in their minimum scope,
meaning that if it only is used by one button, it should go in that button's namespace)
*/

/*
---------------Variables-----------------------
*/

namespace buttonA
{
  static vex::controller::button buttonObject{Controller.ButtonA};
  void onPress()
  {
  }
  void onRelease()
  {
  }
  void onPing()
  {
  }
  void initialize()
  {
    buttonObject.pressed(onPress);
    buttonObject.released(onRelease);
  }
}

namespace buttonB
{
  static vex::controller::button buttonObject{Controller.ButtonB};
  void onPress()
  {
  }
  void onRelease()
  {
  }
  void onPing()
  {
  }
  void initialize()
  {
    buttonObject.pressed(onPress);
    buttonObject.released(onRelease);
  }
}

namespace buttonX
{
  static vex::controller::button buttonObject{Controller.ButtonX};
  void onPress()
  {
  }
  void onRelease()
  {
  }
  void onPing()
  {
  }
  void initialize()
  {
    buttonObject.pressed(onPress);
    buttonObject.released(onRelease);
  }
}

namespace buttonY
{
  static vex::controller::button buttonObject{Controller.ButtonY};
  void onPress()
  {
  }
  void onRelease()
  {
  }
  void onPing()
  {
  }
  void initialize()
  {
    buttonObject.pressed(onPress);
    buttonObject.released(onRelease);
  }
}

namespace buttonUp
{
  static vex::controller::button buttonObject{Controller.ButtonUp};
  void onPress()
  {
  }
  void onRelease()
  {
  }
  void onPing()
  {
  }
  void initialize()
  {
    buttonObject.pressed(onPress);
    buttonObject.released(onRelease);
  }
}

namespace buttonDown
{
  static vex::controller::button buttonObject{Controller.ButtonDown};
  void onPress()
  {
  }
  void onRelease()
  {
  }
  void onPing()
  {
  }
  void initialize()
  {
    buttonObject.pressed(onPress);
    buttonObject.released(onRelease);
  }
}

namespace buttonLeft
{
  static vex::controller::button buttonObject{Controller.ButtonLeft};
  void onPress()
  {
  }
  void onRelease()
  {
  }
  void onPing()
  {
  }
  void initialize()
  {
    buttonObject.pressed(onPress);
    buttonObject.released(onRelease);
  }
}

namespace buttonRight
{
  static vex::controller::button buttonObject{Controller.ButtonRight};
  void onPress()
  {
  }
  void onRelease()
  {
  }
  void onPing()
  {
  }
  void initialize()
  {
    buttonObject.pressed(onPress);
    buttonObject.released(onRelease);
  }
}

namespace buttonL1
{
  static vex::controller::button buttonObject{Controller.ButtonL1};
  void onPress()
  {
  }
  void onRelease()
  {
  }
  void onPing()
  {
  }
  void initialize()
  {
    buttonObject.pressed(onPress);
    buttonObject.released(onRelease);
  }
}

namespace buttonL2
{
  static vex::controller::button buttonObject{Controller.ButtonL2};
  void onPress()
  {
  }
  void onRelease()
  {
  }
  void onPing()
  {
  }
  void initialize()
  {
    buttonObject.pressed(onPress);
    buttonObject.released(onRelease);
  }
}

namespace buttonR1
{
  static vex::controller::button buttonObject{Controller.ButtonR1};
  void onPress()
  {
  }
  void onRelease()
  {
  }
  void onPing()
  {
  }
  void initialize()
  {
    buttonObject.pressed(onPress);
    buttonObject.released(onRelease);
  }
}

namespace buttonR2
{
  static vex::controller::button buttonObject{Controller.ButtonR2};
  void onPress()
  {
  }
  void onRelease()
  {
  }
  void onPing()
  {
  }
  void initialize()
  {
    buttonObject.pressed(onPress);
    buttonObject.released(onRelease);
  }
}

namespace joystickRight
{
  static vex::controller::axis xAxis{Controller.Axis1};
  static vex::controller::axis yAxis{Controller.Axis2};
  void onPing()
  {
  }
}

namespace joystickLeft
{
  static vex::controller::axis xAxis{Controller.Axis3};
  static vex::controller::axis yAxis{Controller.Axis4};
  void onPing()
  {
  }
}
