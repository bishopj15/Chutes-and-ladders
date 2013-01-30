#include "board.h"

using namespace std;

Board::Board(){
    lowerLadder = false;
    upperChute = false;
    occupied = false;
    upperLadderPosition = 0;
    lowerChutePosition = 0;

}


bool Board::checkOccupied(){
    bool condition;
    if(occupied==true) condition = true;
    else condition = false;

    return condition;

}

int Board::upLadderPosition(){
    return upperLadderPosition;
}

int Board::downChutePosition(){
    return lowerChutePosition;
}

void Board::setupLadder(int pos){
    upperLadderPosition = pos;
    lowerLadder = true;
}

void Board::setupChute(int pos){
    lowerChutePosition = pos;
    upperChute = true;
}

void Board::setOccupied(bool adjust){
    occupied = adjust;
}

bool Board::isLowerLadder(){
if(lowerLadder) return true;
}

bool Board::isUpperChute(){
if(upperChute) return true;
}
