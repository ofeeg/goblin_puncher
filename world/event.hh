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
    std::string FlagSelector();
    public:
        Event(int x, int y, const nlohmann::json &jsonFile, bool z=true) : 
            x_coordinate(x), y_coordinate(y), Story(jsonFile), DeleteInitialFlag(z){};
        void DisplayEvent();
        void SetFlags(std::string &flag);
        
    };
       
    
    