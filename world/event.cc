#include "event.hh"

//Event::Event(int x, int y) :  x_coordinate(x) , y_coordinate(y){};
void Event::ExtractStoryFromFile(){EventText = "Hello World!";}
void Event::DisplayEvent(){
    ExtractStoryFromFile();
    std::cout << EventText;
    }