#include "../world/battle/battle.hh"

std::string p_name="I have 10  SPD";
std::string p_desc= "Yep.";
std::string e_name="I  have 5 SPD";
std::vector<Item*>  p_item={};
std::vector<Ability*> p_no_abl={};


std::array<Combatant, 4> Enemies{Combatant(100, 10, 10,10,10,5,e_name, p_desc, p_desc,p_item, p_no_abl, p_no_abl)};
std::array<Combatant, 4> Player{Combatant(100, 10, 10,10,10,10,p_name, p_desc, p_desc,p_item, p_no_abl, p_no_abl)};
void InitBattle(BattleScene& bs){
  bool battling = 1;
  bs.SetTurnOrder();  
  while(battling){
    Combatant ThisTurn = bs.Turns.dequeue();
    std::cout << ThisTurn.GetName()  << "'s turn!" << std::endl;
    char i;
    std::cin >> i;
    switch(i){
    case('1'):
      std::cout << "Attack! " << bs.DamageCalculation(ThisTurn.GetSTR(), Enemies[0].GetDEF()) << std::endl;
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
