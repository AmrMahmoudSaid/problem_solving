#include <iostream>
#include <set>
using namespace std;

string convertToString(const string& s){
    string resultString;
    for (char ch : s) {
        if (std::isalpha(static_cast<unsigned char>(ch))) {
            resultString += tolower(ch);
        }
    }
    return resultString;
}
int main() {
    string w;
    set<char> s;
    string line;
    getline(cin, line);
    line = convertToString(line);
    for (char ch : line) {
        s.insert(ch);
    }
    cout<<s.size();
    return 0;
}
