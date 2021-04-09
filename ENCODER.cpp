#include <iostream>
#include <algorithm>

std::string encode(std::string text, int encoder = 1) //could add more encoders, for e.g. encoder of Morse code
{
    std::transform(text.begin(), text.end(), text.begin(), ::toupper);
    std::string encoded = "";

    if(encoder == 1)
    {
        for(int i=0; i<text.length(); i++)
            encoded += encodeLetter(text[i]); //transmit each char to encoder function
    }
    //here could add more encoders

    return encoded;
}

//egzamle of use

int main()
{
    std::string text;
    getline(std::cin, text);

    std::cout<<text<<" = "<<encode(text);
    return 0;
}
