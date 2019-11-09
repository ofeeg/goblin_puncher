#include "../character.hh"

class BattleScene{
  std::array<Combatant, 4> Enemies;
  std::array<Combatant, 4> Player;
public:
  BattleScene(std::array<Combatant, 4>& e_list, std::array<Combatant, 4> p_list) : Enemies(e_list), Player(p_list){}
};

