#ifndef MySwitch_hpp
#define MySwitch_hpp

#include <iostream>
#include <string>
#include <map>

typedef void(*fptr)(); // fptr is a void function pointer
typedef char* cptr;  // iptr is a char pointer

using namespace std;


template<typename T>
class MySwitch {
    
private:
    
    map<T, string> myMap;

    
public:
    
    template<typename ... Strings>
    MySwitch (int num, const Strings&... rest) {
        Output(rest...);
        auto list = {rest...};
        
        for (auto item : list) {
            cout << Map(item);
        }
    }
    
    string Map(T item) {
        
        myMap[item] = "000\n";
        myMap['a'] = "aaa\n";
        myMap['b'] = "bbb\n";
        myMap['c'] = "ccc\n";
        myMap['d'] = "ddd\n";
        myMap[3] = "333\n";
        
//        myMap[] = "right\n";
        
        return myMap.find(item)->second;
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
    
    
    
    
};


#endif /* MySwitch_hpp */
