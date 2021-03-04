
#include <iostream>
#include <stdint.h>
#include <string>

int main()
{
    std::string s = "Hello World";
    std::cout << s << "\n";
   
    std::cout << s.length()<<"\n";
    std::cout <<s.erase(1)<< "\n" << s[s.size() - 1] << "\n";
}

