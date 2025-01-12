#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> days = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    std::string start_day;
    int d;

    std::cin >> start_day;
    std::cin >> d;

    int start_index = 0;
    for (int i = 0; i < days.size(); i++) {
        if (days[i] == start_day) {
            start_index = i;
            break;
        }
    }

    std::string result_day = days[(start_index + (d - 1)) % 7];
    std::cout << result_day << std::endl;

    return 0;
}

Example 1:
Input
MON
10
Output:
WED
Example 2:
Input:
FRI
24
Output:
SUN
