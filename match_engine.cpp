#include<cstdlib>
#include"match_engine.h"
#include <iostream>


int getKeeperDive()
{
    return (rand() % 3) + 1;
}


bool resolveShot(int shotDirection, int shotType, int keeperDirection)
{
    if (shotDirection != keeperDirection)
    {
        if(shotType == 1){
            std::cout<<"it's an open goal\n";
            return true;
        }
        if (shotType == 2){
            if (rand() % 10 <2)
            {
               return false;
            }
            else{
                return true;
            } 
        }
    }
    else{
        if(shotType == 1){
            std::cout<< "easy save for the keeper";
            return false;
        }
        if(shotType ==2){
            if(rand() % 2 ==0){
                return true;
            }
            else{
                return false;
            }
        }
    }
    return false;

}