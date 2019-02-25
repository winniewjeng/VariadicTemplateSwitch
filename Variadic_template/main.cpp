
//  Make a class called mySwitch that will perform the functionality of a switch statement. The constructor of the class will allow for N parameters. The parameters will be the "condition" [switch(condition)] and the address of which static function in the program to call (case...). Hint: Would templates help you with this since any "condition" must be handled? What tools have we that can handle "infinite" input values?)

#include <string>
#include <iostream>
#include "MySwitch.hpp"

void Output() {
    std::cout<<std::endl;
}

template<typename First, typename ... Strings>
void Output(First arg, const Strings&... rest) {
    std::cout<<arg<<" ";
    Output(rest...);
}

int main() {
    MySwitch Switch(1,2,4, 'c', "Boop");
    
    Output("I","am","a","sentence");
    Output("Let's","try",1,"or",2,"digits");
    return 0;
}
