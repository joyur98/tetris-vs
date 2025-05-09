#include "raylib.h"


int main() {

	InitWindow(750, 750, "TETRIS");

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("TETRIS", 350, 350, 20, BLACK);
		EndDrawing();
	}

	CloseWindow();
	return 0;
}