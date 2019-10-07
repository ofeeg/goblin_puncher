#include "character.hh"
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