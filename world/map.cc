#include "map.hh"

void Map::InitNodes(){
  int x=0, y = 0;
  for(y; y < this->len; y++){
    x=0;
    for(x; x < this->wid; x++){
      this->EventList.push_back(Event(x,y,Story));
    }
  }
}

void Map::PlayEvent(int x, int y){
  this->EventList[x+y*this->wid].DisplayEvent();
}


