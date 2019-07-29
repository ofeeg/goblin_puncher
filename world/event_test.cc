#include "event.hh"
#include <iostream>

int main(){
    constexpr Event gg (0,0);
    constexpr Event ff (1,0);
    // gg.getFile()
    gg.DisplayEvent();
    ff.DisplayEvent();
    std::string flag = "SECOND FLAG";
    std::string flag1  = "THIRD FLAG";
    ff.SetFlags(flag1);
    ff.SetFlags(flag);
    ff.DisplayEvent();
    //std::cout << gg;
    return 0;
    }