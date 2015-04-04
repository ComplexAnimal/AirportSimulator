//File: StatKeeper.h
//Author: Blake Barnhill
//Updated: 04 April, 2015
//Description: StatKeeper is part of AirportSimulator
//Throughout simulation duration, StatKeeper keeps track
//of landings, takeoffs, crashes, and wait times

#ifndef STATKEEPER_H
#define StatKeeper_H

#include <string>

using namespace std;

class StatKeeper
{
	private:
	int totalTime;
	int numberOfCrashes;
	int numberOfTakeoffs;
	int numberOfLandings;
	int takeoffTimes[];
	int landingTimes[];

	public:
	StatKeeper(int simTime);
	//Constructor sets length of takeoffTimes and landingTimes
	//to simTime (the number of total minutes the simulation
	//will run) as this is the maximum possible number of
	//planes that could takeoff or land.

	void incrementCrashes();

	void incrementTakeoffs();

	void incrementLandings();

	void addTakeoffTime(int time);

	void addLandingTime(int time);

	string print();
};

#endif 
