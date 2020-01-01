#include "player.hh"

void Player::SetPartyMember(Combatant* party_member){
  party.push_back(party_member);
}

void Player::GiveItem(Item* item){
  this->Inv.push_back(item);
}
void Player::GiveAbility(Ability& abl, Combatant* pers){ 
  if(abl.AbilityType){pers->Abilities.first.push_back(&abl); }
  else{pers->Abilities.second.push_back(&abl);}
}

std::string Player::GetPartyAsStr(){
  std::string val = "";
  for(auto& i : party){
    val += " " + i->GetName();
  }
  return val;
}

Combatant* Player::GetPartyMember(std::string name){
  for(Combatant*& i : this->party){
    if(!name.compare(i->GetName()) && name.compare("No Name")){return i;}
  }
  throw std::runtime_exception("tried to get player who didn't exist");
}
	

uint16_t Player::GetInput(){
  bool invalid = 1;
  uint16_t i;
  while(invalid){
    i=0;
    std::cin >> i;
    if(!std::cin){
      throw std::runtime_error("bad input");
    }
    else{
      invalid = 0;
    }
    //if(i > 0 && i <= 9){
    //invalid = 0;
    //}
  }
  return i;
}
