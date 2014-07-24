//   ______     __                            __                           ______                             __                 __    __   
//  |_   _ \   [  |                          [  |                         |_   _ \                           [  |               [  |  [  |  
//    | |_) |   | |   .---.   ,--.    .---.   | |--.    .---.   _ .--.      | |_) |   ,--.    .--.    .---.   | |.--.    ,--.    | |   | |  
//    |  __'.   | |  / /__\\ `'_\ :  / /'`\]  | .-. |  / /__\\ [ `/'`\]     |  __'.  `'_\ :  ( (`\]  / /__\\  | '/'`\ \ `'_\ :   | |   | |  
//   _| |__) |  | |  | \__., // | |, | \__.   | | | |  | \__.,  | |        _| |__) | // | |,  `'.'.  | \__.,  |  \__/ | // | |,  | |   | |  
//  |_______/  [___]  '.__.' \'-;__/ '.___.' [___]|__]  '.__.' [___]      |_______/  \'-;__/ [\__) )  '.__.' [__;.__.'  \'-;__/ [___] [___] 
//  

#include <iostream>
#include <string>		//Needed to work with string types
#include <fstream>		//Needed to read/write to files
#include <time.h>		//Used Random Number Generator Seed
#include <stdio.h>      //Needed for NULL
#include <stdlib.h>     //Needed for Random stuff


//BleacherBaseball headers
#include "title.h"
#include "PlayerInfo.h"
#include "PlayerGeneration.h"
#include "BallparkInfo.h"
#include "Gameplay.h"

using namespace std;

//*
//Functions
//

void main()
{
	//Declaring Variables
	Player Pitcher;
	Player Batter;
	Pitching SelectedPitches;
	BallPark BallDiamond;

	bool bPlaying = true;
	int PitchCount = 0;
	int Strikes = 0;
	int Balls = 0;
	int Outs = 0;
	int hits = 0;
	bool bSwing = false;
	int PitchTypeUsedIndex = 0;
	string YesNoChoice;

	//Title 
	cout << "Welcome to BleacherBaseball" << endl;
	cout << endl;

	//TitleScreen Art
	FTitleArt();

	//Pause the system and wait for input.  Then clear the screen.
	system("PAUSE");
	system("cls");

	cout << "Do you want to create the players? (Y or N): ";
	cin >> YesNoChoice;
	if (YesNoChoice == "Y" || YesNoChoice == "y")
	{
		//Create the pitcher that will be used in this basic simulation.
		FCreateThePitcher(Pitcher);

		//Create the batter that will be used in this basic simulation.
		FCreateTheBatter(Batter);
	}
	

	cout << "Today's game will be " << Pitcher.Get_PlayerName() << " versus " << Batter.Get_PlayerName() << "." << endl;

	
		//Pitcher chooses what pitch to throw
	PitchTypeUsedIndex = FUseablePitchTypes(Pitcher);

	for (int i = 0; i <= 100; i++)
	{
		FPitchTypetoUse(PitchTypeUsedIndex, SelectedPitches);
		cout << SelectedPitches.Get_PitchSelectionName() << " with a value of " << SelectedPitches.Get_PitchSelectionValue() << endl;
	}

	system("PAUSE");
		//Pitcher chooses what location



		//Batter chances on recognizing the pitch
		//Batter determines pitch location


		//Batter decides to swing or take


		//Actual pitch location vs perceived by batter
		//calculates hit or whiff





}

//todo  Create a menu that asks the players what they want to do.
//			Create a player or team
//			Simulate a Game
//			League Play ---> Start a league, continue a league, league roster management, etc.
//			Export a roster as HTML
//			Save and Quit BleacherBaseball


//todo Create a function that does tolower and toupper.