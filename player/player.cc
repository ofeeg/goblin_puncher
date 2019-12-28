#include "player.hh"

void Player::SetPartyMember(Combatant* party_member){
  party.push_back(party_member);
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
