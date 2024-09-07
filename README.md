# The Template
This is the empty but ready-to-use template of the robotics code. This is intended to be used when a robot needs code that it doesn't already have. This is designed to be edited and built in  _Microsoft Visual Studio Code_, with the _Vex Robotics_ extension installed to build and push the code to the robot. This is the simplified file structure for the template
```bash
VexV5VscodeTemplate
│   .gitignore
│   makefile
│   PneuirrelV2.v5code
│   
├───include
│       main.h
│       user-input.h
│       vex.h
│
├───src
│       main.cpp
│       user-input-templates.cpp
│       user-input.cpp
│
└───vex
        mkenv.mk
        mkrules.mk
```
Inside the template you will find several folders, but the one you need to worry about is labeled `src`. In `src`, you will find three files written in C++: `main.cpp`, `user-input.cpp`, and `user-input-templates.cpp`. 
# `main.cpp`
This file establishes the control flow of the robot. It tells the robot what to do when, and contains the `main()` function for the project. This is where you will write your autonomous stage code.
# `user-input.cpp`
This file is where most of the editing will be done. There are a series of namespaces for each button that looks like this:
```cpp
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
```
These namespaces are set up so that whenever their respective button is pressed, the `onPress()` function will be called once. The same will happen with `onRelease()`. Every tick, the `onPing()` function is called, for when you need to monitor something and act in response to it, like a PID Controller. You can store local variables that a specific button needs in this namespace.
# `user-input-templates.cpp`
This is a collection of commonly used button types. This has templates for empty, unused buttons, it has templates for toggling actions, acting after a delay, etc.