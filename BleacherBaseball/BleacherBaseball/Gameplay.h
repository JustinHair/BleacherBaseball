#pragma once
#include <iostream>
#include <string>

#include "PlayerInfo.h"
#include "BallparkInfo.h"
#include "GameSituation.h"

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
	
	string Get_PitchSelectionName()										const{ return PitchSelectedName; }
	int Get_PitchSelectionValue()										const{ return PitchSelectedValue; }


	~Pitching();

private:
	int PitchSelectedValue;
	string PitchSelectedName;
	int PitchLocation;
};

Pitching::Pitching()
{
	Set_PitchSelection(0, "NoneChoosen");
}

Pitching::~Pitching()
{

}

//Pitch Selection Function Declarations
int FUseablePitchTypes(Player const &PitcherUsed);
void FGatheringPitches(int const Pitch, string const PitchName, int &ArrayIndexNumber);
void FSortUseablePitches(int &ArrayIndexNumber);
void FPitchTypetoUse(int const &ArrayIndexNumber, Pitching &PitchSelected);

//Pitch location Function Declarations
void FTargetPitchLocation(GameSituation &CurrentGame);


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

//Using a temporary array to move the available pitches to the front and the 0 to the back.
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

//Picks the pitch to throw.
//It is a random chance though the better the pitch the higher the chance it has of being thrown.
void FPitchTypetoUse(int const &ArrayIndexNumber, Pitching &PitchSelected)
{
	//Local Variables
	float RandomPitch = 0;
	float PitchTotal = 0;
	int Pitch = 0;
	string PitchName = " ";

	//Get the total value of all of the available pitches.
	for (int index = 0; index < ArrayIndexNumber; index++)
	{
		PitchTotal = PitchTotal + PitchArray[index];
	}

	//Get the percentage of that pitch value from the total sum.
	for (int index = 0; index < ArrayIndexNumber; index++)
	{

		ArrayTemp[index] = 100 * (PitchArray[index] / PitchTotal);
	}

	//Generate a random number from 1-100
	RandomPitch = (rand() % 100 + 1);

	//Find the pitch to thrown.
	for (int PitchLoopIndex = 0; PitchLoopIndex < ArrayIndexNumber; PitchLoopIndex++)
	{
		//If the current element is equal to or higher than the random number then that is our pitch to throw.
		if (ArrayTemp[PitchLoopIndex] >= RandomPitch)
		{
			Pitch = PitchArray[PitchLoopIndex];
			PitchName = PitchNameArray[PitchLoopIndex];

			//Set the pitch selection to be used outside of this function.
			PitchSelected.Set_PitchSelection(Pitch, PitchName);
			break;
		}
		else
		//If the next element in the array is 0 then use the current element as the selected pitch.
		if (ArrayTemp[PitchLoopIndex + 1] == 0)
		{
			Pitch = PitchArray[PitchLoopIndex];
			PitchName = PitchNameArray[PitchLoopIndex];

			//Set the pitch selection to be used outside of this function.
			PitchSelected.Set_PitchSelection(Pitch, PitchName);
			break;
		}
	}
}


//Pitch location determination
//Pitch location descriptors:
//							In the strike zone:
//												Rows are High, Middle, and Low
//												Columns are Inside, Middle, and Away
//							Outside the strike zone: Away, Inside, High, Low
//This makes 13 locations for the pitcher to choose from.  Four are intentional ball locations.  
//Percentage of intentionally throwing out of the strike zone  = 30%
void FTargetPitchLocation(GameSituation &CurrentGame)
{
	int Ballcount = CurrentGame.Get_BallCount();
	int StikeCount = CurrentGame.Get_StrikeCount();
	int Outs = CurrentGame.Get_Outs();


	if (Ballcount == 0 && StikeCount == 0)
	{
		
	}

}

void FTargetPitchLocationGeneration()
{


}


//Batter determination of pitch type and location.
