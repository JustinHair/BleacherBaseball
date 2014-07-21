#pragma once
#include <iostream>
#include <string>

using namespace std;

//Baseball player Class
class Player
{
public:
	Player();

	//Set Functions - All
	//
	//These functions set the values for the specified set of General, Fielding, Batting, and Pitching attributes..
	void Set_BasicPlayerInfo(string Name, string Team, string Arm, string Bat, string Pos, int PlayAge)
	{ PlayerName = Name; TeamName = Team; Throws = Arm; BatHand = Bat; Position = Pos; PlayerAge = PlayAge;	}

	void Set_Batting(int BBattersEye, int BTiming, int BContact, int BPower, int BBuntingSkill, int BGroundBall, int BFlyBall, int BLineDrive, int BSpeed)
	{ BattersEye = BBattersEye; Timing = BTiming; Contact = BContact; Power = BPower; BuntingSkill = BBuntingSkill; TendencyGroundball = BGroundBall; TendencyFlyball = BFlyBall; TendencyLinedrive = BLineDrive; Speed = BSpeed; }

	void Set_Fielding(int FArmStrength, int FArmAccuracy, int FRange, int FGloveWork, int FSpeed)
	{ ArmStrength = FArmStrength; ArmAccuracy = FArmAccuracy; Range = FRange; GloveWork = FGloveWork; Speed = FSpeed; }

	void Set_Pitching(int PAimAccuracy, int PPitchSpeed, int PDeciet, int PStamina, int PStealable, int PFourSeam, int PTwoSeam, int PCutter, int PSplitter, int PForkball, int PCurveball, int PSlider, int PSlurve, int PScrewball, int PChangeup, int PPalmball, int PCircleChange, int PKnuckleball)
	{ AimAccuracy = PAimAccuracy; PitchSpeed = PPitchSpeed; Decietfullness = PDeciet; Stamina = PStamina; Stealable = PStealable; FourSeam = PFourSeam; TwoSeam = PTwoSeam; Cutter = PCutter; Splitter = PSplitter; Forkball = PForkball; Curveball = PCurveball; Slider = PSlider; Slurve = PSlurve; Screwball = PScrewball; Changeup = PChangeup; Palmball = PPalmball; CircleChange = PCircleChange; Knuckleball = PKnuckleball;	}

	void Set_All(string Name, string Team, string Arm, string Bat, string Pos, int PlayAge, int BBattersEye, int BTiming, int BContact, int BPower, int BBuntingSkill, int BGroundBall, int BFlyBall, int BLineDrive, int BSpeed, int FArmStrength, int FArmAccuracy, int FRange, int FGloveWork, int PAimAccuracy, int PPitchSpeed, int PDeciet, int PStamina, int PStealable, int PFourSeam, int PTwoSeam, int PCutter, int PSplitter, int PForkball, int PCurveball, int PSlider, int PSlurve, int PScrewball, int PChangeup, int PPalmball, int PCircleChange, int PKnuckleball, int Hard)
	{ PlayerName = Name; TeamName = Team; Throws = Arm; BatHand = Bat; Position = Pos; PlayerAge = PlayAge; BattersEye = BBattersEye; Timing = BTiming; Contact = BContact; Power = BPower; BuntingSkill = BBuntingSkill; TendencyGroundball = BGroundBall; TendencyFlyball = BFlyBall; TendencyLinedrive = BLineDrive; Speed = BSpeed; ArmStrength = FArmStrength; ArmAccuracy = FArmAccuracy; Range = FRange; GloveWork = FGloveWork; AimAccuracy = PAimAccuracy; PitchSpeed = PPitchSpeed; Decietfullness = PDeciet; Stamina = PStamina; Stealable = PStealable; FourSeam = PFourSeam; TwoSeam = PTwoSeam; Cutter = PCutter; Splitter = PSplitter; Forkball = PForkball; Curveball = PCurveball; Slider = PSlider; Slurve = PSlurve; Screwball = PScrewball; Changeup = PChangeup; Palmball = PPalmball; CircleChange = PCircleChange; Knuckleball = PKnuckleball; Hardiness = Hard; }


