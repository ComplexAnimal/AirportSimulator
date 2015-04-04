// file: Airsim.cpp
// author: Alex Hare
// date: 4/2/15
// description:
//    holds the main function for the simulator

#include <iostream>
#include <queue>
#include "Airplane.h"
#include "BoolSource.h"
#include "Runway.h"
#include "StatKeeper.h"

using namespace std;

int main(int argc, char **argv)
{
   if (argc == 1)
   {
      cout << "Hello." << endl;
   }
   else
   {
      cout << "The number of arguments is incorrect." << endl;
      return 1;
   }

   return 0;
}

