#include <map>
#include <string>

std::string encodeMorse(char letter)
{
    //return space for all characters not available in Morse code
    if( !(letter <= 90 && letter >= 39) && !(letter >=32 && letter <= 34) ) //return space for all characters not available in Morse code
        return " ";
    if(letter == 42 || letter == 60 || letter == 62)
        return " ";

    static std::map<char, std::string> morse;
    morse['A'] = "._";
    morse['B'] = "_...";
    morse['C'] = "_._.";
    morse['D'] = "_..";
    morse['E'] = ".";
    morse['F'] = ".._.";
    morse['G'] = "__.";
    morse['H'] = "....";
    morse['I'] = "..";
    morse['J'] = ".___";
    morse['K'] = "_._";
    morse['L'] = "._..";
    morse['M'] = "__";
    morse['N'] = "_.";
    morse['O'] = "___";
    morse['P'] = ".__.";
    morse['Q'] = "__._";
    morse['R'] = "._.";
    morse['S'] = "...";
    morse['T'] = "_";
    morse['U'] = ".._";
    morse['V'] = "..._";
    morse['W'] = ".__";
    morse['X'] = "_.._";
    morse['Y'] = "_.__";
    morse['Z'] = "__..";
    morse[' '] = " / ";
    morse['1'] = ".____";
    morse['2'] = "..___";
    morse['3'] = "...__";
    morse['4'] = "...._";
    morse['5'] = ".....";
    morse['6'] = "_....";
    morse['7'] = "__...";
    morse['8'] = "___..";
    morse['9'] = "____.";
    morse['0'] = "_____";
    morse['.'] = "._._._";
    morse[','] = "__..__";
    morse['\''] = ".____.";
    morse['\"'] = "._.._.";
    morse[':'] = "___...";
    morse[';'] = "_._._.";
    morse['?'] = "..__..";
    morse['!'] = "_._.__";
    morse['-'] = "_...._";
    morse['+'] = "._._.";
    morse['/'] = "_.._.";
    morse['('] = "_.__.";
    morse[')'] = "_.__._";
    morse['='] = "_..._";
    morse['@'] = ".__._.";

    return morse[letter] + " "; //return translated code and space for separate each letter
}
