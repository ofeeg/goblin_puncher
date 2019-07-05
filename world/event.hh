#include "../nlohmann/json.hpp"
#include <fstream>
#include <iostream>
class Event{
    nlohmann::json Story;
    std::string Subdirectory, EventText;
    int x_coordinate, y_coordinate;
    void ExtractStoryFromFile();
    void getFile();
    public:
        Event(int x, int y) : x_coordinate(x), y_coordinate(y){};
        void DisplayEvent();
        
    };
       
    
    