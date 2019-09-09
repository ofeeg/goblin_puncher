#include "../world/item.hh"

int main(){
    Item item = Item(0, 0, 0, 0, 0,0);
    std::cout << item.GetName() << "\n"  << item.GetDesc() << "\n" << item.GetStats();
    return 0;
    }