#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

int main() {
    string t, w;
    getline(cin, t);
    for (char &c : t) c = isalpha(c) ? tolower(c) : ' '; // Convert to lowercase and replace non-alphabetic with space
    int c = 0;
    stringstream ss(t);
    while (ss >> w) {
        if (w == "a" || w == "an" || w == "the") c++;
    }
    cout << c << endl;
    return 0;
}

Example Input/Output 1:
Input:
I went to a movie yesterday along with an old man.
Output:
2
Example Input/Output 2:
Input
In 1885 it was banished from the shelves of the Concord Public Library, an act that attracted a lot of publicity and discussion in
the press. It is still frequently in the news, as various schools and school systems across the country either ban it from or restore
it to their classrooms. The texts and illustrations below attempt to capture both the novel's achievement and some aspects of
its controversiality.
Output:
8
