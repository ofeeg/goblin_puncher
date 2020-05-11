#include "world.hh"
#include <stdexcept>

void World::AccessLocation(int x, int y){
  this->WorldMap.PlayEvent(x, y);
}

std::vector<std::pair<int, int>>* World::GetRegion(std::string r_name){
  std::vector<std::pair<int, int>>* wanted; 
  for(partition& i : this->RegionList){
    if(r_name.compare(i.name)==0){
      wanted = &i.region;
      return wanted;
    }
  }
  throw std::invalid_argument("Name does not exist");
}
std::vector<Combatant*>* World::GetEnemies(std::string r_name){
  std::vector<Combatant*>* wanted; 
  for(enemy_partition& i : this->EnemyLists){
    if(r_name.compare(i.name)==0){
      wanted = &i.region;
      return wanted;
    }
  }
  throw std::invalid_argument("Name does not exist");
}


std::vector<Item*>* World::GetItems(std::string r_name){
  std::vector<Item*>* wanted; 
  for(item_partition& i : this->ItemDropLists){
    if(r_name.compare(i.name)==0){
      wanted = &i.region;
      return wanted;
    }
  }
  throw std::invalid_argument("Name does not exist"); 
}





