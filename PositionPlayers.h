#pragma once
#include <iostream>
#include <string>

using namespace std;

//Batter Class
class PositionPlayer
{
public:
	PositionPlayer();


	//PositionPlayer Deconstructor
	~PositionPlayer();

private:
	//Player Names and Team Name
	string PlayerName;
	string TeamName;

	//Player hitting attributes
	int BattersEye;				// How easily the batter can determine the pitch type and location.
	int Timing;					//
	int Contact;
	int Power;
	int BuntingSkill;

	//Speed - Used for running the bases and fielding.
	int Speed;

	//Fielding
	int ArmStrenght;
	int ArmAccuracy;
	int FieldRange;
	int GloveWork;

};

PositionPlayer::PositionPlayer()
{
}

PositionPlayer::~PositionPlayer()
{
}
