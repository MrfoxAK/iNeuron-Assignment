/**
 * C program to reverse order of words in a string
 */
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[100], reverse[100];
    int len, i, index, wordStart, wordEnd;

    printf("Enter any string: ");
    gets(str);

    len   = strlen(str);
    index = 0;

    // Start checking of words from the end of string
    wordStart = len - 1;
    wordEnd   = len - 1;

    while(wordStart > 0)
    {
        // If a word is found
        if(str[wordStart] == ' ')
        {
            // Add the word to the reverse string
            i = wordStart + 1;
            while(i <= wordEnd)
            {
                reverse[index] = str[i];

                i++;
                index++;
            }
            reverse[index++] = ' ';

            wordEnd = wordStart - 1;
        }

        wordStart--;
    }

    // Finally add the last word
    for(i=0; i<=wordEnd; i++)
    {
        reverse[index] = str[i];
        index++;
    }

    // Add NULL character at the end of reverse string
    reverse[index] = '\0'; 

    printf("Original string \n%s\n\n", str);
    printf("Reverse ordered words \n%s", reverse);

    return 0;
}















// #include <stdio.h>
// #include <string.h>
// #define MAX_SIZE 100 // Maximum string size

// int main()
// {
//      int i, j, wordstart, wordend;
//      char str[100], rev[100];
//      printf("Enter any str: ");
//      gets(str);

//      int len = strlen(str);

//      i = j = len - 1;
//      int index = 0;
//      while (i > 0)
//      {
//           if (str[i] == ' ')
//           {
//                wordstart = i + 1;
//                while (wordstart <= j)
//                {
//                     rev[index] = str[wordstart];
//                     index++;
//                     wordstart++;
//                }
//                rev[index] = ' ';
//                j = i - 1;
//           }
//           i--;
//      }
//      for (int i = 0; i < j; i++)
//      {
//           rev[index] = str[i];
//           index++;
//      }
//      rev[index] = '\0';
//      printf("Original string \n%s\n\n", str);
//      printf("Reverse ordered words \n%s", rev);
//      return 0;
// }













// // Write a function to reverse a string word wise.

// #include <stdio.h>

// void reverse(char *start, char *end)
// {
//      char temp;
//      while (start < end)
//      {
//           temp = *start;
//           *start++ = *end;
//           *end-- = temp;
//      }
// }

// void rev_word(char *s)
// {
//      char *word_start = s;
//      char *temp = s;
//      while (*temp)
//      {
//           temp++;
//           if (*temp == '\0')
//           {
//                reverse(word_start, temp - 1);
//           }
//           else if (*temp == ' ')
//           {
//                reverse(word_start, temp - 1);
//                word_start = temp + 1;
//           }
//      }
//      reverse(s, temp - 1);
// }

// int main()
// {
//      char s[] = "i like this program very much";
//      char *temp = s;
//      rev_word(s);
//      printf("%s", s);
//      return 0;
// }
