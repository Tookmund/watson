/*
Sherlock Holmes
*/
character sherlock;
sherlock.desc = "";
void talktosher (gamestruct *game) {
	//convo with sherlock holmes
}
sherlock.convo = &talktosher;

/*
Inspector Lestrade
*/
character lestrade;
lestrade.desc = "";
void talktolestrade (gamestruct *game) {
	//convo with lestrade
}
lestrade.convo = &talktolestrade;
/*
Office Stranger
*/
character office-stranger;
office-stranger.desc = "";
void talktoofficestranger (gamestruct *game) {
	//convo with office stranger
}
office-stranger.convo = &talktoofficestranger;
