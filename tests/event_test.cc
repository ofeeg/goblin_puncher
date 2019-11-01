#include "../world/event.hh"
#include <iostream>
/*void PrintTags(Event& test){
     for(auto& i : test.FlagList){
            std::cout << i.tag << ",";
            }
        }*/

int main(){
    Event gg (0,0, Story, false);
    Event ff (1,0, Story);
    gg.DisplayEvent();
    ff.DisplayEvent();
    std::string flag = "SECOND FLAG";
    std::string flag1  = "THIRD FLAG";
    ff.SetFlags(flag);
    ff.SetFlags(flag1);
    ff.DisplayEvent();
    ff.SetFlagWeight(flag , PRIORITY_LEVEL::HIGH);
    ff.DisplayEvent();
    ff.DisplayEvent();
    gg.DisplayEvent();
    //PrintTags(ff);
    //PrintTags(gg);
    std::vector<Flag*> Flags = {&ff.GetFlag(1)};     
    return 0;
    }
