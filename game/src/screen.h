#ifndef SCREEN_H
#define SCREEN_H

struct Screen {
	virtual void drawScreen() {};
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