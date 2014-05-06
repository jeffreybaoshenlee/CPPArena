#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

class CCompareStringNoCase {
public:

    bool operator() (const string& str1, const string& str2) const {
        string str1LowerCase;
        str1LowerCase.resize(str1.size());

        transform(str1.begin(), str1.end(), str1LowerCase.begin(), ::tolower);

        string str2LowerCase;
        str2LowerCase.resize(str2.size());

        transform(str2.begin(), str2.end(), str2LowerCase.begin(), ::tolower);

        return (str1LowerCase < str2LowerCase);
    }
};

int main(int argc, char** argv) {
    cout << CCompareStringNoCase()("hello", "world") << endl;
    cout << CCompareStringNoCase()("world", "hello") << endl;
    cout << CCompareStringNoCase()("a", "B") << endl;
    cout << ('a' < 'B') << endl;
    return 0;
}