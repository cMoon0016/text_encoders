#include <iostream>
#include <map>

std::string encodeBacon(char letter)
{
    if(letter > 90 || letter < 65) //for not letters characters return space (ASCI 32)
        return " ";

    std::map<char, std::string> bacon;
    bacon['A'] = "aaaaa";
    bacon['B'] = "aaaab";
    bacon['C'] = "aaaba";
    bacon['D'] = "aaabb";
    bacon['E'] = "aabaa";
    bacon['F'] = "aabab";
    bacon['G'] = "aabba";
    bacon['H'] = "aabbb";
    bacon['I'] = "abaaa";
    bacon['J'] = "abaaa";
    bacon['K'] = "abaab";
    bacon['L'] = "ababa";
    bacon['M'] = "ababb";
    bacon['N'] = "abbaa";
    bacon['O'] = "abbab";
    bacon['P'] = "abbba";
    bacon['Q'] = "abbbb";
    bacon['R'] = "baaaa";
    bacon['S'] = "baaab";
    bacon['T'] = "baaba";
    bacon['U'] = "baabb";
    bacon['V'] = "baabb";
    bacon['W'] = "babaa";
    bacon['X'] = "babab";
    bacon['Y'] = "babba";
    bacon['Z'] = "babbb";

    return bacon[letter];
}
