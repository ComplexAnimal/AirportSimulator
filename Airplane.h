// file: Airplane.h
// author: Ian Brown
// date: 4/4/15
// description:
//    header file for Airplane class. Predefines variables and
//    functions used in the Airplane class

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
