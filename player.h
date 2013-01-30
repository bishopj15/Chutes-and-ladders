#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>


class Player{
    public:
        void roll();
        int showRolled();
        int currentPosition();
        void setPlayerName(std::string pname);
        void incrementSixCount();
        void eraseSixCount();
        void setPosition(int pos);
        bool checkSixCount();
        void movePlayer();
        friend std::ostream& operator<<(std::ostream& osObject, const Player& person);
        Player();

    private:
        int sixCount, playerPosition, rolled, color;
        std::string playerName;


};


#endif // PLAYER_H
