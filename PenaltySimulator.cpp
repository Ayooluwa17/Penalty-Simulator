#include<iostream>
#include"match_engine.h"

int main()
{
    int goalsScored =0; int shotsSaved = 0;
    std::cout <<"Welcome to the Top Bins Shoutout Drill!\n";

    for(int round =1; round <= 5; round++){
        int playerDir; int type; int keeperDir;

        std::cout<<"Where do you wnat to shoot for this round ?\n 1. Left 2. Center 3. Right -> ";
        std::cin>> playerDir;

        std::cout<< " Choose your shot type\n 1. safe 2. Top Bins -> ";
        std::cin >> type;

        keeperDir= getKeeperDive();

        if(resolveShot(playerDir, type, keeperDir)){
            std::cout<<"GOAL!";
            goalsScored++;
        }
        else{
            std::cout<< "SAVED!\n";
            shotsSaved++;
        }
        std::cout << "Score: " << goalsScored <<"Saves: "<<shotsSaved;
    }

    if (goalsScored >shotsSaved){
        std::cout<<"victory";
    }
    else{
        std::cout<<"you lost";
    }
    return 0;
}