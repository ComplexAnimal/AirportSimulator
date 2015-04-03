//Include Guard
#ifndef AIRPLANE_H
#define AIRPLANE_H

class Airplane {
   private:
      int timeToCrash;
      bool hasCrashed;

   public:
      Airplane( int timeToCrash );
      void decrementCrashTime(); 
      bool getHasCrashed();
};

#endif
