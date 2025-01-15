#include <iostream>
#include <string>
using namespace std;

int main() {
    string date, month;
    cin >> date;

    string months[] = {"January", "February", "March", "April", "May", "June", 
                       "July", "August", "September", "October", "November", "December"};
    
    int m = stoi(date.substr(3, 2)); // Extract the month part from the date
    month = months[m - 1]; // Map the month number to its name

    cout << month << endl;
    return 0;
}

Example Input/Output 1:
Input:
23-12-2016
Output:
December
