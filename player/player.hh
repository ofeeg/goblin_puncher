#pragma once
#include <iostream>
#include <string>


class Player{
    std::string PlayerName;
    public:
        Player(std::string name) : PlayerName(name){};
        std::string  GetName(){return PlayerName;}        
    };
