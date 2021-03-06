//#include "character.hh"
#include "map.hh"
#include<utility>
#ifndef WORLD
#define WORLD

class Combatant;
class Item;

struct partition{
  std::string name;
  std::vector< std::pair<int, int>> region;
  partition(std::string n, std::vector<std::pair<int, int>>& r) : region(r), name(n){}
};


struct enemy_partition{
  std::string name;
  std::vector<Combatant*> region;
  enemy_partition(std::string n, std::vector<Combatant*>& r) : region(r), name(n){}
};

  
struct item_partition{
  std::string name;
  std::vector<Item*> region;
  item_partition(std::string n, std::vector<Item*>& r) : region(r), name(n){}
};


class World{
  Map WorldMap;
  std::vector<enemy_partition> EnemyLists;
  std::vector<partition> RegionList;
  std::vector<item_partition> ItemDropLists;
public:
  World(int x=1, int y=1, std::vector<partition> r_list={}, std::vector<enemy_partition> e_list={}, std::vector<item_partition> i_list={}) :  WorldMap(Map(x,y)), EnemyLists(e_list), RegionList(r_list), ItemDropLists(i_list){}
  void AccessLocation(int x, int y);
  std::vector<std::pair<int, int>>* GetRegion(std::string r_name);
  std::string GetRegionName(int x, int y);
  std::vector<Combatant*>* GetEnemies(std::string r_name);
  std::vector<Item*>* GetItems(std::string r_name);
};

#endif
