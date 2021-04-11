char encodeCaesarCipher(char letter, int key)
{
    if(letter < 65 || letter > 90) //if char isn't letter return space (ASCI 32)
        return ' ';

    key = key%26; //because there are 26 letters in alphabet
    letter += key;
    if(letter > 90) //for key > 0 if letter is bigger than 'Z'
        letter = letter%90 + 64; //start from 64 (one below 'A') and add what is above 90
    else if(letter < 65) //for key < 0 if letter is less than 'A'
        letter = 91 - (65 - letter); //start from 91 (one above 'Z') and subtract what is below 65
    return letter;
}