	//Set Functions - Single
	//
	//These functions set the values for a specified attribute.
	void Set_PlayerName(string Name)													{ PlayerName = Name; }
	void Set_TeamName(string Team)														{ TeamName = Team; }
	void Set_ThrowingArm(string Arm)													{ Throws = Arm; }
	void Set_BatterSide(string BatSide)													{ BatHand = BatSide; }
	void Set_Position(string Pos)														{ Position = Pos; }
	void Set_Age(int Age)																{ PlayerAge = Age; }
	void Set_BatterBattersEye(int BEye)													{ BattersEye = BEye; }
	void Set_BatterTiming(int BTime)													{ Timing = BTime; }
	void Set_BatterContact(int BContact)												{ Contact = BContact; }
	void Set_BatterPower(int BPower)													{ Power = BPower; }
	void Set_BatterBuntingSkill(int BBuntingSkill)										{ BuntingSkill = BBuntingSkill; }
	void Set_BatterGroundBallTendency(int BTendencyGroundBall)							{ TendencyGroundball = BTendencyGroundBall; }
	void Set_BatterFlyBallTendency(int BTendencyFlyball)								{ TendencyFlyball = BTendencyFlyball; }
	void Set_BatterLineDriveTendecny(int BTendencyLinedrive)							{ TendencyLinedrive = BTendencyLinedrive; }
	void Set_Speed(int BSpeed)															{ Speed = BSpeed; }
	void Set_Hardiness(int Hard)														{ Hardiness = Hard; }
	void Set_FieldingArmStrength(int FArmStrength)										{ ArmStrength = FArmStrength; }
	void Set_FieldingRange(int FRange)													{ Range = FRange; }
	void Set_FieldingGloveWork(int FGloveWork)											{ GloveWork = FGloveWork; }
	void Set_PitcherAimAccuracy(int PAimAccuracy)										{ AimAccuracy = PAimAccuracy; }
	void Set_PitcherPitchSpeed(int PPitchSpeed)											{ PitchSpeed = PPitchSpeed; }
	void Set_PitcherDecietfullness(int PDeciet)											{ Decietfullness = PDeciet; }
	void Set_PitcherStamina(int PStamina)												{ Stamina = PStamina; }
	void Set_PitcherStealable(int PStealable)											{ Stealable = PStealable; }
	void Set_PitchFourSeam(int PFourSeam)												{ FourSeam = PFourSeam; }
	void Set_PitchTwoSeam(int PTwoSeam)													{ TwoSeam = PTwoSeam; }
	void Set_PitchCutter(int PCutter)													{ Cutter = PCutter; }
	void Set_PitchSplitter(int PSplitter)												{ Splitter = PSplitter; }
	void Set_PitchForkball(int PForkball)												{ Forkball = PForkball; }
	void Set_PitchCurveball(int PCurveball)												{ Curveball = PCurveball; }
	void Set_PitchSlider(int PSlider)													{ Slider = PSlider; }
	void Set_PitchSlurve(int PSlurve)													{ Slurve = PSlurve; }
	void Set_PitchScrewball(int PScrewball)												{ Screwball = PScrewball; }
	void Set_PitchChangeup(int PChangeup)												{ Changeup = PChangeup; }
	void Set_PitchPalmball(int PPalmball)												{ Palmball = PPalmball; }
	void Set_PitchCircleChange(int PCircleChange)										{ CircleChange = PCircleChange; }
	void Set_PitchKnuckleball(int PKnuckleball)											{ Knuckleball = PKnuckleball; }

	//Get Functions - All


	//Get Functions - Single
	//
	//Returns the value for the specified attribute.
	string Get_PlayerName()																const{ return PlayerName; }
	string Get_TeamName()																const{ return TeamName; }
	string Get_ThrowingArm()															const{ return Throws; }
	string Get_BatterSide()																const{ return BatHand; }
	string Get_Position()																const{ return Position; }
	int Get_PositionID()																const{ return PositinID; }
	int Get_Age()																		const{ return PlayerAge; }
	int Get_BatterBattersEye()															const{ return BattersEye; }
	int Get_BatterTiming()																const{ return Timing; }
	int Get_BatterContact()																const{ return Contact; }
	int Get_BatterPower()																const{ return Power; }
	int Get_BatterBuntingSkill()														const{ return BuntingSkill; }
	int Get_BatterGroundBallTendency()													const{ return TendencyGroundball; }
	int Get_BatterFlyballTendency()														const{ return TendencyFlyball; }
	int Get_BatterLineDriveTendency()													const{ return TendencyLinedrive; }
	int Get_Speed()																		const{ return Speed; }
	int Get_Hardiness()																	const{ return Hardiness; }
	int Get_FieldingArmStrength()														const{ return ArmStrength; }
	int Get_FieldingRange()																const{ return Range; }
	int Get_FieldingGloveWork()															const{ return GloveWork; }
	int Get_PitcherAimAccuracy()														const{ return AimAccuracy;}
	int Get_PitcherPitchSpeed()															const{ return PitchSpeed; }
	int Get_PitcherDecietfullness()														const{ return Decietfullness; }
	int Get_PitcherStamina()															const{ return Stamina; }
	int Get_PitcherStealable()															const{ return Stealable; }
	int Get_PitchFourSeam()																const{ return FourSeam; }
	int Get_PitchTwoSeam()																const{ return TwoSeam; }
	int Get_PitchCutter()																const{ return Cutter; }
	int Get_PitchSplitter()																const{ return Splitter; }
	int Get_PitchForkBall()																const{ return Forkball; }
	int Get_PitchCurveBall()															const{ return Curveball; }
	int Get_PitchSlider()																const{ return Slider; }
	int Get_PitchSlurve()																const{ return Slurve; }
	int Get_PitchScrewball()															const{ return Screwball; }
	int Get_PitchChangeUp()																const{ return Changeup; }
	int Get_PitchPalmball()																const{ return Palmball; }
	int Get_PitchCircleChange()															const{ return CircleChange; }
	int Get_PitchKnuckleball()															const{ return Knuckleball; }

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
	int PositinID;				// 1 - 9 & 0 for DH

	//The players age.
	int PlayerAge;

	//Player hitting attributes
	int BattersEye;				// How easily the batter can determine the pitch type and location.
	int Timing;					// Determines if the player hits the as well as to what part of the field, and fair or foul.
	int Contact;				// How well does the player make contact
	int Power;					// Potentially how fare the ball will travel.  Possibly rename to "Drive"

	int BuntingSkill;			// How well the player bunts.

	int TendencyGroundball;		// How likely is the player going to hit a ground ball, line drive, or a fly ball.  
	int TendencyFlyball;		// How likely is the player going to hit a ground ball, line drive, or a fly ball.  
	int TendencyLinedrive;		// How likely is the player going to hit a ground ball, line drive, or a fly ball.  

	//Speed - Used for running the bases and fielding.
	int Speed;

	//Misc
	int Hardiness;				//Injury frequency.  The higher the number the least likely the player is going to get hurt.

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
	int Stamina;				//How long can the pitcher pitch before being completely tired.
	
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
Set_All("Generic Player", "Generic Team", "R", "R", "RF", 21, 50, 50, 50, 50, 50, 34, 33, 33, 50, 50, 50, 50, 50, 50, 75, 50, 50, 50, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50);
}
Player::~Player()
{
}
