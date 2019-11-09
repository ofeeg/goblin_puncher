#include "../world/battle/battle.hh"
#include <iostream>

std::array<Combatant, 4> Enemies{Combatant(), Combatant(), Combatant()};
std::array<Combatant, 4> Player{Combatant()};



int main(){
  BattleScene(Enemies, Player);
  return 0;
}
