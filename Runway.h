#ifndef RUNWAY_H
#define RUNWAY_H

class Airplane;
class BoolSource;

class Runway {
   private:
     // Queue<Airplane> landingQueue;   //Queue of planes waiting to land
     // Queue<Airplane> takeoffQueue;   //Queue of planes waiting to takeoff

   public:
      void decrementTime();
      Airplane land();
      Airplane takeoff();
};

#endif
