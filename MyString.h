#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>

class MyString
{
private:
    char *data; // pointer to store string data
    size_t length; // size of the string

public:
    // default ctor
    MyString();

    // parameterized ctor
    MyString(const char *str);

    // copy ctor
    MyString(const MyString &other);

    // destructor
    ~MyString();

    // Assignment operator
    MyString &operator=(const MyString &other);

    // Concatenation (+=) operator
    MyString &operator+=(const MyString &other);

    // Subscript ([]) operator
    char &operator[](size_t index);

    // Get size of the string
    size_t size() const;

    // Check if string is empty
    bool empty() const;

    // Return C-style string
    const char *c_str() const;

    // Append string
    void append(const MyString &other);

    // Find substring
    int find(const MyString& substr) const;

    // Erase substring
    void erase(size_t pos, size_t len);

    // Overload insertion operator for easy output
    friend std::ostream &operator<<(std::ostream &os, const MyString &str);
};

#endif // MYSTRING_H