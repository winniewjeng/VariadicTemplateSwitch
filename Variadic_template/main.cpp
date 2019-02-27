#include <string>
#include <iostream>
#include <vector>
#include "MySwitch.hpp"

int main() {
    
    //MySwitch Switch('a','b','c', "Boop", 5);
    MySwitch<char> Switch(4, 'a','b', 'k','c');
    MySwitch<int> intSwitch(4, 1, 2, 3, 4);
//    MySwitch<string> strSwitch(4, "up", "down", "left", "right");
//
    return 0;
}
