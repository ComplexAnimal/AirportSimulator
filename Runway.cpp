// file: Runway.cpp
// author: Ian Brown
// date: 4/4/15
// description:
//    class file for Runway objects. Handles the removing of
//    Airplane objects from the landing and takeoff queues and
//    the decrementing of the program time.

#include "Runway.h"
#include "Airplane.h"

void Runway::decrementTime() {
}

Airplane Runway::land() {
   Airplane test(42);
   return test;
}

Airplane Runway::takeoff() {
   Airplane test2(20);
   return test2;
}
