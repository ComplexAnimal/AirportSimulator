//File: StatKeeper.cpp
//Author: Blake Barnhill
//Updated: 4 April, 2015
//Description: StatKeeper is part of AirportSimulator
//Throughout simulation duration, StatKeeper keeps track
//of landings, takeoffs, crashes, and wait times

#include "StatKeeper.h"
#include <string>

using namespace std;

	StatKeeper::StatKeeper(int simTime){}

	void StatKeeper::incrementCrashes(){}

	void StatKeeper::incrementTakeoffs(){}

	void StatKeeper::incrementLandings(){}

	void StatKeeper::addTakeoffTime(int time){}
	
	void StatKeeper::addLandingTime(int time){}

	string StatKeeper::print()
	{
		string output = "hello";
		return output;
	}
