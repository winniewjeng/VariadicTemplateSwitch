

#ifndef MySwitch_hpp
#define MySwitch_hpp

#include <iostream>
#include <string>
using namespace std;


class MySwitch {
    
private:
    
    
public:
    
    template<typename First, typename ... Strings>
    MySwitch (First arg, const Strings&... rest) {
        Output(arg, rest...);
        
    }
    
    void Output() {
        std::cout<<std::endl;
    }
    
    template<typename First, typename ... Strings>
    void Output(First arg, const Strings&... rest) {
        std::cout<<arg<<" ";
        Output(rest...);
    }
    
};


#endif /* MySwitch_hpp */
