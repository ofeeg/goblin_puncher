#include <vector>
#include "event.hh"

struct Map2DNode{
    int x;
    int y;
    std::vector<Event> Events;
    };
    
class Map{
    std::vector<Map2DNode> NodeList;
    int len, wid;
    constexpr void InitNodes();
    public:
        Map(int x, int y): wid(x), len(y){NodeList.reserve(len * wid);}
        void PlayNode(int x, int y);
    }; 