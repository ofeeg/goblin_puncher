#include "../player/player.hh"
bool i = 1;
Item junk = Item();
std::string j_name = "onf";
std::vector<Ability*> j_abl{};
std::vector<Item*> j_inv{&junk};

int main(){
  auto gg = Player();
  auto j = Combatant(1,1,1,1,1,1,j_name,j_name,j_name,j_inv,j_abl, j_abl);
  auto* jj = &j;
  std::cout << gg.GetName();
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
    default:
      std::cout << input;
      i =0;
    }
  }
  //std::cout << 
  return 0;
}
