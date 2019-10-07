#include "../world/item.hh"

int main(){
    Item item = Item();
    std::cout << item.GetName() << "\n"  << item.GetDesc() << "\n" << item.GetStats() << "\n" << 1+item.GetHP() << "\n";
    Equipment testEq = Equipment();
    std::cout << testEq.GetName() << "\n"  << testEq.GetDesc() << "\n" << testEq.GetStats() << "\n" << 1+testEq.GetHP() << "\n" << testEq.GetEff();
    return 0;
    }
