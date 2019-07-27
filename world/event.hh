#include "../nlohmann/json.hpp"
#include <fstream>
#include <iostream>
class Event{
    nlohmann::json Story;
    std::string Subdirectory, EventText;
    std::vector<std::string> Flags = {"INITIAL FLAG"};
    bool DeleteInitialFlag;
    int x_coordinate, y_coordinate;
    void ExtractStoryFromFile();
    void getFile();
    std::string FlagSelector();
    public:
        Event(int x, int y, bool z=true) : x_coordinate(x), y_coordinate(y), DeleteInitialFlag(z){};
        void DisplayEvent();
        void SetFlags(std::string &flag);
        
    };
       
    
    