#include "../world/world.hh"
#include <iostream>
std::vector<int> h_space{0, 1};
std::vector<partition> h_regions{partition("h space", h_space)}; 

int main(){
  World h(1,1, h_regions);
  World b(1,1);
  h.AccessLocation(0,0);
  std::vector<int> stuff = *h.GetRegion("h space");
  std::cout << &h ;//<< " " << &b;
  std::cout << "\n" << stuff[1];
  return 0;
}
