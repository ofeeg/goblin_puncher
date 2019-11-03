#include "world.hh"


void World::AccessLocation(int x, int y){
  this->WorldMap.PlayEvent(x, y);
}
