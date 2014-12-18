#include "game.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
//i have made a change
Master::Master(int num){
    if(num<2 || num>10) numberOfPlayers = 2;
    else numberOfPlayers = num;

    gameBoard[0].setOccupied(true);
    win = false;
}

void Master::writtenPositions(){
    for(int i=0; i<numberOfPlayers; i++){
        cout << players[i] << "'s current position is: " << players[i].currentPosition()+1 << endl;
    }

    cout << endl;

  //  cout << "Press enter to continue" << endl << endl;
  //  cin.ignore();
}

void Master::adjustOccupancy(){
    for(int i=0; i<numberOfPlayers; i++){
        gameBoard[players[i].currentPosition()].setOccupied(true);
    }

    for(int i=0; i<100; i++){
        if(gameBoard[i].checkOccupied()){
            bool reset = true;
            for(int j=0; j<numberOfPlayers; j++){
                if(players[j].currentPosition()==i) reset = false;
            }

            if(reset) gameBoard[i].setOccupied(false);
        }
    }

}

int Master::playerCount(){
    return numberOfPlayers;
}


void Master::chuteOrLadder(Player curPlayer){
            if(gameBoard[curPlayer.currentPosition()].isLowerLadder()){
                curPlayer.setPosition(gameBoard[curPlayer.currentPosition()].upLadderPosition());
                cout << curPlayer << " has climbed up a ladder." << endl;
            }

            if(gameBoard[curPlayer.currentPosition()].isUpperChute()){
               curPlayer.setPosition(gameBoard[curPlayer.currentPosition()].downChutePosition());
               cout << curPlayer << " has fell down a chute." << endl;
            }

}

bool Master::playerWin(){
    return win;
}

bool Master::checkWin(){
    for(int i=0; i<numberOfPlayers; i++){
        if(players[i].currentPosition()==99){
            win = true;
            break;
        }
    }
}

void Master::setUpBoard(){

    gameBoard[8].setupLadder(27);
    gameBoard[23].setupLadder(31);
    gameBoard[50].setupLadder(85);
    gameBoard[81].setupLadder(92);
    gameBoard[97].setupChute(82);
    gameBoard[64].setupChute(35);
    gameBoard[52].setupChute(43);
    gameBoard[20].setupChute(9);
}

void Master::printBoard(){
    string hold;

    for(int i=99; i>=90; i--){
        cout << setw(5) << i+1;
    }
    cout << endl;
    for(int i=99; i>=90; i--){
        if(gameBoard[i].checkOccupied()) cout << setw(5) << "p";
        else if(gameBoard[i].isLowerLadder()) cout << setw(5) << "#";
        else if(gameBoard[i].isUpperChute()) cout << setw(5) << "%";
        else cout << setw(5) << "  ";
    }
    cout << endl << endl;

    for(int i=80; i<=89; i++){
        cout << setw(5) << i+1;
    }
    cout << endl;
    for(int i=80; i<=89; i++){
        if(gameBoard[i].checkOccupied()) cout << setw(5) << "p";
        else if(gameBoard[i].isLowerLadder()) cout << setw(5) << "#";
        else if(gameBoard[i].isUpperChute()) cout << setw(5) << "%";
        else cout << setw(5) << "  ";
    }
    cout << endl << endl;

    for(int i=79; i>=70; i--){
        cout << setw(5) << i+1;
    }
    cout << endl;
    for(int i=79; i>=70; i--){
        if(gameBoard[i].checkOccupied()) cout << setw(5) << "p";
        else if(gameBoard[i].isLowerLadder()) cout << setw(5) << "#";
        else if(gameBoard[i].isUpperChute()) cout << setw(5) << "%";
        else cout << setw(5) << "  ";
    }
    cout << endl << endl;

    for(int i=60; i<=69; i++){
        cout << setw(5) << i+1;
    }
    cout << endl;
    for(int i=60; i<=69; i++){
        if(gameBoard[i].checkOccupied()) cout << setw(5) << "p";
        else if(gameBoard[i].isLowerLadder()) cout << setw(5) << "#";
        else if(gameBoard[i].isUpperChute()) cout << setw(5) << "%";
        else cout << setw(5) << "  ";
    }
    cout << endl << endl;

    for(int i=59; i>=50; i--){
        cout << setw(5) << i+1;
    }
    cout << endl;
    for(int i=59; i>=50; i--){
        if(gameBoard[i].checkOccupied()) cout << setw(5) << "p";
        else if(gameBoard[i].isLowerLadder()) cout << setw(5) << "#";
        else if(gameBoard[i].isUpperChute()) cout << setw(5) << "%";
        else cout << setw(5) << "  ";
    }
    cout << endl << endl;

    for(int i=40; i<=49; i++){
        cout << setw(5) << i+1;
    }
    cout << endl;
    for(int i=40; i<=49; i++){
        if(gameBoard[i].checkOccupied()) cout << setw(5) << "p";
        else if(gameBoard[i].isLowerLadder()) cout << setw(5) << "#";
        else if(gameBoard[i].isUpperChute()) cout << setw(5) << "%";
        else cout << setw(5) << "  ";
    }
    cout << endl << endl;

    for(int i=39; i>=30; i--){
        cout << setw(5) << i+1;
    }
    cout << endl;
    for(int i=39; i>=30; i--){
        if(gameBoard[i].checkOccupied()) cout << setw(5) << "p";
        else if(gameBoard[i].isLowerLadder()) cout << setw(5) << "#";
        else if(gameBoard[i].isUpperChute()) cout << setw(5) << "%";
        else cout << setw(5) << "  ";
    }
    cout << endl << endl;

    for(int i=20; i<=29; i++){
        cout << setw(5) << i+1;
    }
    cout << endl;
    for(int i=20; i<=29; i++){
        if(gameBoard[i].checkOccupied()) cout << setw(5) << "p";
        else if(gameBoard[i].isLowerLadder()) cout << setw(5) << "#";
        else if(gameBoard[i].isUpperChute()) cout << setw(5) << "%";
        else cout << setw(5) << "  ";
    }
    cout << endl << endl;

    for(int i=19; i>=10; i--){
        cout << setw(5) << i+1;
    }
    cout << endl;
    for(int i=19; i>=10; i--){
        if(gameBoard[i].checkOccupied()) cout << setw(5) << "p";
        else if(gameBoard[i].isLowerLadder()) cout << setw(5) << "#";
        else if(gameBoard[i].isUpperChute()) cout << setw(5) << "%";
        else cout << setw(5) << "  ";
    }
    cout << endl << endl;

    for(int i=0; i<=9; i++){
        cout << setw(5) << i+1;
    }
    cout << endl;
    for(int i=0; i<=9; i++){
        if(gameBoard[i].checkOccupied()) cout << setw(5) << "p";
        else if(gameBoard[i].isLowerLadder()) cout << setw(5) << "#";
        else if(gameBoard[i].isUpperChute()) cout << setw(5) << "%";
        else cout << setw(5) << "  ";
    }
    cout << endl << endl;


}
