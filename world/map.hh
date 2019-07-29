#include <vector>
#include "event.hh"

    
class Map{
    std::vector<Event> EventList;
    int len, wid;
    void InitNodes();
    public:
        Map(int x, int y): wid(x), len(y){EventList.reserve(len * wid);}
        void PlayEvent(int x, int y);
    }; 