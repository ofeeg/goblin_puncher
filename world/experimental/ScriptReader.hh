#pragma once
#include "../nlohmann/json.hpp"

class StoryReader{
    json Story;
    ScriptReader(json file) : Story(file){}
    public:
        std::string ReadEvent(int x, int y){
                    
     
