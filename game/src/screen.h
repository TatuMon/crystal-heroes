#ifndef SCREEN_H
#define SCREEN_H

#include <raylib.h>

struct Screen {
	virtual ~Screen() = default;
	virtual void drawScreen() = 0;
	void clearScreen();
};

struct TitleScreen : Screen {
	void drawScreen();
};

struct OptionsScreen : Screen {
	void drawScreen();
};

struct MenuScreen : Screen {
	void drawScreen();
};

struct GameplayScreen : Screen {
	void drawScreen();
};

#endif