#include "item.hh"
std::string Item::GetType(){
    const char n = this->EquipType;
    std::string s;
    switch(n) {
        case 'w': s="Weapon"; return s;
        case 's': s="Accessory"; return s;
        case 'a': s="Armor"; return s;
        default: s="Consumable"; return s;
        }
}; 
std::string Item::GetName(){return this->ItemName;};

std::string Item::GetStats(){

    std::string Stats =  GetName() + "\n" +  GetDesc() + "\n" + GetType() + "\n" + GetEff() + "\n" +
         "HP: " + std::to_string(GetHP()) + "\n" + "MP: " + std::to_string(GetMP()) +"\n" + 
        "STR: " + std::to_string(GetSTR()) + "\n" + "DEF: " + std::to_string(GetDEF())
        + "\n" + "ACC: " + std::to_string(GetACC()) + "\n" + "SPD: " + std::to_string(GetSPD())+ "\n";
    return Stats;
    }
std::string Item::GetDesc(){return this->ItemDesc;}
std::string Item::GetEff(){return this->ItemEffect;}

