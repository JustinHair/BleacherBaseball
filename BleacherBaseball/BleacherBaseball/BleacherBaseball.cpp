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

//BleacherBaseball headers
#include "title.h"
#include "PlayerInfo.h"
#include "PlayerGeneration.h"
#include "BallparkInfo.h"
#include "Gameplay.h"
#include "GameSituation.h"
#include "BBLogging.h"

using namespace std;

//*
//Functions
//

void main()
{
	//Declaring Game Unique Variables
	Player Pitcher;
	Player Batter;
	Pitching SelectedPitches;
	BallPark BallDiamond;
	GameSituation GameSitrep;

	//Declaring Variable names for writing to a file
	ofstream FILEGameDayLog;
	int Loggingcount = 1;

	//Decalaring Variables
	bool bPlaying = true;
	int PitchCount = 0;
	int hits = 0;
	bool bSwing = false;
	int PitchTypeUsedIndex = 0;
	string YesNoChoice;

	//Title 
	cout << "Welcome to BleacherBaseball" << endl;
	cout << endl;
	FBBLogging("Title: Welcome to BleacherBaseball", Loggingcount);

	//TitleScreen Art
	FTitleArt();

	//Pause the system and wait for input.  Then clear the screen.
	system("PAUSE");
	system("cls");

	cout << "Do you want to create the players? (Y or N): ";
	cin >> YesNoChoice;
	if (YesNoChoice == "Y" || YesNoChoice == "y")
	{
		FBBLogging("Player elected to create a pitcher and batter", Loggingcount);

		//Create the pitcher that will be used in this basic simulation.
		FCreateThePitcher(Pitcher);

		//Create the batter that will be used in this basic simulation.
		FCreateTheBatter(Batter);

	}
	
	//Logging
	if (YesNoChoice != "Y" || YesNoChoice != "y")
	{
		FBBLogging("Player elected to NOT to create a pitcher and batter", Loggingcount);
	}

	cout << "Today's game will be " << Pitcher.Get_PlayerName() << " versus " << Batter.Get_PlayerName() << "." << endl;


	//Pitcher chooses what pitch to throw and where to throw it.
	for (int i = 0; i < 1000; i++)
	{
		FUseablePitchTypes(Pitcher, SelectedPitches, GameSitrep);
		
	}
	
	system("PAUSE");

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