#include "event.hh"
#include <iostream>

int main(){
    std::ifstream jsonfile("Story.json");
    nlohmann::json Story = nlohmann::json::parse(jsonfile);
    Event gg (0,0, Story);
    Event ff (1,0, Story);
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