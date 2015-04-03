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
