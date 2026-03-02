#include <cs50.h>
#include <stdio.h>
#include <string.h>


string getType(string numCard, int numDigits);
//void isValid(string numCard);


int main()
{
    int numDigits = 0;
    string numCard = get_string("Number: ");

    for(int i = 0; i < strlen(numCard); i++)
    {
        //printf("%c\n", numCard[i]);
        numDigits++; // first check based on the number of digits
    }

    getType(numCard, numDigits);


}



string getType(string numCard, int numDigits)
{
    string type;
    switch(numDigits)
    {
        case 13:
            if (numCard[0] == '4')
            {
                type = "Visa";
                break;
            }

        case 15:
        // Amex
            if ((numCard[0] == '3' && numCard[1] == '4') || (numCard[0] == '3' && numCard[1] == '7'))
            {
                type = "AmEx\n";
                break;
            }

        case 16:
            if ( (numCard[0] == '5') && (numCard[1] == '1' || numCard[1] == '2' || numCard[1] == '3' || numCard[1] == '4' || numCard[1] == '5'))
            {
                type = "MasterCard\n";
                break;
            }
            else if (numCard[0] == '4' )
            {
                type = "Visa\n";
                break;
            }

        default:
            type = "Fake\n";
            break;
    }
    printf("%s", type);
    return(type);
}
