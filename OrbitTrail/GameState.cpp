#include "pch.h"
#include "GameState.h"


GameState::GameState()
{
	state = NEW_GAME;
}

GameState::CurrentState GameState::getState()
{
	return state;
}


GameState::~GameState()
{
}
