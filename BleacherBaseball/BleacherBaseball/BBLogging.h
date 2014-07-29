#include <iostream>
#include <fstream>
#include <string>




//Function declaration
void FBBLogging(string DescriptiveLogging, int OrderIHappen);


void FBBLogging(string DescriptiveLogging, int &OrderIHappen)
{
	//Declaring Variable names for writing to a file
	ofstream FILEBBLog;
	
	//Open the Logging text file.
	FILEBBLog.open("BBLog.txt");

	//Write to file
	FILEBBLog << OrderIHappen << ":  " << DescriptiveLogging << endl;

	//Close the file.
	FILEBBLog.close();

	//Increment Logging Count
	OrderIHappen++;
}



//FILEBBLog <<"\n The pitcher is throwing a " << SelectedPitches.Get_PitchSelectionName() << " and it will be " << SelectedPitches.Get_PitchLocation() << endl;