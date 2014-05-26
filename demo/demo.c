#include <stdio.h>
#include <stdlib.h>
void playgame () {
	char *begin = "You wake up to the sound of the doorbell ringing incessantly.\n";
	printf("%s", begin);
}
void printhelp() {
	char *help = "This is a text adventure.\nCommands:\n\ntalk - Talk to someone\nlook - Look at someone/something\n\nThat's it as this is only a demo.";
	printf("%s", help);
}
int main () {
	char *menu = "WATSON\n+---------------+\n| [0] Play Game |\n| [1] Help      |\n| [2] Quit      |\n+---------------+\n> "; //eventually ASCII art
	printf("%s", menu);
	int inp = getchar();
	switch(inp) {
		case 0:
			playgame();
		break;
		case 1:
			printhelp();
		break;
		case 2:
			exit(0);
		break;
	}
exit(0);
}
