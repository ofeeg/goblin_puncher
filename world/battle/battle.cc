#include "battle.hh"

void BattleScene::InitPassive(Combatant& a){
  if(!(a.GetPassiveAbilities.compare(""))){
      for(Ability*  i : a.Abilities.first)){
      if(i->ScaleType = TYPES::PAS){
        std::cout << "Doing something unique \n";
       }
       else{
	  std::cout << i->ScaleDamage;
       }
  }
}


void BattleScene::SetTurnOrder(){
  std::vector<int> Order;
  for(Combatant& i : this->Player){
    Order.push_back(i.GetSPD());
  }
  for(Combatant& i : this->Enemies){
    Order.push_back(i.GetSPD());
  }
  for(auto& i : Order)
  
