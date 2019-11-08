#include "../world/world.hh"
#include <iostream>
std::vector<int> h_space{0, 1};
std::vector<Combatant> h_space_enemies{Combatant()};
std::vector<partition> h_regions{partition("h space", h_space)};
std::vector<enemy_partition> h_enemies{enemy_partition("h space", h_space_enemies)};

int main(){
  World h(1,1, h_regions, h_enemies);
  World b(1,1);
  h.AccessLocation(0,0);
  std::vector<Combatant> other_stuff = *h.GetEnemies("h space");
 
  //h.GetItems("");
  std::vector<int> stuff = *h.GetRegion("h space");
  std::cout << &h ;//<< " " << &b;
  std::cout << "\n" << (*h.GetRegion("h space"))[1];//stuff[1];
  
  return 0;
}
