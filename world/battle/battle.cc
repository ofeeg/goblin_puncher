#include "battle.hh"

void BattleScene::InitPassive(Combatant& a){
  if(!(a.GetPassiveAbilitiesAsStr().compare(""))){
    return;
  }
  const std::vector<Ability*> Passives = a.GetPassiveAbilities();
  for(Ability*  i : Passives){
  if(i->ScaleType == TYPES::PAS){
    std::cout << "Doing something unique \n";
  }
  else{
    std::cout << i->ScaleDmg;
  }
}
}

std::array<unsigned short, 4> SortCombatants(std::array<Combatant, 4>& i){
  std::array<unsigned short, 4> return_val{0,1,2,3};
  unsigned short tmp;
  unsigned short index0 = 0;
  unsigned short index1 = 1;
  for(Combatant& p : i){
    for(index1; index1 < 4; ++index1){
      if(p.GetSPD() <= i[index1].GetSPD()){
	tmp = return_val[index0];
	return_val[index0] = return_val[index1];
	return_val[index1] = tmp;
	}
      
    }
    index0 += 1;
    index1 = index0+1;
      }
  return return_val;
}

void CompareRemains(const std::array<unsigned short, 4>& arr1, const std::array<unsigned short, 4>& arr2, std::array<Combatant, 4>& arr3, std::array<Combatant,4>& arr4, TurnQueue& turns, const uint16_t& index){
  for(uint16_t x = index+1; x<4; ++x){
    if(arr1[index] >= arr2[x]){
      if(arr3[arr1[index]].GetName().compare(Combatant().GetName())){
	turns.enqueue(arr3[arr1[index]]);
	std::cout << "Breaking" << std::endl;
      }
      break;
    }
    if(x == 3){
      for(uint16_t o = index; o < 4; ++o){
	if(arr4[arr2[o]].GetName().compare(Combatant().GetName())){
	  turns.enqueue(arr4[arr2[o]]);
	}
      }
    }
  }
}

void BattleScene::SetTurnOrder(){
  std::array<unsigned short , 4> P_arr = SortCombatants(this->Player);
  std::array<unsigned short , 4> E_arr = SortCombatants(this->Enemies);
  //unsigned short* tmp;
  for(uint16_t i = 0; i < 4; ++i){
    if(Enemies[E_arr[i]].GetSPD() >= Player[P_arr[i]].GetSPD()){
      if(Enemies[E_arr[i]].GetName().compare(Combatant().GetName())){
	this->Turns.enqueue(this->Enemies[E_arr[i]]);
	CompareRemains(P_arr, E_arr, this->Enemies, this->Player, this->Turns, i);
      }
    }
    else{
      if(Player[P_arr[i]].GetName().compare(Combatant().GetName())){
	this->Turns.enqueue(this->Player[P_arr[i]]);
	CompareRemains(E_arr, P_arr, this->Player, this->Enemies,this->Turns,  i);
      }
    }
  }
  std::cout << this->Turns.Order.size() << std::endl;
}

	  
      
    
