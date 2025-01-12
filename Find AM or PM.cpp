#include <iostream>
#include <string>
#include <sstream>
#include <regex>

int main() {
    std::string t;
    std::getline(std::cin, t);

    // Validate time format using regex
    std::regex time_pattern("\\d{1,2}:\\d{2}");
    if (!std::regex_match(t, time_pattern)) {
        std::cout << "INVALIDINPUT" << std::endl;
        return 0;
    }

    // Split the input string at ':'
    size_t pos = t.find(':');
    int a = std::stoi(t.substr(0, pos));
    int b = std::stoi(t.substr(pos + 1));

    // Check and print AM/PM or INVALIDINPUT
    if (a >= 12 && b >= 0 && b < 60 && a <= 24) {
        std::cout << "PM" << std::endl;
    } else if (a < 12 && b >= 0 && b < 60) {
        std::cout << "AM" << std::endl;
    } else {
        std::cout << "INVALIDINPUT" << std::endl;
    }

    return 0;
}

Example 1:
Input:
13:44
Output:
PM
Example 2:
Input:
12:00
Output:
PM
Example 3:
Input:
32:70
Output:
INVALIDINPUT
Example 4:
Input:
05:32
Output:
AM
