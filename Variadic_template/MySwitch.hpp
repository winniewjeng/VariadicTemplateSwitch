#ifndef MySwitch_hpp
#define MySwitch_hpp

#include <iostream>
#include <string>
#include <map>

typedef void(*fptr)(); // fptr is a void function pointer
typedef char* cptr;  // iptr is a char pointer

using namespace std;

class MySwitch {
    
private:
    
    
    
public:
    
    template<typename ... Strings>
    MySwitch (int num, const Strings&... rest) {
        Output(rest...);
        auto list = {rest...};
        
        for (auto item : list) {
            cout << Map(item);
        }
    }
    
    template<typename First, typename ... Strings>
    void Output(First arg, const Strings&... rest) {
        cout << arg << " ";
        // call Output fxn and put the rest of the list as args
        Output(rest...);
    }
    
    void Output() {
        // output at the end of the list
        cout << endl;
    }
    void nothing(){}
    
    string Map(char item) {
        map<char, string> myMap;
        myMap[item] = "000\n";
        myMap['a'] = "aaa\n";
        myMap['b'] = "bbb\n";
        myMap['c'] = "ccc\n";
        myMap['d'] = "ddd\n";
        
        
        return myMap.find(item)->second;
    }
    
    
    
};


#endif /* MySwitch_hpp */
