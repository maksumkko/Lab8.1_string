#include <iostream>
#include <string>
using namespace std;

int FindThirdCommaIndex(const string& s) {
    int count = 0;
    size_t pos = 0;
    while ((pos = s.find(',', pos)) != string::npos) {
        count++;
        if (count == 3) {
            return pos;
        }
        pos++;
    }
    return -1;
}

string ReplaceCommasWithStars(string& s) {
    size_t pos = 0;
    while ((pos = s.find(',', pos)) != string::npos) {
        s.replace(pos, 1, "**");
        pos += 2;
    }
    return s;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    int thirdCommaIndex = FindThirdCommaIndex(str);
    if (thirdCommaIndex != -1) {
        cout << "Index of third comma: " << thirdCommaIndex << endl;
    }
    else {
        cout << "There is no third comma in the string." << endl;
    }

    string dest = ReplaceCommasWithStars(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    return 0;
}