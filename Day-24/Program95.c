#include <stdio.h>
#include <string.h>

int main()
{
    char str[100],word[20],longest[20] = "";
    int i=0,j=0;

    printf("Enter sentence: ");
    fgets(str,100,stdin);

    while (str[i]!='\0')
    {
        if (str[i]==' '|| str[i]=='\n')
        {
            word[j]='\0';

            if (strlen(word)>strlen(longest))
            {
                strcpy(longest,word);
            }

            j=0;
        }
        else
        {
            word[j++]=str[i];
        }

        i++;
    }

    word[j]='\0';

    if (strlen(word)>strlen(longest))
    {
        strcpy(longest,word);
    }

    printf("Longest word: %s",longest);

    return 0;
}