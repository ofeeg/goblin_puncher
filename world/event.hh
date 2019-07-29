#include "../nlohmann/json.hpp"
#include <fstream>
#include <iostream>
class Event{
    nlohmann::json Story;
    std::string Subdirectory, EventText;
    std::vector<std::string> Flags = {"INITIAL FLAG"};
    bool DeleteInitialFlag;
    int x_coordinate, y_coordinate;
    constexpr void ExtractStoryFromFile() const;
    void getFile();
    std::string FlagSelector() const;
    public:
        constexpr Event(int x, int y) : x_coordinate(x), y_coordinate(y){};
        void DisplayEvent();
        void SetFlags(std::string &flag);
        
    };
       
    
    