// file: Runway.h
// author: Ian Brown
// date: 4/4/15
// description:
//    header file for Runway class. Predefines the variables
//    and functions used in Runway.cpp.

#ifndef RUNWAY_H
#define RUNWAY_H

class Airplane;
class BoolSource;

class Runway {
   public:
      //No constructor at this time as there was nothing to put within
      //it and the compiler gives an error for implicitly stated 
      //constructors
      void decrementTime();
      Airplane land();
      Airplane takeoff();
};

#endif
