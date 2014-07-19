#pragma once
#include <iostream>
#include <string>

using namespace std;

//Baseball player Class
class Player
{
public:
	Player();

	 

	//PositionPlayer Deconstructor
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

	//Fielding
	int ArmStrenght;
	int ArmAccuracy;
	int Range;
	int GloveWork;



};

Player::Player()
{
}

Player::~Player()
{
}
