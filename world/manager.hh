#ifndef MANAGER
#define MANAGER
#include "world.hh"
#include "battle/battle.hh"
#include "../player/player.hh"

class manager{
  World* managed;
public:
  manager(World& x) : managed(x){}
  
}
#endif