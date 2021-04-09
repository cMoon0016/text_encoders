#include <iostream>
#include <algorithm>
#include <map>

std::string encodeLetter(char letter) //function can transalte one char to numeric keyboard code and return it
{
    if(letter < 65 || letter > 97) //for characters which aren't letters function will return space (ASCII 32)
        return " ";

    std::map<char, std::string> keyboard;
    keyboard['A'] = "2";
    keyboard['B'] = "22";
    keyboard['C'] = "222";
    keyboard['D'] = "3";
    keyboard['E'] = "33";
    keyboard['F'] = "333";
    keyboard['G'] = "4";
    keyboard['H'] = "44";
    keyboard['I'] = "444";
    keyboard['J'] = "5";
    keyboard['K'] = "55";
    keyboard['L'] = "555";
    keyboard['M'] = "6";
    keyboard['N'] = "66";
    keyboard['O'] = "666";
    keyboard['P'] = "7";
    keyboard['Q'] = "77";
    keyboard['R'] = "777";
    keyboard['S'] = "7777";
    keyboard['T'] = "8";
    keyboard['U'] = "88";
    keyboard['V'] = "888";
    keyboard['W'] = "9";
    keyboard['X'] = "99";
    keyboard['Y'] = "999";
    keyboard['Z'] = "9999";

    return keyboard[letter];
}
