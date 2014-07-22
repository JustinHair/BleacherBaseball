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

	cout << "\n The number of innings can this pitcher throw (1 - 10): "; /////GET RID OF ENDL
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

	cout << "\n Splitter: ";
	cin >> temp2;
	PitcherUsed.Set_PitchSplitter(temp2);

	cout << "\n Forkball: ";
	cin >> temp2;
	PitcherUsed.Set_PitchForkball(temp2);

	cout << "\n Curveball: ";
	cin >> temp2;
	PitcherUsed.Set_PitchCurveball(temp2);

	cout << "\n Slider: ";
	cin >> temp2;
	PitcherUsed.Set_PitchSlider(temp2);

	cout << "\n Slurve: ";
	cin >> temp2;
	PitcherUsed.Set_PitchSlurve(temp2);       ////////ENtered ? here and it skipped the rest

	cout << "\n Screwball: ";
	cin >> temp2;
	PitcherUsed.Set_PitchScrewball (temp2);

	cout << "\n Changeup: ";
	cin >> temp2;
	PitcherUsed.Set_PitchChangeup(temp2);

	cout << "\n Palmball: ";
	cin >> temp2;
	PitcherUsed.Set_PitchPalmball(temp2);

	cout << "\n CircleChange: ";
	cin >> temp2;
	PitcherUsed.Set_PitchCircleChange (temp2);

	cout << "\n Kunckleball: ";
	cin >> temp2;
	PitcherUsed.Set_PitchKnuckleball(temp2);

	system("PAUSE");
	system("cls");
}


void FCreateTheBatter(Player &BatterUsed)
{
	string temp1;
	int temp2;
	int GroundBallTendency;
	int FlyBallTendency;

	cout << "Let's generate a batter for our baseball simulation." << endl;
	
	cout << "\n Batter Name: ";
	cin >> temp1;
	BatterUsed.Set_PlayerName(temp1);

	cout << "\n Batter Team: ";
	cin >> temp1;
	BatterUsed.Set_TeamName(temp1);

	cout << "\n Batter Right handed or Left handed (R = Right, L = Left): ";
	cin >> temp1;
	BatterUsed.Set_BatterSide(temp1);

	cout << "\n Batters ability to determine the pitch type and location: (enter a value from 1-100) ";
	cin >> temp2;
	BatterUsed.Set_BatterBattersEye(temp2);

	cout << "\n Batters swing timing: (enter a value from 1-100) ";
	cin >> temp2;
	BatterUsed.Set_BatterTiming(temp2);

	cout << "\n Batters Contact: (enter a value from 1-100) ";
	cin >> temp2;
	BatterUsed.Set_BatterContact(temp2);

	cout << "\n Batters Power and ability to drive the ball. \n How far can your player hit the ball, in feet, unopposed.(enter a value) ";
	cin >> temp2;
	BatterUsed.Set_BatterPower(temp2);

	cout << "\n Batters Bunting ability: (enter a value from 1-100) ";
	cin >> temp2;
	BatterUsed.Set_BatterBuntingSkill(temp2);

	cout << "\n Now we'll need to determine how often the batter will hit a line drive, ground ball, or a fly ball." << "\n The cumulative points for these three attributes need to add to 100.";

	cout << "\n Batters Ground ball tendency: ";
	cin >> GroundBallTendency;
	BatterUsed.Set_BatterGroundBallTendency(temp2);

	cout << "\n Batters Fly ball tendency: ";
	cin >> FlyBallTendency;
	BatterUsed.Set_BatterFlyBallTendency(temp2);

	if ((GroundBallTendency + FlyBallTendency) >= 100)
	{
		BatterUsed.Set_BatterLineDriveTendecny(0);
	}
	else
	{
		temp2 = 100 - (GroundBallTendency + FlyBallTendency);
		BatterUsed.Set_BatterLineDriveTendecny(temp2);
	}

	system("PAUSE");
	system("cls");
}