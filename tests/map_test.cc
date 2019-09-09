#include "../world/map.hh"

int main(){
    Map gg(2, 2);
    gg.PlayEvent(0,1);
    gg.PlayEvent(1,1);
    gg.PlayEvent(1,0);
    return 0;}
