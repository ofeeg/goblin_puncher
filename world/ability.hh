#ifndef ABILITY
#define ABILITY
#include <string> 

const bool PASSIVE = false;
const bool ACTIVE = true; 
enum TYPES: char{
    INT = 'i',
    ATK = 'a',
    DEF = 'd',
    SPD = 's',
    };
    
    
struct Ability{
    const std::string Name;
    const char ScaleType;
    const int ScaleDmg;
    Ability(const std::string s="None", const char c='0', const int i=0) : Name(s), ScaleType(c), ScaleDmg(i){};
    };
#endif 