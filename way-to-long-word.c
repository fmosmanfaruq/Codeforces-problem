#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char word[101];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", word); // read the word
        int count = 0;
        while (word[count] != '\0')
        {
            count++;
        }
        if (count > 10)
        {
            printf("%c%d%c", word[0], count - 2, word[count - 1]);
        }
        else
        {
            printf("%s", word);
        }
    }
}
