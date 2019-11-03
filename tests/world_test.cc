#include "../world/world.hh"
#include <iostream>


int main(){
  World h(1,1);
  World b();
  h.AccessLocation(0,0);
  std::cout << &h << " " << &b;
  return 0;
}
