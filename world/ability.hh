#ifndef ABILITY
#define ABILITY
#include <string> 
#include <array>

const bool PASSIVE = false;
const bool ACTIVE = true; 
enum TYPES: char{
		 INT = 'i',
		 ATK = 'a',
		 DEF = 'd',
		 SPD = 's',
		 PAS = 'x' //ability does something unique
};
    
    
struct Ability{
  const std::string Name;
  const char ScaleType;
  const int ScaleDmg;
  const bool AbilityType;
  Ability(const bool& b=ACTIVE, const std::string s="None", const char c='0', const int i=0) :AbilityType(b), Name(s), ScaleType(c), ScaleDmg(i){};
};

const std::array<Ability, 100> ALL_ABILITIES{
					     Ability(),
					     Ability(ACTIVE,"DUMMY_INT", TYPES::INT,10),
					     Ability(ACTIVE,"DUMMY_ATK", TYPES::ATK,10),
					     Ability(ACTIVE,"DUMMY_DEF", TYPES::DEF,10),
					     Ability(ACTIVE, "DUMMY_SPD", TYPES::SPD,10),
					     Ability(PASSIVE, "DUMMY_SPECIAL", TYPES::PAS,10),
};

const std::array<const Ability*, 10> UNIQUE_ABILITIES{
						      &ALL_ABILITIES[5]
};
#endif 
