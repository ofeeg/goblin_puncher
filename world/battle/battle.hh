#ifndef BATTLE
#define BATTLE
#include "../character.hh"
#include <iostream>
#include <stdexcept>    


struct TurnQueue{
  Combatant EMPTY = Combatant();
  std::vector<Combatant*> Order{&EMPTY};
  inline void enqueue(Combatant& c){
    bool filled = 1;
    unsigned short index = 0;
    Combatant* ptr = &c;
    while(filled){
      if(!Order[index]->GetName().compare(EMPTY.GetName())){
	Order[index] = ptr;
	Order.push_back(&EMPTY);
	filled = 0;
      }
      index++;
    }
  }
  inline Combatant dequeue(){
    if(!Order.front()->GetName().compare(EMPTY.GetName())){
      throw std::runtime_error("Empty queue, cannot dequeue");
    }
    Combatant* tmp;
    Combatant return_val = *Order.front();
    bool IsCurrentTurnHandled = 0;
    short index  = 0;
    for(Combatant* it : Order){
      if( it == Order.at(Order.size()-2)){
	break;
      }
      if(!IsCurrentTurnHandled){
	tmp = Order.at(Order.size()-2);
	Order.at(Order.size()-2) = it;
	IsCurrentTurnHandled = 1;
      }
      else{
	Order.at(index) = it;
	index = ++index;
      }
    }
    Order.at(Order.size()-3) = tmp;
    return return_val;
  }
};
    
    

class BattleScene{
  std::array<Combatant, 4> Enemies;
  std::array<Combatant, 4> Player;
public:
  BattleScene(std::array<Combatant, 4>& e_list, std::array<Combatant, 4> p_list) : Enemies(e_list), Player(p_list){}
  TurnQueue Turns;
  constexpr int DamageCalculation(int offense, int defense, int abl_dmg=0){
    int dmg = ((offense*2)) - (defense*3)/2 + abl_dmg;
    return dmg;
  }
  void InitPassive(Combatant& a);
  void SetTurnOrder();
};




#endif
