#include "screen.h"

void TitleScreen::drawScreen() {
	Screen::clearScreen();
	
	BeginDrawing();

	DrawText("hola", 300, 300, 16, BLACK);

	EndDrawing();
};