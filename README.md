# Text encoders

In this repository I will put some text encoders. For now there are:

# General ENCODER
Function which have two arguments: string text and int encoder (default 1). Variable 'text' include text which we want to encode using one of the available encode. Second argument means which encoder function should use, for now: 

1 - numeric encoder

2 - Morse encoder

Function return encoded string

# Numeric encoder
This encoder is one function whcich have one char argument and return string. You can use it to translate letter to phone numeric code like in old phones. For e.g. letter 'A' is '2', letter 'D' is '3'. If the argument won't be letter (ASCII 65-90) function will return space (ASCII 32). Function use map to translate capital letters to numeric code, it isn't neccesary to translate small letters because in general function "ENCODER" (which is calling suitable function for each character) each letter in text is converted to capitalised ones.

# Morse encoder
This encoder is one function whcich have one char argument and return string. You can use it to translate letter to Morse code. If the char argument won't be character available in Morse code function will return space (ASCI 32), but if char will be space function will return " / " for separate each word. Function also return space after each character.
Function use map to translate characters to Morse code; it isn't neccesary to translate small letters because in general function "ENCODER" (which is calling suitable function for each character) each letter in text is converted to capitalised ones.
