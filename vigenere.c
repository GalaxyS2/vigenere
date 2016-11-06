#include "cs50.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

  const int numberOfLetters = 26, capitalFirstLetter = 'A', lowercaseFirstLetter = 'a';

int main(int argc, string argv[])
  {
     if (argc != 2)
  {
     printf("Enter the argument! ./vigenere [arg]");
     return 1;
  }

       string key = argv[1];
      unsigned long keyLenght = strlen(key);
    
    // Check that the key contains only letters.
       for (int k = 0; k < keyLenght; k++)
    {
       if (!isalpha(key[k]))
     {
       printf("Key must contains only letters!");
       return 1;
       }
     }
       string textToCipher = GetString();
       if (textToCipher == NULL)
     {
       printf("The entered text is too long");
       return 1;
    }
    
   // To encrypt the entered text to the variable textToCipher and rotate key.
            for (int i = 0, l = 0; i < strlen(textToCipher); i++)
     {
          if (isalpha(textToCipher[i]))
     {
          if (islower(textToCipher[i]))
         printf("%c", ((((textToCipher[i] - lowercaseFirstLetter) +
       ((tolower(key[l++%strlen(key)])) - lowercaseFirstLetter) % numberOfLetters) % numberOfLetters) +
      lowercaseFirstLetter));

             if (isupper(textToCipher[i]))
               printf("%c", ((((textToCipher[i] - capitalFirstLetter) +
                  ((toupper(key[l++%strlen(key)])) - capitalFirstLetter) % numberOfLetters) % numberOfLetters) +
                      capitalFirstLetter));
      }
        else
         printf("%c", textToCipher[i]);
      }
         printf("\n");
         return 0;
      }
