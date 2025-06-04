#ifndef LONGINT_H
#define LONGINT_H

#include <iostream>
#include <string>

using namespace std;

class LongInt {
private:
    static const int MAX_DIGITS = 30;
    int digits[MAX_DIGITS];

public:
    LongInt();
    LongInt(const string& number);
    ~LongInt();

    void read();
    void print() const;

    LongInt add(const LongInt& other) const;
    LongInt subtract(const LongInt& other) const;

private:
    void fromString(const string& number);
};

#endif
