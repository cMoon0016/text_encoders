#include <iostream>
#include <algorithm>

std::string encode(std::string text, int encoder = 1, int key = 3) //could add more encoders
{
    std::transform(text.begin(), text.end(), text.begin(), ::toupper);
    std::string encoded = "";

    for(int i=0; i<text.length(); i++)
    {
        switch(encoder)
        {
        case 1:
        {
            encoded += encodeLetter(text[i]);
            break;
        }
        case 2:
        {
            encoded += encodeMorse(text[i]);
            break;
        }
        case 3:
        {
            encoded += encodeBacon(text[i]);
            break;
        }
        case 4:
        {
            encoded += encodeCaesarCipher(text[i], key);
            break;
        }
        //here could add more encoders
        default:
            return "Wrong encoder number";

        }
    }

    return encoded;
}

//egzamle of use

int main()
{
    std::string text;
    getline(std::cin, text);

    std::cout<<text<<" = "<<encode(text)<<std::endl;
    std::cout<<text<<" = "<<encode(text, 2)<<std::endl;
    std::cout<<text<<" = "<<encode(text, 3)<<std::endl;
    std::cout<<text<<" = "<<encode(text, 4, 5)<<" key = 5"<<std::endl;
    return 0;
}
