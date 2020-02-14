#include "../world/character.hh"

std::string s = "DUMMY";
std::string d = "THIS IS A DUMMY";
std::string a = "derp";
std::string f = "deofaeofj THE";
std::string g = "pop";

Item dummy_item=Item(0,0,0,0,0,0, EQUIP_TYPES::WEAPON, g,  s, d);
Item nothing=Item();
Item nothing2=Item();

Ability dummy_ability(PASSIVE,"DUMMY PASSIVE", TYPES::ATK, 100);
Ability dummy_ability2(ACTIVE, "SHIN DUMMY", TYPES::ATK, 2000);
Ability dummy_ability3(ACTIVE, "DUMMY ACTIVE", TYPES::DEF, 69);
 

int main(){
    Character q = Character();
    std::vector<Item*>y_inv{&dummy_item, &nothing2};
    std::cout << y_inv.empty();
    Character y = Character(0,0,0,0,0,0, a, f, g, y_inv);
    std::vector<Item*> o_inv{&nothing, &dummy_item};
    std::vector<Ability*> o_act{&dummy_ability3};
    std::vector<Ability*> o_pas{&dummy_ability, &dummy_ability2};
    Combatant o = Combatant(0,0,0,0,0,0, a, f, g, o_inv, o_pas, o_act);
    o.Equip(o_inv[1]);    
    std::cout << q.GetStats() << "\n" << q.GetSpecies() << "\n" << q.GetInventory() <<"\n";
    std::cout << y.GetStats() << "\n" << y.GetSpecies() << "\n" << y.GetInventory();
    std::cout << o.GetStats() << "\n" << o.GetSpecies() << "\n" << o.GetInventory() << 
        "\n" << o.GetAbilitiesAsStr() << "\n" << o.GetAbility(dummy_ability.Name, PASSIVE)->ScaleDmg + o.GetSTR() 
        + o.GetAbility(dummy_ability3.Name, ACTIVE)->ScaleDmg <<"\n" << o.GetEquippedItemsAsStr();
    std::cout << "\n" << o.GetAbility(dummy_ability3.Name, PASSIVE)->Name;
    std::cout << "\n" << o.GetActiveAbilitiesAsStr() << "\n" << o.GetPassiveAbilitiesAsStr();
    const std::vector<Ability*> dcdscd = o.GetPassiveAbilities();
    std::cout << &dcdscd;
    return 0;
    }
