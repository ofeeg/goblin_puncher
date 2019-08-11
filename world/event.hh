#include "../nlohmann/json.hpp"
#include <fstream>
#include <iostream>
#include <queue>

enum  class  PRIORITY_LEVEL: short{
    HIGHEST = 1,
    HIGH = 2,
    NORMAL= 3,
    LOW = 4,
    LOWEST = 5
    };
    

struct Flag{
    std::string tag;
    PRIORITY_LEVEL weight = PRIORITY_LEVEL::HIGHEST;
    Flag(std::string s) : tag(s){};
    };
class Event{
    nlohmann::json Story;
    std::string Subdirectory, EventText;
    std::vector<Flag> FlagList = {Flag("INITIAL FLAG")};
    bool DeleteInitialFlag;
    int x_coordinate, y_coordinate;
    void ExtractStoryFromFile();
    std::string FlagSelector(const std::vector<Flag>& compare);
    public:
        Event(int x, int y, const nlohmann::json &jsonFile, bool z=true) : 
            x_coordinate(x), y_coordinate(y), Story(jsonFile), DeleteInitialFlag(z){};
        void DisplayEvent();
        void SetFlags(std::string &flag);
        
    };
       
    
    