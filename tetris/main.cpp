#include "raylib.h"
#include "grid.h"


int main() {

	InitWindow(375, 750, "TETRIS");
	
	//sets the fps of the game
	SetTargetFPS(60);

	Grid grid = Grid();

	while (!WindowShouldClose()) {
		BeginDrawing();
		
		grid.Draw();
		
		
		EndDrawing();
	}

	CloseWindow();
	return 0;
}