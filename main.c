include <stdio.h>
#include <stdlib.h>
#include "watson.h"
void turn (gamestruct *game);
int main () {
	FILE *title;
	menu = fopen("title.txt", "r");
	char *titlestring;
	fgets(titlestring, sizeof(menu), stdout);
	printf("%s", "
	+---------------+\n
	| [0] Play Game |\n
	| [1] Help      |\n
	| [2] Quit      |\n
	+---------------+\n
	\n
	> ");
	int inp = getchar();
	switch(inp) {
	case 0:
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
	break;
	case 1:
		//read from help.txt
	break;
	case 2:
		exit(0);
	break;
	}
}
void turn (gamestruct *game) {
	if (game->command == "look") {
		look();
	}
	else if (game->command == "talk") {
		talk();
	}

}
