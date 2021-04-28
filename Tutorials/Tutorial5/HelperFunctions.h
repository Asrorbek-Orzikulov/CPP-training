#ifndef _HELPERS_H_
#define _HELPERS_H_

#include <string>
using std::string;

/*******************************************************************
This function expects:
    str - string to be checked

    The function returns true if the given string contains only 
    digits (i.e. only characters that correspond to numbers).
    Otherwise, it returns false.
********************************************************************/
bool is_digit(const string &str);

/*******************************************************************
This function expects:
    str - string to be checked
    chars - one or more characters to find in the string

    The function counts the number of occurrences of `chars` in the
    given string `str` and returns that count.
********************************************************************/
int count_occurence(const string &str, const string &chars);

/*******************************************************************
This function expects:
    array - zero-terminated array of characters to be checked
    chars - one or more characters to find in the string

    The function counts the number of occurrences of `chars` in the
    given array of characters and returns that count.
********************************************************************/
int count_occurence(const char array[], const string &chars);

#endif