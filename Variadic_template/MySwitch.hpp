#ifndef MySwitch_hpp
#define MySwitch_hpp

#include <iostream>
#include <string>
#include <map>

using namespace std;

template<typename T>
class MySwitch {
    
private:
    
    map<T, string> myMap;
    // create a vector<T> keys
    
public:
    
    template<typename ... Strings>
    MySwitch (int num, const Strings&... rest) {
        Output(rest...);
        auto list = {rest...};
        
        for (auto item : list) {
            cout << Map(item);
        }
        cout << endl;
    }
    
    
    string Map(T item) {
        myMap[item] = "";
        myMap['a'] = "key is a\n";
        myMap['b'] = "key is b\n";
        myMap['c'] = "key is c\n";
        myMap[1] = "key is 1\n";
        myMap[2] = "key is 2\n";
        myMap[3] = "key is 3\n";

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
