#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    //delcaring the needed variables
    int letters = 0, words = 0, sentences = 0;

    //Getting the user input
    string text = get_string("Enter text: \n");

    //looping through each character in the string
    for (int i = 0; i < strlen(text); i++)
    {
        //counting letters
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters++;
        }

        //counting words
        if (isspace(text[i]))
        {
            words++;
        }

        //counting sentences
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }

    //display total letters
    //printf("%i letters\n", letters);

    //display total words
    //printf("%i words\n", words + 1);

    //display total sentences
    //printf("%i sentences\n", sentences);

    //calculating Coleman-Liau index
    float L = ((float) letters * 100) / (words + 1); //L = average letters per 100 words
    float S = ((float) sentences * 100) / (words + 1); //S = average sentences per 100 words
    float index = (0.0588 * L) - (0.296 * S) - 15.8; //index calculation formula
    int grade = round(index); //rounding index for final grade of text

    //display grade of text
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}