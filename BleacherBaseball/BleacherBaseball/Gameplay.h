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
int PitchArray[14];
int ArrayTemp[14];


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

void FActualPitches(int const Pitch, string const PitchName, int &ArrayIndexNumber);

//Pitch Selection
int FPitchTypeSort(Player const &PitcherUsed)
{
	string PitchTypeSelected;
	int Pitch;
	int IndexArray = 0;

	Pitch = PitcherUsed.Get_PitchFourSeam();
	FActualPitches(Pitch, "FourSeam", IndexArray);

	Pitch = PitcherUsed.Get_PitchTwoSeam();
	FActualPitches(Pitch, "TwoSeam", IndexArray);

	Pitch = PitcherUsed.Get_PitchCutter();
	FActualPitches(Pitch, "Cutter", IndexArray);

	Pitch = PitcherUsed.Get_PitchSplitter();
	FActualPitches(Pitch, "Splitter", IndexArray);

	Pitch = PitcherUsed.Get_PitchForkBall();
	FActualPitches(Pitch, "Forkball", IndexArray);

	Pitch = PitcherUsed.Get_PitchCurveBall();
	FActualPitches(Pitch, "Curveball", IndexArray);

	Pitch = PitcherUsed.Get_PitchSlider();
	FActualPitches(Pitch, "Slider", IndexArray);

	Pitch = PitcherUsed.Get_PitchSlurve();
	FActualPitches(Pitch, "Slurve", IndexArray);

	Pitch = PitcherUsed.Get_PitchScrewball();
	FActualPitches(Pitch, "Screwball", IndexArray);

	Pitch = PitcherUsed.Get_PitchChangeUp();
	FActualPitches(Pitch, "ChangeUp", IndexArray);

	Pitch = PitcherUsed.Get_PitchPalmball();
	FActualPitches(Pitch, "PalmBall", IndexArray);

	Pitch = PitcherUsed.Get_PitchCircleChange();
	FActualPitches(Pitch, "CircleChange", IndexArray);

	Pitch = PitcherUsed.Get_PitchKnuckleball();
	FActualPitches(Pitch, "Knuckleball", IndexArray);

	return IndexArray;
}

void FActualPitches(int const Pitch, string const PitchName, int &ArrayIndexNumber)
{
	if (Pitch > 0)
	{
		PitchArray[ArrayIndexNumber] = Pitch;
		PitchNameArray[ArrayIndexNumber] = PitchName;
		ArrayIndexNumber++;
	}
}


void FPitchTypetoUse(int const &ArrayIndexNumber, Pitching &PitchSelected)
{
	int RandomPitch = 0;
	int Pitch = 0;
	int PitchTotal = 0;
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
