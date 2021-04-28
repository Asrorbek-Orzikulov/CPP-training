#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

string encrypt_msg(const string &message, const string &alphabet, const string &key);
string decrypt_msg(const string &message, const string &alphabet, const string &key);

int main() {
    cout << std::boolalpha << endl;
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string message {};
    cout << "Enter your message: ";
    getline(cin, message);
    
    string encrypted {};
    encrypted = encrypt_msg(message, alphabet, key);
    cout << "Encrypted message is: " << encrypted << endl;
    
    string decrypted {};
    decrypted = decrypt_msg(encrypted, alphabet, key);
    cout << "Decrypted message is: " << decrypted << endl;
    cout << "The input matches the decryption: " << (message == decrypted);
    cout << endl;

    return 0;
}

/*******************************************************************
This function expects:
    message - a message to be encrypted
    alphabet - a list of symbols to be substituted
    key - symbols to be used instead of the alphabet's elements

    The function substitutes key symbols for alphabet symbols and
    returns the resulting string.
********************************************************************/
string encrypt_msg(const string &message, const string &alphabet, const string &key) {
    string changed_msg {};
    for (char symbol: message) {
        if (isalpha(symbol)) {
            size_t char_pos {};
            char_pos = alphabet.find(symbol);
            changed_msg += key.at(char_pos);
        } else {
            changed_msg += symbol;
        }
    }
    return changed_msg;
}

/*******************************************************************
This function expects:
    message - a message to be decrypted
    alphabet - a list of symbols that have been substituted in the
               encryption process
    key - symbols used instead of the alphabet's elements in the
          encryption process

    The function substitutes alphabet symbols for key symbols and
    returns the resulting string.
********************************************************************/
string decrypt_msg(const string &message, const string &alphabet, const string &key) {
    string changed_msg {};
    for (char symbol: message) {
        if (isalpha(symbol)) {
            size_t char_pos {};
            char_pos = key.find(symbol);
            changed_msg += alphabet.at(char_pos);
        } else {
            changed_msg += symbol;
        }
    }
    return changed_msg;
}
