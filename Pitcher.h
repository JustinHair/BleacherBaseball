#pragma once
#include <time.h>		//Used Random Number Generator Seed
#include <stdio.h>      //Needed for NULL
#include <stdlib.h>     //Needed for Random stuff

using namespace std;

//==========This will be the future home of generating players randomly.=============//

//Defines
#define PITCHER_ARRAY_COUNT	20

//Global Variables
int PitcherInitialAttributesArray[PITCHER_ARRAY_COUNT];

//*
//Functions
//
//generates the pitchers attributes
void FPitcherRandomAttributesGenerator(int PitcherArrayThatNeedsGenerating[], int ARRAYSIZE)
{
	//Generates a pitcher with Random Attributes.
	for (int PALoopIndex = 0; PALoopIndex <= ARRAYSIZE; PALoopIndex++)
	{
		//Initializing the seed for random
		srand(time(NULL));
		PitcherArrayThatNeedsGenerating[PALoopIndex] = (rand() % 100);
	}
}