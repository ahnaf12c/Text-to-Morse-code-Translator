#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    const char morse_abc[26][100] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    const char morse_num[10][100] = {"-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."};
    const char morse_33_47[15][100] = {"-.-.--", ".-..-.", "-..--.", "...-..-", "-.-..-", ".-...", ".----.", "-.--.", "-.--.-", "-..-", ".-.-.", "--..--", "-....-", ".-.-.-", "-..-."};
    const char morse_58_64[7][100] = {"---...", "-.-.-.", "-...-", "-...-", "-...-", "..--..", ".--.-."};
    const char morse_91_96[6][100] = {"-.--.", "-..-.", "-.--.-", ".-..-.", "..--.-", ".-.--."};
    const char morse_123_126[4][100] = {".-.-.-", "-...-", "-.-.--", ".-..-."};

    int i, len, index;

    printf("WELCOME TO MY MORSE CODE TRANSLATOR!\nVERSION: FINAL RELEASE 1.0\nIT CAN TRANSLATE ALL THE PRINTABLE CHARACTERS PRESENT IN A STANDARD KEYBOARD INTO MORSE CODE!\nENJOY!\n\n");

    while (1)
    {
        printf("Please enter a string (enter 'q' to exit, or 'Q' to see the morse code of Q): ");
        
        gets(string);
        len = strlen(string);

        if (len == 1 && string[0] == 'q')
        {
            printf("Bye! Heve a great time!\n");
            break;
        }

        for (i = 0; i < len; i++)
        {
            if (string[i] >= 'a' && string[i] <= 'z')
            {
                index = string[i] - 'a';
                printf("%s ", morse_abc[index]);
            }
            else if (string[i] >= 'A' && string[i] <= 'Z')
            {
                index = string[i] - 'A';
                printf("%s ", morse_abc[index]);
            }
            else if (string[i] >= '0' && string[i] <= '9')
            {
                index = string[i] - '0';
                printf("%s ", morse_num[index]);
            }
            else if (string[i] >= '!' && string[i] <= '/') {
                index = string[i] - '!';
                printf("%s ", morse_33_47[index]);
            }
            else if (string[i] >= ':' && string[i] <= '@')
            {
                index = string[i] - ':';
                printf("%s ", morse_58_64[index]);
            }
            else if (string[i] >= '[' && string[i] <= '`')
            {
                index = string[i] - '[';
                printf("%s ", morse_91_96[index]);
            }
            else if (string[i] >= '{' && string[i] <= '~')
            {
                index = string[i] - '{';
                printf("%s ", morse_123_126[index]);
            }
            else
            {
                printf("%c ", string[i]);
            }
        }

        printf("\n");
    }
    return 0;
}
