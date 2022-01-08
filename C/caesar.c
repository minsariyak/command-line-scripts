#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //validating number of arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        //return 1 to show failure
        return 1;
    }

    //validating if argument input is a digit
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            //return 1 to show failure
            return 1;
        }
    }

    if (argc == 2)
    {
        //converting key to integer
        int key = atoi(argv[1]);

        //prompting user for plaintext
        string plainText = get_string("plaintext: ");

        //enciphering the plaintext
        printf("ciphertext: ");
        int n = strlen(plainText);
        for (int i = 0; i < n; i++)
        {
            //check if alphanumeric
            if (isalpha(plainText[i]))
            {
                //check if it is uppercase or lowercase
                if (isupper(plainText[i]))
                {
                    printf("%c", (((plainText[i] - 65) + key) % 26) + 65);
                }
                else
                {
                    printf("%c", (((plainText[i] - 97) + key) % 26) + 97);
                }
            }
            //if not alphanumeric donot alter
            else
            {
                printf("%c", plainText[i]);
            }
        }
        printf("\n");
        return 0;
    }
}