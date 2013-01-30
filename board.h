#ifndef BOARD_H
#define BOARD_H

class Board{
    public:
        int upLadderPosition();
        int downChutePosition();
        void setupLadder(int pos);
        void setupChute(int pos);
        void setOccupied(bool adjust);
        bool isLowerLadder();
        bool isUpperChute();
        bool checkOccupied();
        Board();


    private:
        int upperLadderPosition, lowerChutePosition;
        bool occupied, lowerLadder, upperChute;


};


#endif // BOARD_H_INCLUDED
