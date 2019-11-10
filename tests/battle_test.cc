#include "../world/battle/battle.hh"


std::array<Combatant, 4> Enemies{Combatant(), Combatant(), Combatant()};
std::array<Combatant, 4> Player{Combatant()};
void InitBattle(BattleScene& bs){
  bool battling = 1;
  
  while(battling){
    char i;
    std::cin >> i;
    switch(i){
    case('1'):
      std::cout << "Attack! " << bs.DamageCalculation(Player[0].GetSTR(), Enemies[0].GetDEF());
      break;
    case('0'):
      battling = 0;
      break;
    }
  }
};


int main(){
  BattleScene h(Enemies, Player);
  InitBattle(h);
  return 0;
}
