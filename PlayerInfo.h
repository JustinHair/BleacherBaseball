#pragma once
#include <iostream>
#include <string>

using namespace std;

//Baseball player Class
class Player
{
public:
	Player();//{ Set_All("Generic Player", "Generic Team", "R", "R", "RF", 32, 50, 50, 50, 50, 50, 34, 33, 33, 50, 50, 50, 50, 50, 50, 75, 50, 50, 50, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50); }


	//Set Functions - All
	void Set_BasicPlayerInfo(string Name, string Team, string Arm, string Bat, string Pos, int PlayAge)
		{PlayerName = Name; TeamName = Team; Throws = Arm; BatHand = Bat; Position = Pos; PlayerAge = PlayAge;}

	void Set_Batting(int BBattersEye, int BTiming, int BContact, int BPower, int BBuntingSkill, int BGroundBall, int BFlyBall, int BLineDrive, int BSpeed)
		{BattersEye = BBattersEye; Timing = BTiming; Contact = BContact; Power = BPower; BuntingSkill = BBuntingSkill; TendencyGroundball = BGroundBall; TendencyFlyball = BFlyBall; TendencyLinedrive = BLineDrive; Speed = BSpeed;	}

	void Set_Fielding(int FArmStrength, int FArmAccuracy, int FRange, int FGloveWork, int FSpeed)
		{ArmStrength = FArmStrength; ArmAccuracy = FArmAccuracy; Range = FRange; GloveWork = FGloveWork; Speed = FSpeed;}

	void Set_Pitching(int PAimAccuracy, int PPitchSpeed, int PDeciet, int PStamina, int PStealable, int PFourSeam, int PTwoSeam, int PCutter, int PSplitter, int PForkball, int PCurveball, int PSlider, int PSlurve, int PScrewball, int PChangeup, int PPalmball, int PCircleChange, int PKnuckleball);
	
	
	void Set_All(string Name, string Team, string Arm, string Bat, string Position, int PlayerAge, int BBattersEye, int BTiming, int BContact, int BPower, int BBuntingSkill, int BGroundBall, int BFlyBall, int BLineDrive, int BSpeedint, int FArmStrength, int FArmAccuracy, int FRange, int FGloveWork, int PAimAccuracy, int PPitchSpeed, int PDeciet, int PStamina, int PStealable, int PFourSeam, int PTwoSeam, int PCutter, int PSplitter, int PForkball, int PCurveball, int PSlider, int PSlurve, int PScrewball, int PChangeup, int PPalmball, int PCircleChange, int PKnuckleball, int Hard);

	//Set Functions - Single
	void Set_PlayerName(string Name){ PlayerName = Name;}
	void Set_PitcherAimAccuracy(int PAimAccuracy){ AimAccuracy = PAimAccuracy;}


	//Get Functions - Single
	string Get_PlayerName() const{ return PlayerName; }
	int Get_PitcherAimAccuracy() const{return AimAccuracy;}

	//Player Deconstructor
	~Player();

private:
	//Player Names and Team Name
	string PlayerName;
	string TeamName;
	string Throws;				// Left or Right
	string BatHand;				// Left, Right, or Switch

	//Position
	string Position;
	int PositinID;				// 1 - 9 + 0 for DH

	//The players age.
	int PlayerAge;

	//Player hitting attributes
	int BattersEye;				// How easily the batter can determine the pitch type and location.
	int Timing;					// Determines if the player hits the as well as to what part of the field, and fair or foul.
	int Contact;				// How well does the player make contact
	int Power;					// Possibly rename to "Drive"

	int BuntingSkill;			// How well the player bunts.

	int TendencyGroundball;		// How likely is the player going to hit a groundball, linedrive, or a flyball.  
	int TendencyFlyball;		// How likely is the player going to hit a groundball, linedrive, or a flyball.  
	int TendencyLinedrive;		// How likely is the player going to hit a groundball, linedrive, or a flyball.  

	//Speed - Used for running the bases and fielding.
	int Speed;

	//Misc
	int Hardiness;				//Injury frequency

	//Fielding
	int ArmStrength;
	int ArmAccuracy;
	int Range;
	int GloveWork;

	//========
	//Pitcher Attributes
	//========
	int AimAccuracy; 
	int PitchSpeed;
	int Decietfullness;			//How often the pitcher fools the batters.  Things of removing this.
	int Stamina;				//How long can the pitcher pitch before being completly tired.
	
	//Misc.
	int Stealable;				//How easily can the pitcher be stolen off of.
	
	//Pitches
	int FourSeam;
	int TwoSeam;
	int Cutter;
	int Splitter;
	int Forkball;
	int Curveball;
	int Slider;
	int Slurve;
	int Screwball;
	int Changeup;
	int Palmball;
	int CircleChange;
	int Knuckleball;
	
};
Player::Player()
{
}
Player::~Player()
{
}
