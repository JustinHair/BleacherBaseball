#pragma once
#include <iostream>
#include <string>

using namespace std;


//Ballpark Class
//The ballpark gives the dimensions of the field and it's properties.  Each team's ballpark is different somehow from one another.
//
class BallPark
{
public:
	//Ballpark Constructor
	BallPark();

	//Set the variable for the specified variable.
	void Set_All(string BPName, string BPLocation, int BPAge, string FoulSize, int BPLeftField, int BPLeftCenter, int BPCenterField, int BPRightCenter, int BPRightField, int WHLeftField, int WHLeftCenterField, int WHCenterField, int WHRightCenterField, int WHRightField)
	{	BallParkName = BPName, BallParkLocation = BPLocation, BallParkAge = BPAge, FoulTerritorySize = FoulSize, LeftField = BPLeftField, LeftCenter = BPLeftField, CenterField = BPCenterField, RightCenter = BPRightCenter, RightField = BPRightField, WallHeightLeftField = WHLeftField, WallHeightLeftCenter = WHLeftCenterField, WallHeightCenterField = WHCenterField, WallHeightRightCenter = WHRightCenterField, WallHeightRightField = WHRightField; }
	void Set_BallParkName(string BPName)							{ BallParkName = BPName; }
	void Set_BallParkLocation(string BPLocation)					{ BallParkLocation = BPLocation; }
	void Set_BallParkAge(int BPAge)									{ BallParkAge = BPAge; }
	void Set_FoulTerritorySize(string BPFoulSize)					{ FoulTerritorySize = BPFoulSize; }
	void Set_DimensionLeftField(int BPLeftField)					{ LeftField = BPLeftField; }
	void Set_DimensionLeftCenterField(int BPLeftCenter)				{ LeftCenter = BPLeftCenter; }
	void Set_DimensionCenterField(int BPCenterField)				{ CenterField = BPCenterField; }
	void Set_DimensionRightCenterField(int BPRightCenter)			{ RightCenter = BPRightCenter; }
	void Set_DimensionRightField(int BPRightField)					{ RightField = BPRightField; }
	void Set_WallHeightLeftField(int WHLeftField)					{ WallHeightLeftField = WHLeftField; }
	void Set_WallHeightLeftCenterField(int WHLeftCenter)			{ WallHeightLeftCenter = WHLeftCenter; }
	void Set_WallHeightCenterField(int WHCenterField)				{ WallHeightCenterField = WHCenterField; }
	void Set_WallHeightRightCenterField(int WHRightCenter)			{ WallHeightRightCenter = WHRightCenter; }
	void Set_WallHeightRightField(int WHRightField)					{ WallHeightRightField = WHRightField; }

	//Ballpark Deconstructor
	~BallPark();

private:
	//Basic Ballpark info variables
	string BallParkName;			//Name of the stadium/playing field where the team plays.
	string BallParkLocation;		//Location of the field
	int BallParkAge;				//The age of the ballpark/stadium
	
	//How big is the foul territory? (Small, Medium, Large)
	//Small fields are friendlier to hitters.  This is because it is easier to have a ball land in the stands.
	//Large fields are pitcher friendly.  This is because there is more room in the foul territory to make a play.
	string FoulTerritorySize;		

	//Field dimensions in feet
	int LeftField;					//How far it is to the left field wall down the foul line.
	int LeftCenter;					//How far it is to the wall between left and center field.
	int CenterField;				//How far it is to dead center.
	int RightCenter;				//How far it is to the wall between right and center field.
	int RightField;					//How far it to to the right field wall down the foul line.


	//Wall height in feet
	int WallHeightLeftField;		//Height of the wall in left field.
	int WallHeightLeftCenter;		//Height of the wall in left center field.  
	int WallHeightCenterField;		//Height of the wall in center field.
	int WallHeightRightCenter;		//Height of the wall in right center field.
	int WallHeightRightField;		//Height of the wall in right field.

};


BallPark::BallPark()
{
	Set_All("Generic Stadium", "Generic Town", 1, "Medium", 330, 360, 405, 360, 330, 6, 6, 6, 6, 6);
}

BallPark::~BallPark()
{
}