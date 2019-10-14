#include "character.hh"

Ability not_found("ABILITY NOT FOUND", TYPES::ATK, 0);
Ability* const NOTFOUND = &not_found;
std::string Character::GetName(){return this->CharName;};
std::string Character::GetStats(){

    std::string Stats = "HP: " + std::to_string(GetHP()) + "\n" + "MP: " + std::to_string(GetMP()) +"\n" + 
        "STR: " + std::to_string(GetSTR()) + "\n" + "DEF: " + std::to_string(GetDEF())
        + "\n" + "ACC: " + std::to_string(GetACC()) + "\n" + "SPD: " + std::to_string(GetSPD())+ "\n";
    return Stats;
    };
std::string Character::GetDesc(){return this->CharDesc;};
std::string Character::GetSpecies(){return this->CharSpecies;};
std::string Character::GetInventory(){
    if(this->Inv.empty()){
        std::string s = "No Items";
        return s;
        } 
    std::string InvString = "";
    for(Item*& i : this->Inv){
        InvString= InvString + "\n" + i->GetName();
        }
    return InvString;
};


std::string Combatant::GetAbilitiesAsStr(){
    if(this->Abilities.first.empty() && Abilities.second.empty()){
        std::string s = "No Abilities";
        return s;
    } 
    std::string AbilityString = "";
    for(Ability* i : this->Abilities.first){
        AbilityString= AbilityString + "\n" + i->Name;
    }
    for(Ability* i : this->Abilities.second){
        AbilityString= AbilityString + "\n" + i->Name;
    }
    return AbilityString;
};

Ability* Combatant::GetAbility(std::string name, const bool abl_type){
    if (abl_type){
        for(Ability* i : this->Abilities.second){
            if(!i->Name.compare(name)){
                return i;
                }
            }
        return NOTFOUND;
        }
    
    for(Ability* i : this->Abilities.first){
        if(!i->Name.compare(name)){
            return i;
            }
            return NOTFOUND;
    }
};