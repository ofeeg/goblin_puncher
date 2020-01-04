#ifndef PLAYER
#define PLAYER
#include "../world/character.hh"


class Player: public Combatant{
  std::vector<Combatant*> party{this};
  uint16_t money=0;
public:
  Player(int HP=0,int MP=0, int STR=0,int DEF=0,int ACC=0,int SPD=0, std::string name= "No Name", std::string species="None", std::string desc= "No Description", std::vector<Item*> items={},std::vector<Ability*> passive={}, std::vector<Ability*> active={}) : Combatant(HP,MP,STR,DEF,ACC,SPD,name, species, desc, items,passive, active){}
  //friend class Combatant;
  uint16_t GetInput();
  void SetPartyMember(Combatant* party_member);
  Combatant* GetPartyMember(std::string name);
  std::string GetPartyAsStr();
  void GiveItem(Item* item);
  void GiveAbility(Ability& abl, Combatant* pers);
  uint16_t GetMoney(){return this->money;};
  void GiveMoney(uint16_t& num);
  //std::string  GetName(){return PlayerName;}        
};
#endif
