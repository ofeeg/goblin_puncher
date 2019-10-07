#include "flag.hh"
#include "../nlohmann/json.hpp"
#include <fstream>
#include <iostream>




class Event{
    nlohmann::json Story;
    std::string Subdirectory, EventText;
    std::vector<const Flag*> FlagQueue;
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
        void SetFlagWeight(const std::string &flag, PRIORITY_LEVEL weight);
        void SortAndPopulateQueue(const std::vector<Flag>& compare);
        constexpr Flag& GetFlag(int n){
            if(n>0 && n<=FlagList.size()){
            return FlagList[n-1];
            }
            }
    };
       
    
    