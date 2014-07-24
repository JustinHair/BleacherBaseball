#pragma once
#include <iostream>
#include <string>
#include <time.h>		//Used Random Number Generator Seed
#include <stdio.h>      //Needed for NULL

#include "PlayerInfo.h"
#include "BallparkInfo.h"

using namespace std;

//Global Variables
string PitchNameArray[14];
float PitchArray[14];
float ArrayTemp[14];


class Pitching
{
public:
	Pitching();
	Pitching(int PitchSelect, string PitchSelectName);

	void Set_PitchSelection(int PitchSelect, string PitchSelectName)	{ PitchSelectedValue = PitchSelect, PitchSelectedName = PitchSelectName; }
	
	string Get_PitchSelectionName()										const{ return PitchSelectedName;	}
	int Get_PitchSelectionValue()										const{ return PitchSelectedValue; }


	~Pitching();

private:
	int PitchSelectedValue;
	string PitchSelectedName;
};

Pitching::Pitching()
{
	Set_PitchSelection(0, "NoneChoosen");
}

Pitching::~Pitching()
{

}

//Function Declarations
int FUseablePitchTypes(Player const &PitcherUsed);
void FGatheringPitches(int const Pitch, string const PitchName, int &ArrayIndexNumber);
void FSortUseablePitches(int &ArrayIndexNumber);


//Pitch Selection
int FUseablePitchTypes(Player const &PitcherUsed)
{
	string PitchTypeSelected;
	int Pitch;
	int IndexArray = 0;

	Pitch = PitcherUsed.Get_PitchFourSeam();
	FGatheringPitches(Pitch, "FourSeam", IndexArray);

	Pitch = PitcherUsed.Get_PitchTwoSeam();
	FGatheringPitches(Pitch, "TwoSeam", IndexArray);

	Pitch = PitcherUsed.Get_PitchCutter();
	FGatheringPitches(Pitch, "Cutter", IndexArray);

	Pitch = PitcherUsed.Get_PitchSplitter();
	FGatheringPitches(Pitch, "Splitter", IndexArray);

	Pitch = PitcherUsed.Get_PitchForkBall();
	FGatheringPitches(Pitch, "Forkball", IndexArray);

	Pitch = PitcherUsed.Get_PitchCurveBall();
	FGatheringPitches(Pitch, "Curveball", IndexArray);

	Pitch = PitcherUsed.Get_PitchSlider();
	FGatheringPitches(Pitch, "Slider", IndexArray);

	Pitch = PitcherUsed.Get_PitchSlurve();
	FGatheringPitches(Pitch, "Slurve", IndexArray);

	Pitch = PitcherUsed.Get_PitchScrewball();
	FGatheringPitches(Pitch, "Screwball", IndexArray);

	Pitch = PitcherUsed.Get_PitchChangeUp();
	FGatheringPitches(Pitch, "ChangeUp", IndexArray);

	Pitch = PitcherUsed.Get_PitchPalmball();
	FGatheringPitches(Pitch, "PalmBall", IndexArray);

	Pitch = PitcherUsed.Get_PitchCircleChange();
	FGatheringPitches(Pitch, "CircleChange", IndexArray);

	Pitch = PitcherUsed.Get_PitchKnuckleball();
	FGatheringPitches(Pitch, "Knuckleball", IndexArray);

	//Resort the array so that the pitches are in order of lowest to highest.
	//This will help in determining what pitch to use later on.
	FSortUseablePitches(IndexArray);

	return IndexArray;
}

void FGatheringPitches(int const Pitch, string const PitchName, int &ArrayIndexNumber)
{
	if (Pitch > 0)
	{
		PitchArray[ArrayIndexNumber] = Pitch;
		PitchNameArray[ArrayIndexNumber] = PitchName;
		ArrayIndexNumber++;
	}
}

//Sorts the array that holds the pitch types and names so they are in order of smallest to higheset. 
void FSortUseablePitches(int &ArrayIndexNumber)
{
	//Temporary value holder variables
	int TempValue;
	string TempNameValue;

	//For loop that sorts the arrays.
	//The loop stops when the next array is equal to 0.
	for (int SortIndex = 0; PitchArray[SortIndex + 1] != 0; SortIndex++)
	{
		//If the current element is higher than the next element then switch the values.
		if (PitchArray[SortIndex] > PitchArray[SortIndex + 1])
		{
			TempValue = PitchArray[SortIndex];
			TempNameValue = PitchNameArray[SortIndex];
			
			//Sorting the number values
			PitchArray[SortIndex] = PitchArray[SortIndex + 1];
			PitchArray[SortIndex + 1] = TempValue;
			
			//Sorting the pitch type names.
			PitchNameArray[SortIndex] = PitchNameArray[SortIndex + 1];
			PitchNameArray[SortIndex + 1] = TempNameValue;
		}
	}

}


void FPitchTypetoUse(int const &ArrayIndexNumber, Pitching &PitchSelected)
{
	float RandomPitch = 0;
	int Pitch = 0;
	float PitchTotal = 0;
	string PitchName = " ";

	srand(time(NULL));

	for (int index = 0; index < ArrayIndexNumber; index++)
	{
		PitchTotal = PitchTotal + PitchArray[index];
	}

	for (int index = 0; index < ArrayIndexNumber; index++)
	{

		ArrayTemp[index] = 100 * (PitchArray[index] / PitchTotal);
	}

	RandomPitch = (rand() % 100 + 1);

	while (true)
	{
		int index = 0;
		if (ArrayTemp[index] >= RandomPitch)
		{
			Pitch = PitchArray[index];
			PitchName = PitchNameArray[index];

			PitchSelected.Set_PitchSelection(Pitch, PitchName);
			break;
		}
		index++;
	}


}

//Batter determination of pitch type and location.
