#include "player.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

Player::Player(){
    sixCount = 0;
    rolled =0;
    playerPosition = 0;
    playerName = "Player";
}

int Player::showRolled(){
    return rolled;
}

void Player::movePlayer(){
    if(rolled == 6){
            cout << playerName <<" has rolled a " << showRolled() << endl;
            incrementSixCount();
            if(checkSixCount()){
                cout << playerName << " can move again. Press enter to roll." << endl;
                playerPosition += rolled;
                eraseSixCount();
                incrementSixCount();
            }

            //goes again if 6
            while(rolled == 6 && !checkSixCount()){
                playerPosition += rolled;
                cout << playerName << "'s turn again. Press enter to roll.";
                cin.ignore();
                roll();
                cout << playerName << " has rolled a " << rolled << endl << endl;
                if(rolled !=6){
                    eraseSixCount();
                    playerPosition += rolled;
                    if(playerPosition>99) playerPosition=99;
                }
                else if(rolled ==6){
                    incrementSixCount();
                     if(!checkSixCount()){
                        playerPosition += rolled;
                        if(playerPosition>99) playerPosition=99;
                     }
                     else{
                        cout << playerName << " has rolled three 6's in a row and will be returned to start." << endl
                             << playerName << " cannot move again until a 6 is rolled on their turn." << endl << endl;
                        setPosition(0);
                     }
                }
            }//end while

        }
        else{
            if(!checkSixCount())playerPosition += rolled;
            if(playerPosition>99) playerPosition=99;
        }
}

void Player::setPlayerName(string pName){
    playerName = pName;
}

void Player::eraseSixCount(){
    sixCount = 0;
}

void Player::incrementSixCount(){
    sixCount ++;
}

void Player::roll(){
    srand( time(NULL) );
    rolled = (rand() % 6) + 1;

}

void Player::setPosition(int pos){
    playerPosition = pos;
}

bool Player::checkSixCount(){
    bool test;

    if(sixCount >= 3) return true;
    else return false;
}

int Player::currentPosition(){
    return playerPosition;
}

ostream& operator<<(ostream& osObject, const Player& person){
    osObject << person.playerName;

    return osObject;
}
