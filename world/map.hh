#ifndef MAP
#define MAP
#include <vector>
#include "event.hh"
 
   
class Map{
  std::vector<Event> EventList;
  int len, wid;
  void InitNodes();
public:
  int area;
  Map(int x, int y): wid(x), len(y){InitNodes(); area=x*y;}
  void PlayEvent(int x, int y);
};
#endif

