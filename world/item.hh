#ifndef ITEM
#define ITEM
#include "flag.hh"
#include <string>
#include <array>
#include <vector>
#include <iostream>
#include <string_view>

class Item{
    std::string ItemName;
    std::string ItemDesc;
    int hp;
    int mp;
    int str;
    int def;
    int acc;
    int spd;
public:
        Item(int HP=0,int MP=0, int STR=0,int DEF=0,int ACC=0,int SPD=0,std::string name= "No Name", std::string desc= "No Description") : ItemName(name),ItemDesc(desc), str(STR), def(DEF), acc(ACC),
         spd(SPD),  hp(HP), mp(MP){}
        std::string GetName();
        std::string GetDesc();
        constexpr int GetHP(){return this->hp;};
        constexpr int GetMP(){return this->mp;};
        constexpr int GetSTR(){return this->str;};
        constexpr int GetDEF(){return this->def;};
        constexpr int GetACC(){return this->acc;};
        constexpr int GetSPD(){return this->spd;};
        std::string GetStats();
        
    };
    
class Equipment : public Item{
const std::string ItemEffect = "DUMMY";
public:
    std::string_view GetEff(){return this->ItemEffect;}
};

#endif    