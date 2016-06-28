Specifications/Design Document
==============================
**WARNING: SPOILERS AHEAD!!**

(N.B. This is a draft, it is in no way final.)

(note: 1/0 means "a value of 1 or 0")

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
* Strangers are unknown; they may help or harm you (each is different in code but appear same in game)

Commands
--------
[] = the arguments, comma-separated
* look [thing] = look at something
* talk [person] = talk to someone
* move [place] = move to a place


Implementation
--------------
* one function per command
* another function for each different person
* game struct holds room data puzzle solved status, other character status etc.
* pointer to game passed command functions to modify data
* input sorted by scanf, passed to game->command and game->arg[0-2]
* 4 chars for command and arg

The Game Struct
---------------
* char command[4] = the command the player has entered
* char arg[4][2] = array of 2 vals, arguments to game->command
* areastruct \*area = a pointer tothe current area
* int alive = 1/0 if player is alive
* int newroom = 1/0 if this is first turn in this room
* int inven[10][20] = The player's inventory, items are 10chars long (NOT GOING TO BE IMPLEMENTED ORIGINALLY, LATER ADD ON OR IF NEEDED IN LATER PUZZLES)

The Character Struct
--------------------
* char desc[50] = description of person
* void (\*convo) (gamestruct \*game) = pointer to the function that starts converstion

The Area Struct
---------------
* char items [20] = (NIY) An array of items that are in the room
* char desc[50] = description of room
