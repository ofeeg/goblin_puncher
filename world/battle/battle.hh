#ifndef BATTLE
#define BATTLE
#include "../character.hh"
#include <iostream>
    


class BattleScene{
  std::array<Combatant, 4> Enemies;
  std::array<Combatant, 4> Player;

public:
  BattleScene(std::array<Combatant, 4>& e_list, std::array<Combatant, 4> p_list) : Enemies(e_list), Player(p_list){}
  constexpr int DamageCalculation(int offense, int defense, int abl_dmg=0){
    int dmg = ((offense*2)) - (defense*3)/2 + abl_dmg;
    return dmg;
  }
};





#endif
