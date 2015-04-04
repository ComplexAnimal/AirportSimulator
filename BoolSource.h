//File: BoolSource.h
//Author: Blake Barnhill
//Updated: 04 April, 2015
//Description: BoolSource is a part of AirportSimulator. It uses
//the probability command line arguments to determine whether or
//not a plane should enter the landing queue or takeoff queue.

#ifndef BOOLSOURCE_H
#define BoolSource_H

class BoolSource
{
	private:
	int type;
	int outOfTen;

	public:
	BoolSource(int type, double prob);
	//type, either 0 or 1, will delineate
	//between a landing or takeoff BoolSource
	//object, respectively
	//The constructor will take landing or takeoff probability
	//as a double, multiply it by ten, and cast this value as
	//an int, storing it to a field called outOfTen.

	bool addToLandingQueue();
	//addToLandingQueue uses a pseudorandom number generator to create
	//a random int between 1 and 10. If this value falls between 1 and
	//outOfTen the method will return true. 

	bool addToTakeoffQueue();
	//addToTakeoffQueue works the same way as addToLandingQueue
};

#endif 
