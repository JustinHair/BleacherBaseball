#pragma once
#include <iostream>
#include <string>

#include "PlayerInfo.h"
#include "BallparkInfo.h"

class GameSituation
{
public:
	GameSituation();

	void Set_BallCount(int BallCount)					{ Balls = BallCount; }
	void Set_StikeCount(int StrikeCount)				{ Strikes = StrikeCount; }
	void Set_Outs(int NumberOfOuts)						{ Outs = NumberOfOuts; }
	void Set_CurrentInning(int Inning)					{ CurrentInning = Inning; }

	int Get_BallCount()									const { return Balls; }
	int Get_StrikeCount()								const { return Strikes; }
	int Get_Outs()										const { return Outs; }
	int Get_CurrentInning()								const { return CurrentInning; }

	~GameSituation();

private:
	int Outs;
	int Strikes;
	int Balls;
	int CurrentInning;
};

GameSituation::GameSituation()
{
}

GameSituation::~GameSituation()
{
}