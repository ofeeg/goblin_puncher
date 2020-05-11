#include "../world/world.hh"
#include <iostream>
#include <vector>
#include <utility>

std::vector<std::pair<int, int>> h_space{std::make_pair(0,0), std::make_pair(1,0)};
std::vector<Combatant*> h_space_enemies;
std::vector<Item*> h_space_items;
std::vector<partition> h_regions{partition("h space", h_space)};
std::vector<enemy_partition> h_enemies{enemy_partition("h space", h_space_enemies)};
std::vector<item_partition> h_items{item_partition("h space", h_space_items)};
				    
int main(){
  World h(3,3, h_regions, h_enemies, h_items);
  World b(1,1);
  h.AccessLocation(0,0);
  //h.AccessLocation(2,2); nlohmann json library catches this with an exception
  std::vector<Combatant*> other_stuff = *h.GetEnemies("h space");
  std::vector<Item*> more_stuff = *h.GetItems("h space");
  std::vector<std::pair<int, int>> stuff = *h.GetRegion("h space");
  std::cout << &h ;//<< " " << &b;
  std::cout << "\n" << (*h.GetRegion("h space"))[1].first;
  return 0;
}
