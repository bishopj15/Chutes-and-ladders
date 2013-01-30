#include "board.cpp"
#include "player.cpp"
#include "game.cpp"
#include <iostream>
#include <string>
//#include <iomanip>

int main(){
    int num=0, i=0;
    string playName;

    cout << "WELCOME TO CHUTES AND LADDERS" << endl;
    cout << "'p' denotes a player." << endl
             << "'#' denotes the lower end of a ladder." << endl
             << "'%' denotes the upper end of a chute." << endl << endl;

    cout << "How many players? (Between 2 and 10) ";
    cin >> num;


    Master gameMaster(num);
    gameMaster.setUpBoard();


    for(int x=0; x<num; x++){
        cout << "Enter Player " << x+1 << "'s name: ";
        cin >> playName;
        gameMaster.players[x].setPlayerName(playName);
    }


    cout << endl << endl << "LET THE GAME BEGIN" << endl << endl;
    cin.ignore(); //flush left over \n from buffer

    gameMaster.printBoard();
    //gameMaster.players[i].setPosition(91);  //test win condition

    while(!gameMaster.playerWin()){
        cout << gameMaster.players[i] << "'s turn. Press enter to roll.";
        cin.ignore();
        gameMaster.players[i].roll();
        gameMaster.players[i].movePlayer();
        gameMaster.chuteOrLadder(gameMaster.players[i]);
        gameMaster.adjustOccupancy();
        gameMaster.printBoard();
        cout << gameMaster.players[i] <<" has rolled a " << gameMaster.players[i].showRolled() << endl;
        gameMaster.writtenPositions();

        i++;
        if(i==gameMaster.playerCount()) i=0;

        gameMaster.checkWin();

    }//end game while

    if(i==0) i = gameMaster.playerCount()-1;
    cout << "Congradulations " << gameMaster.players[i-1] << ", You have won the game!!!!!";


}
