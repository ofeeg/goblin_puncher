#include "../player/player.hh"
bool i = 1;
Item junk = Item();
Ability trash = Ability();
std::string j_name = "onf";
std::vector<Ability*> j_abl{&trash};
std::vector<Item*> j_inv{&junk};

int main(){
  auto gg = Player();
  auto j = Combatant(1,1,1,1,1,1,j_name,j_name,j_name,j_inv,j_abl, j_abl);
  auto* jj = &j;
  std::cout << gg.GetName();
  gg.SetPartyMember(jj);
  Combatant* p = gg.GetPartyMember(j_name);
  Ability c4 = ALL_ABILITIES[4];
  while(i){
    uint16_t input = gg.GetInput();
    switch(input){
    case 1:
      std::cout << "Shut up" << std::endl;
      break;
    case 2:
      gg.SetPartyMember(jj);
      std::cout << gg.GetPartyAsStr() << std::endl;
      break;
    case 3:
      gg.GiveItem(j_inv[0]);
      std::cout << gg.GetInventory() << std::endl;
      break;
    case 4:
      for(auto& i : jj->GetActiveAbilities()){
	std::cout << i->Name << "\n";
      }
      gg.GiveAbility(c4, p);
      break;
    default:
      std::cout << input;
      i =0;
    }
  }
  //std::cout << 
  return 0;
}
