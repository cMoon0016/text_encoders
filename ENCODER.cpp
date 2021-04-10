#include <iostream>
#include <algorithm>

std::string encode(std::string text, int encoder = 1) //could add more encoders, for e.g. encoder of Morse code
{
    std::transform(text.begin(), text.end(), text.begin(), ::toupper);
    std::string encoded = "";

    switch(encoder)
    {
        case 1:
        {
            for(int i=0; i<text.length(); i++)
                encoded += encodeLetter(text[i]); //transmit each char to numeric encoder function
            break;
        }
        case 2:
        {
            for(int i=0; i<text.length(); i++)
                encoded += encodeMorse(text[i]); //transmit each char to Morse encoder function
            break;
        }
        case 3:
        {
            for(int i=0; i<text.length(); i++)
                encoded += encodeBacon(text[i]); //transmit each char to Bacon code
            break;
        }
        //here could add more encoders
        default:
            return "Wrong encoder number";

    }

    return encoded;
}

//egzamle of use

int main()
{
    std::string text;
    getline(std::cin, text);

    std::cout<<text<<" = "<<encode(text)<<std::endl; //numeric encode
    std::cout<<text<<" = "<<encode(text, 2)<<std::endl; //Morse encode
    std::cout<<text<<" = "<<encode(text, 3)<<std::endl; //Bacon encode
    return 0;
}

