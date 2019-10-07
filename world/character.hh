#ifndef CHARACTER 
#define CHARACTER
#include "item.hh" 
#include <array>
#include <vector>
#include <string>

class Character{
    std::string CharName;
    std::string CharSpecies;
    std::string CharDesc;
    std::vector<Item*> Inv;
    int hp;
    int mp;
    int str;
    int def;
    int spd;
    int acc;
public:
    Character(int HP=0,int MP=0, int STR=0,int DEF=0,int ACC=0,int SPD=0,std::vector<Item*> items={}, std::string name= "No Name", std::string species="None", std::string desc= "No Description") : CharName(name), CharSpecies(species),CharDesc(desc),Inv(items), str(STR), def(DEF), acc(ACC),spd(SPD),  hp(HP), mp(MP){}
    std::string GetName();
    std::string GetDesc();
    std::string GetSpecies();
    constexpr int GetHP(){return this->hp;};
    constexpr int GetMP(){return this->mp;};
    constexpr int GetSTR(){return this->str;};
    constexpr int GetDEF(){return this->def;};
    constexpr int GetACC(){return this->acc;};
    constexpr int GetSPD(){return this->spd;};
    virtual std::string GetInventory();
    std::string GetStats();
};
/*class Enemy: Character{

};*/
 

#endif     