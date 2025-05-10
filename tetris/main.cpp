#include "raylib.h"
#include "grid.h"
#include "block.h"
#include "blocks.cpp"
#include "block.cpp"


int main() {

	InitWindow(375, 750, "TETRIS");
	
	//sets the fps of the game
	SetTargetFPS(60);

	Grid grid = Grid();

	IBlock iblock = IBlock();

	iblock.Move(1, 2);
		
	while (!WindowShouldClose()) {
		BeginDrawing();
		
		grid.Draw();
		
		iblock.Draw();

		EndDrawing();
	}

	CloseWindow();
	return 0;
}