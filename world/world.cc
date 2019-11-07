#include "world.hh"


void World::AccessLocation(int x, int y){
  this->WorldMap.PlayEvent(x, y);
}

std::vector<int>* World::GetRegion(std::string r_name){
  std::vector<int>* wanted; 
  for(partition& i : this->RegionList){
    if(r_name.compare(i.name)==0){
      wanted = &i.region;
      return wanted;
    }
  }
  return nullptr;
}
      





