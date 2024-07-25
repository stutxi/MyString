#include <iostream>
#include <string>
#include "MyString.h"

using namespace std;

int main() {
    MyString s1("Hello");
    cout << s1 << endl;
    cout << s1[2] << endl;

    MyString s2 = "This is my string";
    cout << s2.find("my") << endl;
    return 0;
}

// g++ -c MyString.cpp
// g++ -c main.cpp
// g++ -o main MyString.o main.o
// ./main