#include "map.hh"

constexpr void Map::InitNodes(){int x=0, y = 0;  }
void Map::PlayNode(int x, int y){std::cout <<x+(y*wid)<<": " << &NodeList[x + (y*wid)] << "\n";}


