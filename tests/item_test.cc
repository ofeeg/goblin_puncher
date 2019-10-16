#include "../world/item.hh"



int main(){
    std::string DUMMY = "dummy";
    Item item = Item();
    std::cout << item.GetName() << "\n"  << item.GetDesc() << "\n" << item.GetStats() << "\n" << 1+item.GetHP() << "\n";
    Item  testEq = Item(0,0,0,0,0,0,EQUIP_TYPES::WEAPON,DUMMY);
    std::cout << testEq.GetName() << "\n"  << testEq.GetDesc() << "\n" << testEq.GetStats() << "\n" << 1+testEq.GetHP() << "\n" << testEq.GetEff();
    return 0;
    }
