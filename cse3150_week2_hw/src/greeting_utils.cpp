#include "../include/greeting_utils.h"
#include <cstring> // for strlen, strcpy

namespace GreetingUtils {
    std::string create_message(const std::string& name) {
        return "Hello, " + name + "!";
    }
    
    char* format_as_c_string(const std::string& msg) {
        // Dynamically allocate char array on the heap
        char* c_str = new char[msg.length() + 1]; // +1 for null terminator
        
        // Copy the string content into the char array
        for (size_t i = 0; i < msg.length(); i++) {
            c_str[i] = msg[i];
        }
        
        // Add null terminator at the end
        c_str[msg.length()] = '\0';
        
        return c_str;
    }
}
