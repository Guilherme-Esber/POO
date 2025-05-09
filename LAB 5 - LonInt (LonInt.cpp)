#include "LongInt.h"
#include <algorithm>

LongInt::LongInt() {
    for (int i = 0; i < MAX_DIGITS; ++i)
        digits[i] = 0;
}

LongInt::LongInt(const string& number) {
    fromString(number);
}

LongInt::~LongInt() {}

void LongInt::fromString(const string& number) {
    string num = number;
    fill(digits, digits + MAX_DIGITS, 0);
    int len = num.length();
    int j = MAX_DIGITS - 1;

    for (int i = len - 1; i >= 0 && j >= 0; --i, --j)
        digits[j] = num[i] - '0';
}

LongInt LongInt::add(const LongInt& other) const {
    LongInt result;
    int carry = 0;
    for (int i = MAX_DIGITS - 1; i >= 0; --i) {
        int sum = digits[i] + other.digits[i] + carry;
        result.digits[i] = sum % 10;
        carry = sum / 10;
    }
    return result;
}

LongInt LongInt::subtract(const LongInt& other) const {
    LongInt result;
    int borrow = 0;
    for (int i = MAX_DIGITS - 1; i >= 0; --i) {
        int diff = digits[i] - other.digits[i] - borrow;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else
            borrow = 0;
        result.digits[i] = diff;
    }
    return result;
}

ostream& operator<<(ostream& os, const LongInt& num) {
    bool leadingZero = true;
    for (int i = 0; i < LongInt::MAX_DIGITS; ++i) {
        if (leadingZero && num.digits[i] == 0)
            continue;
        leadingZero = false;
        os << num.digits[i];
    }
    if (leadingZero)
        os << "0";
    return os;
}

istream& operator>>(istream& is, LongInt& num) {
    string input;
    is >> input;
    num.fromString(input);
    return is;
}
