#include "../world/ability.hh"
#include <iostream>


int main(){
    Ability();
    std::string s = "d";
    Ability(s, TYPES::INT, 1000000000);
    std::cout << "This message means it constructed an abillity.";
    return 0;
    }
