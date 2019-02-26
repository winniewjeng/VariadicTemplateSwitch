

#ifndef MySwitch_hpp
#define MySwitch_hpp

#include <iostream>
#include <string>
#include <map>
using namespace std;

class MySwitch {
    
private:
    
    // a templated map that accepts any var type of key
    template<typename T>
    struct Wrapper {
        typedef map<T, int> myMap;
    };
    
//    Then use it like this:
//    Wrapper<string>::myMap myWrappedMap;
//    myWrappedMap[1] = "Foo";
    
public:
    
    template<typename First, typename ... Strings>
    MySwitch (First arg, const Strings&... rest) {
        Output(arg, rest...);
    }
    
    void Output() {
        // output at the end of the list
        cout << endl;
    }
    
    template<typename First, typename ... Strings>
    void Output(First arg, const Strings&... rest) {
        cout << arg << " ";
//        cout << typeid(arg).name() << endl;
        // map arg as a key in map
        
        // call Output fxn and put the rest of the list as args
        Output(rest...);
    }
    
    // there was an attempt...
    
    void MapArgs() {
        cout << endl;
    }
    
    template<typename First, typename ... Strings>
    void MapArgs(First arg, const Strings&... rest) {
        cout << arg << endl;
        Output(rest...);
//
//        if (rest... == 'a') {
//            cou
//        }
    }
    
    // functions I might need
    
    
};


#endif /* MySwitch_hpp */
