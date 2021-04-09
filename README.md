# Text encoders

In this repository I will put some text encoders. For now there are:

# General ENCODER
Function which have two arguments: string text and int encoder (default 1). Variable 'text' include text which we want to encode using one of the available encoder (for now there is only one, but I will adding others in the future). Second argument means which encoder function should use, for now: 

1 - numeric encoder

Function return encoded string

# Numeric encoder
This encoder is one function whcich have one char argument and return string. You can use it to translate letter to phone numeric code like in old phones. For e.g. letter 'A' is '2', letter 'D' is '3'. If the argument won't be letter (ASCII 65-97) function will return space (ASCII 32). Function use map to translate capital letters to numeric code, it isn't neccesary to translate small letters because in general function "ENCODER" (which is calling suitable function for each character) each letter in text is converted to capitalised ones.

# Morse encoder
I will put this encoder in the future
