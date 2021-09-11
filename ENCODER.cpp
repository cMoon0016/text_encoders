#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>
#include <map>

// no header, need to declare used encodeXyz functions :D

std::string encodeLetter(char);
std::string encodeMorse(char);
std::string encodeBacon(char);
std::string encodeCaesarCipher(char, int);

using encoder_f = std::function<std::string(char)>;

std::string encode(std::string text, encoder_f encoder)
{
    return std::accumulate(text.begin(), text.end(), std::string(""),
                           [encoder](std::string acc, char c) { return acc + encoder(::toupper(c)); });
}

//egzamle of use

int main()
{
    using namespace std::placeholders;

    std::map<int, encoder_f> dispatcher;
    dispatcher.emplace(std::make_pair(1, encoder_f(encodeLetter)));
    dispatcher.emplace(std::make_pair(2, encodeMorse));
    dispatcher.emplace(std::make_pair(3, encodeBacon));
    dispatcher.emplace(std::make_pair(4, std::bind(encodeCaesarCipher, _1, 5)));
    // here could add more encoders and variations, eg. ROT13
    // note that I can add more encoders without changing "encode" function above!
    // now the code has meet the OPEN (for extending) / CLOSE (for modification) principle ("Oh" in SOLID)
    dispatcher.emplace(std::make_pair(5, std::bind(encodeCaesarCipher, _1, 13)));
    
    std::string text;
    getline(std::cin, text);

    std::cout << text << " = " << encode(text, dispatcher.at(1)) << std::endl;
    std::cout << text << " = " << encode(text, dispatcher.at(2)) << std::endl;
    std::cout << text << " = " << encode(text, dispatcher.at(3)) << std::endl;
    std::cout << text << " = " << encode(text, dispatcher.at(4)) << " (key = 5)"<< std::endl;

    return 0;
}

