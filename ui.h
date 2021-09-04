#ifndef UI_DEF
#define UI_DEF

#include <ncurses.h>

enum {
	TITLE_COLOR_PAIR = 1,
	FILE_LINE_COLOR_PAIR,
	DIRECTORY_LINE_COLOR_PAIR,
	SELECTED_LINE_COLOR_PAIR,
	BROWSER_COLOR_PAIR,
	SEPERATOR_COLOR_PAIR,
	IMAGE_BORDER_COLOR_PAIR,
	COLOR_PAIR_DEFAULT,
	REVERSE_DEFAULT_COLOR_PAIR,
	VISUALIZER_BACKGROUND_COLOR_PAIR,
	CYAN_BLACK_COLOR_PAIR,
	BLUE_BLACK_COLOR_PAIR,
	MAGENTA_BLACK_COLOR_PAIR,
	GREEN_BLACK_COLOR_PAIR,
	YELLOW_BLACK_COLOR_PAIR,
	RED_BLACK_COLOR_PAIR,
};

void UI_Open();
void UI_Close();
int UI_UpdateDraw();
void UI_SetHotkey(int, int);
void UI_SetGlobalHotkey(int, int);
void UI_SetGlobalKey( int);

enum {
	VOLUME_DOWN_KEY = 0,
	VOLUME_UP_KEY,
	PAUSE_KEY,
	BROWSER_WIN_KEY,
	VISUALIZER_WIN_KEY,
	QUIT_KEY,
	SEEK_LEFT_KEY,
	SEEK_RIGHT_KEY,
	UP_LINE_KEY,
	DOWN_LINE_KEY,
	SELECT_KEY,
	ADD_TO_LIBRARY_KEY,
	LIBRARY_WIN_KEY,
	LIBRARY_WIN_SWITCH_KEY,
	LIBRARY_WIN_TOGGLE_SIDE_KEY,
	REMOVE_FROM_LIBRARY_KEY,
};

enum {
	VOLUME_UP_GLOBAL_KEY = 0,
	VOLUME_DOWN_GLOBAL_KEY,
};

#endif