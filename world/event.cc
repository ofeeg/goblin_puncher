#include "event.hh"

//Event::Event(int x, int y) :  x_coordinate(x) , y_coordinate(y){};
void Event::getFile(){ std::ifstream jsonfile("Story.json"); Story = nlohmann::json::parse(jsonfile);}
void Event::ExtractStoryFromFile(){EventText = Story.at("hello");}
void Event::DisplayEvent(){
    getFile();
    ExtractStoryFromFile();
    std::cout << EventText;
    }