#ifndef WATSON_H_INCLUDED
#define WATSON_H_INCLUDED
/*
The "game" struct; holds all important data
*/
typedef struct gamestruc-t {
	char command [4];
	char arg[4][2];
	int area;
	int newroom;
	int inven[10][20];
} gamestruct
/*
The struct used for characters.
*/
typedef struct characte-r{
	char desc[50];
	void (*convo) (gamestruct *game);
} character
#endif
