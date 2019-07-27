#include "map.hh"

constexpr void Map::InitNodes(){int x=0, y = 0;}
void Map::PlayEvent(int x, int y){std::cout <<x+(y*wid)<<": " << &EventList[x + (y*wid)] << "\n";}


