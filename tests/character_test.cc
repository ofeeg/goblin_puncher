#include "../world/character.hh"

std::string s = "DUMMY";
std::string d = "THIS IS A DUMMY";
std::string a = "derp";
std::string f = "deofaeofj THE";
std::string g = "pop";
Item dummy_item=Item(0,0,0,0,0,0, s, d);
Item nothing=Item();
Item nothing2=Item();
int main(){
    Character q = Character();
    std::vector<Item*>y_inv{&dummy_item, &nothing};
    std::cout << y_inv.empty();
    Character y = Character(0,0,0,0,0,0, a, f, g, y_inv);
    std::vector<Item*> o_inv{&nothing};
    Combatant o = Combatant(0,0,0,0,0,0, a, f, g, o_inv);    
    std::cout << q.GetStats() << "\n" << q.GetSpecies() << "\n" << q.GetInventory() <<"\n";
    std::cout << y.GetStats() << "\n" << y.GetSpecies() << "\n" << y.GetInventory();
    std::cout << o.GetStats() << "\n" << o.GetSpecies() << "\n" << o.GetInventory() << o.GetAbilitiesAsStr();
    return 0;
    }