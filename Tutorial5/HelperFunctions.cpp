#include "HelperFunctions.h"
#include <cctype>

bool is_digit(const string &str_to_check) {
    for (const char &character: str_to_check) {
        if (not isdigit(character))
            return false;
    }
    return true;
}

int count_occurence(const string &str, const string &chars) {
    int count {};
    size_t char_length {chars.length()};
    size_t current_pos {};
    while (str.find(chars, current_pos) != string::npos) {
        count++;
        current_pos = str.find(chars, current_pos) + char_length;
    }
    return count;
}

int count_occurence(const char array[], const string &chars) {
    string str {array};
    return count_occurence(str, chars);
}
