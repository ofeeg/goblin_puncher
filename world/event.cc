#include "event.hh"


std::string Event::FlagSelector(const std::vector<Flag>& compare={}){
    for(auto& i : FlagList){
        std::cout << i.tag << ",";
        }
    std::cout << "\n";
    if(DeleteInitialFlag){
        std::string InitialFlag = FlagList[0].tag;        
        if(!InitialFlag.compare("INITIAL FLAG")){FlagList.erase(FlagList.begin()); DeleteInitialFlag = false; return InitialFlag;}
        }
    if(!compare.empty()){
        
        }
    else{
        std::string SelectedFlag = FlagList[0].tag;
        return SelectedFlag;
        }
    }
void Event::ExtractStoryFromFile(){
    std::string iffy = "/"+std::to_string(x_coordinate)+"/"+std::to_string(y_coordinate)+"/"+FlagSelector();
    nlohmann::json::json_pointer poinr(iffy);
    EventText = Story.at(poinr);
    }
void Event::DisplayEvent(){
    ExtractStoryFromFile();
    std::cout << EventText << "\n";
    }
void Event::SetFlags(std::string &flag){FlagList.push_back(flag);}