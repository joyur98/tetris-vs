#include "game.h"

Game::Game() {
	grid = Grid();
	blocks = { IBlock(),
		LBlock(),
		SBlock(),
		TBlock(),
		ZBlock()
	};
}