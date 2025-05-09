#include "raylib.h"


int main() {

	InitWindow(750, 750, "TETRIS");

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		EndDrawing();
	}

	CloseWindow();
	return 0;
}