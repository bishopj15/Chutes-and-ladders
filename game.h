#ifndef GAME_H
#define GAME_H

class Master{
    public:
        bool checkWin();
        void printBoard();
        bool playerWin();
        void setUpBoard();
        void chuteOrLadder(Player curPlayer);
        int playerCount();
        void adjustOccupancy();
        void writtenPositions();
        Master(int num);
        Player players[10];

    private:
        Board gameBoard[100];
        int numberOfPlayers;
        bool win;

};

#endif // GAME_H
