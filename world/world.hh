#ifndef WORLD
#define WORLD
#include "character.hh"
#include "map.hh"

class World{
  Map WorldMap;
  std::vector<std::vector<Combatant>> EnemyLists;
  std::vector<std::vector<int>> RegionList;
  std::vector<std::vector<Item>> ItemDropLists;
public:
  World(int x=1, int y=1, std::vector<std::vector<Combatant>> e_list={}, std::vector<std::vector<int>> r_list={}, std::vector<std::vector<Item>> i_list={}) :  WorldMap(Map(x,y)), EnemyLists(e_list), RegionList(r_list), ItemDropLists(i_list){}
  void AccessLocation(int x, int y);
};

#endif
