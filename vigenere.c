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
    
    for (int k = 0; k < keyCount; k++)
    {
        if (!isalpha(key[k]))
        {
            printf("Error message");
            return 1;
        }
    }
    string p = GetString();
    if (p == NULL)
    {
        printf("Error message");
        return 1;
    }
    
    for (int i = 0, l = 0; i < strlen(p); i++)
    {
        if (isalpha(p[i]))
        {
            if (islower(p[i]))
                printf("%c", ((((p[i] - 'a') + ((tolower(key[l++%strlen(key)])) - 'a') % 26) % 26) + 'a'));
            
            if (isupper(p[i]))
                printf("%c", ((((p[i] - 'A') + ((toupper(key[l++%strlen(key)])) - 'A') % 26) % 26) + 'A'));
        }
        else
            printf("%c", p[i]);
    }
    printf("\n");
    return 0;
}
