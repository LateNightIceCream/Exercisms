#include "isogram.h"

// ascii code 65 (A) ... 122 (z)
// this includes some nonalphabetic chars
// but they are not hypen or space
#define ASCII_A 65
#define ASCII_a 97

bool is_isogram (const char phrase[]) {

    if (!*phrase) {
        return true;
    }

    // on smaller architectures use e.g. multiple 32bit ints
    uint64_t appearanceInt = 0;
    uint64_t shiftedChar   = 0;

    int offsetChar = 0;

    int i = 0;
    while (phrase[i] != '\0') {

        // lazy upper case conversion
        // offset char to range 0 (A) ... 57 (z)
        if (phrase[i] >= ASCII_a) {
            offsetChar = phrase[i] - ASCII_a;
        } else {
            offsetChar = phrase[i] - ASCII_A;
        }

        if (offsetChar >= 0) {

            // map the char to a specific bit
            shiftedChar = 1UL << offsetChar;

            // check if the bit of the character has been set before
            if ((appearanceInt & shiftedChar) > 0) {
                return false;
            }

            // set the bit corresponding to the character
            appearanceInt |= shiftedChar;
        }

        i++;
    }

    return true;

}
