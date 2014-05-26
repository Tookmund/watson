var out = document.getElementById("out").innerHTML;
var sherlock = {
    talk: function () {
        
    },
    desc: "He stands in the corner, oblivious to everything."
}
var gbl-game = {
    newroom: 1,
    areas: ["office", "street", "mansion"],
    alive: 1
    
}
function main () {
    if (gbl-game.alive == 0) {
        out += "\nGame Over";
        return 0;
    }
    var inp = document.form.text.value
    var arg = inp.split(" ");
    gbl-game = turn(arg[0],arg[1], gbl-game);
}
function turn (com, arg, game) {
    if (com == "talk") {
        
    }
    else if (com == "look") {
        
    }
}
