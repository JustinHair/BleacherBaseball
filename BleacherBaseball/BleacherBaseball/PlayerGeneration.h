#include <iostream>
#include <string>		//Needed to work with string types

#include "PlayerInfo.h"

void FCreateThePitcher(Player &PitcherUsed)
{
	string temp1;
	int temp2;

	cout << "Let's generate a pitcher for our baseball simulation." << endl;
	cout << "\n Pitcher Name: ";
	cin >> temp1;
	PitcherUsed.Set_PlayerName(temp1);

	cout << "\n Pitcher Team: ";
	cin >> temp1;
	PitcherUsed.Set_TeamName(temp1);

	cout << "\n Pitcher's throwing hand (R = Right, L = Left):";
	cin >> temp1;
	PitcherUsed.Set_ThrowingArm(temp1);

	cout << "\n Pitchers control (enter a value between 1 - 100): ";
	cin >> temp2;
	PitcherUsed.Set_PitcherAimAccuracy(temp2);

	cout << "\n Pitchers fastest speed (MPH) for throwing a pitch: ";
	cin >> temp2;
	PitcherUsed.Set_PitcherPitchSpeed(temp2);

	cout << "\n How good is the pitcher at fooling the batter (1 - 100): ";
	cin >> temp2;
	PitcherUsed.Set_PitcherDecietfullness(temp2);

	cout << "\n The number of innings can this pitcher throw (1 - 10): " << endl;
	cin >> temp2;
	PitcherUsed.Set_PitcherStamina(temp2);

	cout << "\n Now we'll rate the pitches." << "\n Value will be (1 - 100)" << "\n Enter a 0 if that pitcher doesn't use that pitch." << endl;

	cout << "\n Four Seam Fastball: ";
	cin >> temp2;
	PitcherUsed.Set_PitchFourSeam(temp2);

	cout << "\n Two Seam Fastball: ";
	cin >> temp2;
	PitcherUsed.Set_PitchTwoSeam(temp2);

	cout << "\n Cutter: ";
	cin >> temp2;
	PitcherUsed.Set_PitchCutter(temp2);
}