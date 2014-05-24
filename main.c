include <stdio.h>
#include <stdlib.h>
#include "watson.h"
void turn (gamestruct *game);
int main () {
	gamestruct truegame;
	gamestruct *game;
	game = &truegame;
	/*
	Some default values for game struct
	*/
	game->area = 0;
	game->newroom = 1;
	game->alive = 1;
	while (game->alive) {
		if (game->area->desc) {
			printf("%s",game->area->desc);
		}
		printf("> ");
		scanf("%4s %4s %4s",&game->command, &game->arg[0], &game->arg[1]);
		turn(game);
	}
}
void turn (gamestruct *game) {
	if (game->command == "look") {
		look();
	}
	else if (game->command == ""
}
