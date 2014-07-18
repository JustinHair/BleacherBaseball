// Baseball simulation game

#include <iostream>
#include <string>		//Needed to work with string types
#include <fstream>		//Needed to read/write to files
#include <windows.h>	//Needed for clear screen
#include <time.h>		//Used Random Number Generator Seed
#include <stdio.h>      //Needed for NULL
#include <stdlib.h>     //Needed for Random stuff


//BleacherBaseball headers
#include "title.h"

using namespace std;

//Defines
#define PITCHER_ARRAY_COUNT	20


//Declaring Variables


//Functions

//generates the pitchers attributes
int * FPitcherRandomAttributesGenerator(int PitcherArrayThatNeedsGenerating[], int ARRAYSIZE)
{
	//Generates a pitcher with Random Attributes.
	for (int PALoopIndex = 0; PALoopIndex <= ARRAYSIZE; PALoopIndex++)
	{
		//Initializing the seed for random
		srand(time(NULL));
		PitcherArrayThatNeedsGenerating[PALoopIndex] = rand() % 100;
	}

	return 0;
}
int FBatterRandomAttributesGenerator(int *BatterArray);


void main()
{
	//Declaring Variables
	int PitcherInitialAttributesArray[PITCHER_ARRAY_COUNT];
	int BatterAttributesArray[20];

	//Title 
	cout << "Welcome to BleacherBaseball" << endl;
	cout << endl;

	//TitleScreen Art
	FTitleArt();

	//Pause the system and wait for input.  Then clear the screen.
	//system("PAUSE");
	
	cout << "HelloWorld";
	//todo  Create a menu that asks the players what they want to do.
	//			Create a player or team
	//			Simulate a Game
	//			League Play ---> Start a league, continue a league, league roster management, etc.
	//			Export a roster as HTML
	//			Save and Quit BleacherBaseball

	//Create pitcher
	
	int *Pitcher = FPitcherRandomAttributesGenerator(PitcherInitialAttributesArray, PITCHER_ARRAY_COUNT);

	//Create a batter
	FBatterRandomAttributesGenerator(BatterAttributesArray);

	//Choose a pitcher
	//Choose a batter

	//Pitcher chooses what pitch to throw
	//Pitcher chooses what location



	//Batter chances on recognizing the pitch
	//Batter determines pitch location


	//Batter decides to swing or take


	//Actual pitch location vs perceived by batter
	//calculates hit or whiff



}



int FBatterRandomAttributesGenerator(int *BatterArray)
{
	//Generates a batter with Random Attributes.





	return 0;
}
