#include "../world/manager.hh"

std::vector<int> h_space{0, 1};
std::vector<Combatant> h_space_enemies{Combatant()};
std::vector<Item> h_space_items{Item()};
std::vector<partition> h_regions{partition("h space", h_space)};
std::vector<enemy_partition> h_enemies{enemy_partition("h space", h_space_enemies)};
std::vector<item_partition> h_items{item_partition("h space", h_space_items)};
World h(1,1 h_space, h_space_enemies, h_space_items);


//IMPL BUILDER DESIGN TO TRANSFER COMBAT DATA!

int main(){
  Manager(h);
  return 0;
}
