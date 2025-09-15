#include <iostream>
#include <string>
#include "greeting_utils.h"

int main() {
    std::string name;
    std::cout << "Please enter your name: ";
    std::getline(std::cin, name);
    std::string greeting = GreetingUtils::create_message(name);
    char* c_greeting = GreetingUtils::format_as_c_string(greeting);
    std::cout << std::endl << c_greeting << std::endl;
    delete[] c_greeting;
    
    return 0;
}
