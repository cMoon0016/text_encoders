#include <string>

std::string encodeCaesarCipher(char letter, int key)
{
    if (letter < 'A' || letter > 'Z')
        return std::string(1, ' ');
        
    key %= 26;
    if (key == 0)
        return std::string(1, letter);

    letter = 'A' + ((letter - 'A' + key) % 26);

    return std::string(1, letter);
}
