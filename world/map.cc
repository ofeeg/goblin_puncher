#include "map.hh"

void Map::InitNodes(){
    int x=0, y = 0; 
    for(x; x < len; x++){
        for(y; y<wid; y++){
            EventList[x+y*wid] = Event(x,y);
            }
        }
    }
void Map::PlayEvent(int x, int y){std::cout <<x+(y*wid)<<": " << "\n"; EventList[x + (y*wid)].DisplayEvent();}

