#pragma once
#include <iostream>
#include <string>

#include "PlayerInfo.h"
#include "BallparkInfo.h"

class GameSituation
{
public:
	GameSituation();

	void Set_BallCount(int BallCount)			{ Balls = BallCount; }
	void Set_StikeCount(int StrikeCount)				{ Strikes = StrikeCount; }
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