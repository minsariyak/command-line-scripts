#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    //Validating argument count
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    //Validating key length
    if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters\n");
        return 1;
    }

    //Ensuring key is alphanumeric
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Key must contain alphanumeric characters\n");
            return 1;
        }
    }

    //Checking for identical characters
    int x = 0;
    for (int y = 0; y < 26; y++)
    {
        for (int i = x; i < 26; i++)
        {
            if (toupper(argv[1][y]) == toupper(argv[1][i + 1]))
            {
                printf("Invalid Key\n");
                return 1;
            }
        }
        x++;
    }

    if (argc == 2)
    {
        //Prompting user for plaintext
        string plainText = get_string("plaintext: ");

        //Displaying the ciphertext
        printf("ciphertext: ");

        //Enciphering the plaintext
        for (int i = 0; i < strlen(plainText); i++)
        {
            //check if alphanumeric
            if (isalpha(plainText[i]))
            {
                //check if it uppercase or lowercase
                if (isupper(plainText[i]))
                {
                    int index = (plainText[i] - 65) % 26;
                    printf("%c", toupper(argv[1][index]));
                }
                else
                {
                    int index = (plainText[i] - 97) % 26;
                    printf("%c", tolower(argv[1][index]));
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


