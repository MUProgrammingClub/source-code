#pragma once
class GameState
{
private:
	enum CurrentState { NEW_GAME, INIT, IDLE, MOVEMENT, EVENT, END_GAME } state;
public:
	GameState();
	CurrentState getState();
	~GameState();
};

