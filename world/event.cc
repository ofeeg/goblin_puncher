#include "event.hh"

void MoveFlagsIntoQueue(std::vector<Flag> input, std::vector<Flag> output){
            for(auto& i : input){
                output.push_back(std::move(i));
                }
            }
std::string Event::FlagSelector(const std::vector<Flag>& compare={}){
    
    if(FlagQueue.empty()){
        std::string SelectedFlag = FlagQueue.front().tag;
        FlagQueue.erase(FlagQueue.begin());
        return SelectedFlag;
        }
    for(auto& i : FlagList){
        std::cout << i.tag << ",";
        }
    std::cout << "\n";
    if(DeleteInitialFlag){
        std::string InitialFlag = FlagList[0].tag;        
        if(!InitialFlag.compare("INITIAL FLAG")){FlagList.erase(FlagList.begin()); DeleteInitialFlag = false; return InitialFlag;}
        }
        
    if(!compare.empty()){
        
        short count = 0;
        std::vector<Flag> HighestFlags;
        std::vector<Flag> HighFlags;
        std::vector<Flag> NormalFlags;
        std::vector<Flag> LowFlags;
        std::vector<Flag> LowestFlags;
        for(auto& i : FlagList){
            if(!i.tag.compare(compare[count].tag)){ 
            switch(i.weight){
                case PRIORITY_LEVEL::HIGHEST:
                    HighestFlags.push_back(i);
                case PRIORITY_LEVEL::HIGH:
                    HighFlags.push_back(i);
                case PRIORITY_LEVEL::NORMAL:
                    NormalFlags.push_back(i);
                case PRIORITY_LEVEL::LOW:
                    LowFlags.push_back(i);
                case PRIORITY_LEVEL::LOWEST:
                    LowestFlags.push_back(i);
            count++;
            }
            }
        MoveFlagsIntoQueue(HighestFlags, FlagQueue);
        MoveFlagsIntoQueue(HighFlags, FlagQueue);
        MoveFlagsIntoQueue(NormalFlags, FlagQueue);
        MoveFlagsIntoQueue(LowFlags, FlagQueue);
        MoveFlagsIntoQueue(LowestFlags, FlagQueue);
        }
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