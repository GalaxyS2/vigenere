#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Error message");
        return 1;
    }
    
    string key = argv[1];
    unsigned long keyCount = strlen(key);
    
    
    // Check that the key contains only letters.
    for (int k = 0; k < keyCount; k++)
    {
        if (!isalpha(key[k]))
        {
            printf("Error message");
            return 1;
        }
    }
    string text = GetString();
    if (text == NULL)
    {
        printf("Error message");
        return 1;
    }
    
    
     // To encrypt the entered text to the variable textToCipher and rotate key.
    for (int i = 0, l = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            if (islower(text[i]))
                printf("%c", ((((text[i] - 'a') + ((tolower(key[l++%strlen(key)])) - 'a') % 26) % 26) + 'a'));
            
            if (isupper(text[i]))
                printf("%c", ((((text[i] - 'A') + ((toupper(key[l++%strlen(key)])) - 'A') % 26) % 26) + 'A'));
        }
        else
            printf("%c", p[i]);
    }
    printf("\n");
    return 0;
}
