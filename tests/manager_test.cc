#include "../world/manager.hh"
//#include <vector>

std::vector<int> h_space{0,1};
std::vector<Combatant*> h_space_enemies;
std::vector<Item*> h_space_items;
std::vector<partition> h_regions{partition("h space", h_space)};
std::vector<enemy_partition> h_enemies{enemy_partition("h space", h_space_enemies)};
std::vector<item_partition> h_items{item_partition("h space", h_space_items)};
World h(1,1, h_regions, h_enemies, h_items);
auto p = Player();

//IMPL BUILDER DESIGN TO TRANSFER COMBAT DATA!

int main(){
  manager man(h);
  int i = man.get_current_location_val();
  uint16_t input = p.GetInput();
  man.send_message(input);
  man.update_player_location();
  return 0;
}
