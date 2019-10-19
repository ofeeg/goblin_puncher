#ifndef ITEM
#define ITEM
#include "flag.hh"
#include <string>
#include <array>
#include <vector>
#include <iostream>
#include <string_view>

enum EQUIP_TYPES:  const char{
    WEAPON = 'w',
    ARMOR = 'a',
    ACCESSORY = 's',
    }; 
class Item{
    const std::string ItemName;
    const std::string ItemDesc;
    int hp;
    int mp;
    int str;
    int def;
    int acc;
    int spd;
    const std::string ItemEffect;
    const char EquipType;
public:
        
        Item(int HP=0,int MP=0, int STR=0,int DEF=0,int ACC=0,int SPD=0,const char equip='0', 
        std::string effect="", std::string name= "No Name", std::string desc= "No Description") : ItemEffect(effect), EquipType(equip),  ItemName(name),ItemDesc(desc), str(STR), def(DEF), acc(ACC),
         spd(SPD),  hp(HP), mp(MP){}
        std::string GetName();
        std::string GetDesc();
        std::string GetEff();
        std::string GetType();
        char GetTypeCh();
        constexpr int GetHP(){return this->hp;};
        constexpr int GetMP(){return this->mp;};
        constexpr int GetSTR(){return this->str;};
        constexpr int GetDEF(){return this->def;};
        constexpr int GetACC(){return this->acc;};
        constexpr int GetSPD(){return this->spd;};
        std::string GetStats();
        
    };
    
/*class Equipment : public Item{

};*/

#endif    