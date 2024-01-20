#include<stdio.h>
#include<string.h>

#define MAX_STRING_LENGTH 100
#define MAX_ASCII_VALUE 126
#define MIN_ASCII_VALUE 32

void printMorseCode(char string[], const char morse[][100])
{
    int len = strlen(string);

    for (int i = 0; i < len; i++)
    {
        char currentChar = string[i];

        if (currentChar >= MIN_ASCII_VALUE && currentChar <= MAX_ASCII_VALUE)
        {
            int index = currentChar - MIN_ASCII_VALUE;
            printf("%s ", morse[index]);
        }
        else
        {
            printf("%c ", currentChar);
        }
    }
}

int main()
{
    char string[MAX_STRING_LENGTH];

    const char morse[MAX_ASCII_VALUE - MIN_ASCII_VALUE + 1][100] = {
        " ", // Space
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.",
        "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..",
        "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.",
        "-.-.--", ".-..-.", "-..--.", "...-..-", "-.-..-", ".-...", ".----.", "-.--.", "-.--.-", "-..-",
        ".-.-.", "--..--", "-....-", ".-.-.-", "-..-.",
        "---...", "-.-.-.", "-...-", "-...-", "-...-", "..--..", ".--.-.",
        "-.--.", "-..-.", "-.--.-", ".-..-.", "..--.-", ".-.--.",
        ".-.-.-", "-...-", "-.-.--", ".-..-."
    };

    printf("WELCOME TO MY MORSE CODE TRANSLATOR!\nVERSION: FINAL RELEASE 1.0\nIT CAN TRANSLATE ALL THE PRINTABLE CHARACTERS PRESENT IN A STANDARD KEYBOARD INTO MORSE CODE!\nENJOY!\n\n");

    while (1)
    {
        printf("Please enter a string (enter 'q' to exit, or 'Q' to see the morse code of Q): ");
        gets(string);

        if (strlen(string) == 1 && string[0] == 'q')
        {
            printf("Bye! Have a great time!\n");
            break;
        }

        printMorseCode(string, morse);

        printf("\n");
    }

    return 0;
}

//All creadit goes to the discord user 00face.