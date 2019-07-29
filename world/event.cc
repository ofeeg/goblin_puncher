#include "event.hh"

//Event::Event(int x, int y) :  x_coordinate(x) , y_coordinate(y){};
void Event::getFile(){ std::ifstream jsonfile("Story.json"); Story = nlohmann::json::parse(jsonfile);}
std::string Event::FlagSelector() const {
    std::string currentFlag = Flags[0];
    if(!currentFlag.compare("INITIAL FLAG")){
        std::string InitialFlag = Flags[0];        
        if(DeleteInitialFlag){Flags.erase(Flags.begin()); return InitialFlag;}
        }
    
    return currentFlag;
    //else{}
    }
constexpr void Event::ExtractStoryFromFile() const{
    std::string iffy = "/"+std::to_string(x_coordinate)+"/"+std::to_string(y_coordinate)+"/"+FlagSelector();
    nlohmann::json::json_pointer poinr(iffy);
    EventText = Story.at(poinr);
    }
void Event::DisplayEvent(){
    getFile();
    ExtractStoryFromFile();
    std::cout << EventText << "\n";
    }
void Event::SetFlags(std::string &flag){Flags.push_back(flag);}