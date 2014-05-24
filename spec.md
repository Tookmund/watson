Specifications/Design Document
==============================
(N.B. This is a draft, it is in no way final.)

**WARNING: SPOILERS AHEAD!!**

Main idea
---------
* The player (Dr. Watson) moves around a series of rooms in a linear fashion
* Solve one puzzle in each room
* might be simple puzzles or mysteries
* Player can talk to others in room who can help or hinder you
* investigate items to figure out puzzles

Characters
----------
* Sherlock holds all the answers, but he will not help you often
* Inspector Lestrade will try to be helpful but he is often wrong
* Strangers are unknown; they may help or harm you

Implementation
--------------
* game struct holds room data puzzle solved status, other character status etc.
* pointer to game passed command functions to modify data
* input sorted by scanf, passed to game->command and game->arg[0-2]
	* maybe 4 chars for command, 10 per arg??

The Game Struct
---------------
* char[4] command = the command the player has entered
* char[10][0-2] arg = array of 3 vals, arguments to game.command
* int area = the current area


