#ifndef CHARACTER 
#define CHARACTER
#include "ability.hh"
#include "item.hh" 
#include <array>
#include <vector>
#include <string>
#include <utility>

/*Ability NONE_AB= Ability();
Item NONE_IT= Item();*/


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
    Character(int HP=0,int MP=0, int STR=0,int DEF=0,int ACC=0,int SPD=0, std::string name= "No Name", std::string species="None", std::string desc= "No Description", std::vector<Item*> items={}) : CharName(name), CharSpecies(species), CharDesc(desc),Inv(items), hp(HP), mp(MP), str(STR), def(DEF), acc(ACC), spd(SPD){} 
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

    
class Combatant :public Character{
    std::pair<std::vector<Ability*>, std::vector<Ability*>> Abilities; //first for passive, second for active
    std::array<Item*, 4> Equipment{};
    public:
        Combatant(int HP=0,int MP=0, int STR=0,int DEF=0,int ACC=0,int SPD=0, std::string name= "No Name", std::string species="None", std::string desc= "No Description", std::vector<Item*> items={},std::vector<Ability*> passive={}, std::vector<Ability*> active={}) : Character(HP,MP,STR,DEF,ACC,SPD,name, species, desc, items),Abilities(std::make_pair(passive, active)){}
        void Equip(Item*& equip);
        std::string GetAbilitiesAsStr();
        Ability* GetAbility(std::string name, const bool abl_type);
        std::string GetActiveAbilitiesAsStr();
        std::string GetPassiveAbilitiesAsStr();
        std::string GetEquippedItemsAsStr();
  const std::vector<Ability*> GetPassiveAbilities();
  const std::vector<Ability*> GetActiveAbilities();
};

 

#endif     
