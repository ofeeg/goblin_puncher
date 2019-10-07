#include "../world/character.hh"


int main(){
    Character q = Character();
    std::cout << q.GetStats() << "\n" << q.GetSpecies() << "\n" << q.GetInventory();
    return 0;
    }