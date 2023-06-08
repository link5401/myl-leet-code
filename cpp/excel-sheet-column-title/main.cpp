#include "../template.hpp"

string convertToTitle(int columnNumber) {
    string str = "";
    while (columnNumber--) {
        char c = char((columnNumber % 26) + 'A');
        str = c+str;
        columnNumber /= 26;
    }
    return str;
}

int main() { cout << convertToTitle(28); }