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
#include <windows.h>	//Needed for clear screen
#include <time.h>		//Used Random Number Generator Seed
#include <stdio.h>      //Needed for NULL
#include <stdlib.h>     //Needed for Random stuff


//BleacherBaseball headers
#include "title.h"
#include "PlayerInfo.h"
#include "PlayerGeneration.h"

using namespace std;

//Defines


//Global Variables


//Structs


//*
//Functions
//
void FCreateTheBatter(Player &BatterUsed);


void main()
{
	//Declaring Variables
	Player Pitcher;
	Player Batter;
	string Name;

	//Title 
	cout << "Welcome to BleacherBaseball" << endl;
	cout << endl;

	//TitleScreen Art
	FTitleArt();

	//Pause the system and wait for input.  Then clear the screen.
	system("PAUSE");
	system("cls");

	//Create the pitcher that will be used in this basic simulation.
	FCreateThePitcher(Pitcher);

	cout << endl << Pitcher.Get_PlayerName();

	system("PAUSE");
	//Create the batter that will be used in this basic simulation.
	void FCreateTheBatter(Player BatterUsed);


	//Create pitcher
	//Create a batter

	//Pitcher chooses what pitch to throw
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