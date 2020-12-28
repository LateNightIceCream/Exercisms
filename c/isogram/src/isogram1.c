#include "isogram.h"
#include <stdio.h>
#include <ctype.h>

#define TESTSTRING "3ebWWEDAAh9HHSvoHUsHbWg75svcEj9rY5dJ8iGPIsUrRchygAvANi3IWnKHsCbwAmG4tmcDrfUidxgkJ9g4NdMe71JWoJoOAlAidXQmUreg0RWcHWH9VDta7Q2WztoZfqRJl3z1jP7Zx6lVBBXBq9M2Y7YFcZrDhOl3000ZnJmSUWk8DMi6600wMtWIMGOLg9dyd0xVgd9ibbC6fBcL2F4Wn3QDTZ5xKfgvlkAVTGivkt96kGWZtXMsonsFk2PddopTB8I4DJ5KoWtNyS3QBTVWAazou9nlKbJvl7uafxZ2dtY2WNOJWL9gXu5OSIf2qoLPiCMwhlwmLVwkc8odu8AyKxlmqJm5tNO1TFgHtDmBcUCR6njFu7B4tcfhPBJMRL6A7zehab3FXaOQgbboYWmqahZBuOKKeCUuk9FbHujoGwEcy4PGJFTgC8ctMPvRrqHJQAAgRPbmSvDQxIj2fe2IxCGd0xL4ucBj9VD11e5q9f5bRqnf8xDb6ACPFeYNCj876TrJk10cWAR207IwqMboerP3AYltHMX7nfqXXMdAzcbAU61gsJ97033ru3Q95VmazlkwzP2wxZhdJxSbEydpwHC7CNS5IZQRne74t0MgRt4R7Il8STwIhe9Dp6OZsLZivPIcZzZ3qfmlEvfK9W34C1KkFf9bIYdAMPOay8YOStnDYQyOexG4wOS5byARcOAnKXqZaJNcmW9zQfsBkUUSbYqyKKJ2jmfzJIMHhcOgXzbs1zdyRyWCdHrqiL7PSWYM3ML5bUmVOYuhstsGJi69jDWcWpmWb6PfNwyyKDml8IwYpDDJNSpGZUAhCk2LsHsLbyU5Ko1iqHf0cK8tciuhQCpt5caT4yZejBdB6MeMsBrdSt1edCfIFczze5jkjkI83rNpwyRv3gxy8N5pwq1erxJGRIzhnRLyEHPJMYgYB6T4UaTVOAriyYsDTdQDH7tDLrDH1xoU57lcuZWByKSwB0hJFaLyhfGDLBxRJX6959IAvtaNBzkOKh8XQ2s8FPEvNw1300isDp1IC1jdphEWHWMFcXzsiQvsBhoMiZO220nlrzBjMX62escVvOXjlpp8GKktZDVicrfHbJZvb8nQ9TBxF79CP8Tw2lsMYHrkIqIoSxznTiyF6fzAqmOJ92KcAHJwFPwgOMqqzqXc1XdIUxnjqYuj6m9lliWddQw8K4Js5ic8rllmDuKOF6TbpZ4LaR17woikwKcXediFNEyY0bxAKpaptvhp1IwCwcQmVdHH5LuEXm0Nj0Q9nCfYQ0CsOfnbFOsDlksPB9kObPJUNxCggIz2dRVkzanP9HySIkak45xQQrzOyttOQvK6ikWNXDbQzQFG0J2iLtUPfJ1otYoDAOlH2Mc8c2wEdrWOtOQvqAyiXjYuH6aZ9tp5zCzwxuXoGLbwPRmpJ2qNLIBowpVNTA2Gtgk7t5xaXQPjOZrhuzKxcDMUPIpfmaVDi6H5HVY47VPq86obmlOrfzewnCQ1zQx8xreLMNPp8PzmenyqoJ67Y7mUTnWI4z5fH4v0oqOQTTGukbxIGDqMjvTXFaYdmCUBjAujmsLcYKtNTNU3hAWInCPEUcGYcBQQGLm7irSaiaXuMpZscc3Jqp2iAJ4NbiiZ8cdO4HjUBKI3nN48fap5pi4xnF7oPbhaTyz42insKFhqbuvQaQxfXPWtBdEBFvmD8BTr8OIwxEFbeYtiORL9NwXrFuL6P1lJQmuBk91kIqvOKzLP3xyP0ExbkZSMk4qEtbQoMis1liCPDGQICfel9uws6HhPX7VfFLKa1Ix6PSpW8cczSKxYgccBaWYpi17cRYJvPF1ntfnVsW7K1fSb6bYVO6bUk1D9OTXQqPyAhrJ4tDhLVZLv1z5Lf8yKN9PW7nfYoB9ceOM0D2xXk3nUMyMnMKfPUl7W8tYbz7wkZ7QAIF5HDVBjD0lQXkjOxm5erWq06RMmWHKdHJlQ1Qx2KQka7F8rDg30YwqNXpqEtPjiQ8zfD0QhFqMcdM3IdulfuXGc4X5P4ouZS81Q6fV1C4NGqoSLzLbdGOIFSXddj5CtVryYarmClOE8A2eGWTX3QAAWCYmr2CgDXcIqLYB4gAhyBzhPnB469FSAEnWbECaw7qkMSKKgXE6LjOg6LSsIHwV4nYu0hcbuISLch7JRyP9BGv8bPowc0m0hJgN1YzRlvRRvJ6Jms6jNMiee4J6lmbVsbYWMnDt2LZVLBbXMtUfhfLOPwIaw7VQbjzXrEGUvHY8oM5OMVofQ22mX6OGd14lsmscxZI2LEzUqPd3dPZyt4uOHSra478Ro7voUM8ivL2OxXDhI516tax6IS8y4g63zNHyLatMnjGu6xt4BJhfpHKlraBdAYSOHxjju8NTPuCHUYljxluW5a4MoxHc0XqakKihhHe3ltS0jTU43ask1zuLUgxbWYqgdnyqEzbbEnb0nTSWTilO5zhzEi3fNybXA7IzpIMLoreVmMRnyUK8fi6krpohuEx7HERVpBMGA97HRSg8R6uxgclEv5WzUHQHf43DUsGRIknt4RgfE7csPUorNNoHzMvxsofr8uZ1X6lAZrWd98qPo8463hq1DTmVXxjI4rlnjeSG3xGV0m27192hWniNVNrRg8TDI29pyB833m2CIrbftIxezWPFmXIkdt1FFzc7PacVM92X3ZAIY0jF7MpSZOaLcdlaTfeI8YkfoDRCJC7kcfovfRY1TkQNwPpMFMVNe0utOmazFy822A9mvv51w91jKYTSHdE6fMKbYXlkAp3mniDfjmOa3gEngkN7TTet56HEgzHZtUpkpAy7s4ToaS2C54UeTO1EqveEVuX352aKIr2iBDNkq3hnldzbOCamsM9H2WW5mrdmN50OtPV3a3a55XgwS6Q3EmJ0S7oKHhY6mDqQgrGAdIG4iPO68PE2S2OKvs6mpM1xQq1Xhlj1BWnv3DT3t2zx1ybO5IgFehQT5Inf1z27KUO0zmtkghwU2qmCtYy5D7mhW7FhvfjIN4Uuijb6Xw6PGD3lJgtUDjr3DzKj7DdXcQSos8zFFmll0ztG3XrToQtNO0GMoeuV4fj2ZvQ15pcU90dgFTN9ZbcpM44a6CHR7SGOfbdDoLVu5fccqVUdHV7dxyudE0oGdBk2T3fqjUv5HQnxXB0wLUknWm3znmUOMndGe3n6UZhjWrUrHam0dkqmdQBUBUpr6sgKbLG5RI0mlraSLVY1w2gkh3CZSRtpQIG1h6bamGrqxMAOywRKcAH591tOE2sc6UdJLWPGV25SwrNW4w0vdTLzxhuJPGerA0aafEfnRY71apY6aCQnlzP0MnP5wODW5A3SOddYsMDiKAuMbdgyR1gZWXoIY2lGAGwezjWqDA7gRH3nT9uTlMdSbpjuXRtyMc26MALU74ZwMBQxs07tAzKuwwiDlUGVfaZEkFcudKXUUfNRV8Zs9MHQZ24ZpjZWjosxTxOmNEAGBYw0DHmBjzIbGqu0fgAw1JoUmBQNiXJs4P42TJkTIseNk5AEmu1PvOtUwq4JhMr3zorZ6pKccQyjKeCTXYh5VMOLbSduehWJ2JNf5D9kYJKD7NJkKv2vtj1LMnzIoyvGec6b2otMqIxm99lNMdD6mqySIWWiCX8vjHceSzJ7HzfFzbkAbl64FDdFhhv1Ds9WZYN0GSApWNgCnzbVLWn6ygwY7DkjDnnS6nh2qLxdl69ZyHj2uvvngCGpZqqLcK0PYGsY9f9Q0tdk1sWps0du8FZiDTODnWbYv0IUn2MmfRTdV4TropKEyPZLGLoacQd9NvjPDgLljiOyio9JX64i1MVxNuFWWoxXTVL2tqWAgHMmuyoojA78xUuDdUlheaMlB0Q0siC2TNSWq8BQlJuDeOXF421LqD71HoXpvktOJs677uK9fedzG3i70BnZA1kn2z4Sxjv6R55AkAjMPRWaIsmBDdclB49h5DfTHqTibJhEITxlTv6xsf6xExICeV11JNaUNKNXqEXQsk7rJBack"
#define REPETITIONS 10000000000UL


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
        offsetChar = tolower(phrase[i]) - ASCII_a;

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

int main () {

  bool isit;

  for (unsigned long int i = 0; i < REPETITIONS; i++) {

    isit = is_isogram(TESTSTRING);

  }

    printf("isit?: %d\n", isit);

    return 0;

}
