// file: Airplane.cpp
// author: Ian Brown
// date: 4/4/15
// description:
//    class file for Airplane objects. Airplanes are created
//    by the Airsim.cpp based on inputted probabilities.

#include "Airplane.h"

Airplane::Airplane( int timeToCrash ) {
   this->timeToCrash = timeToCrash;
   hasCrashed == false;
}

void Airplane::decrementCrashTime() {
   if( timeToCrash == 0 ) {return;}
   else {
      timeToCrash--;

      if( timeToCrash == 0 ) {
         hasCrashed = true;
      }
   }
}

bool Airplane::getHasCrashed() {
   return hasCrashed;
}
