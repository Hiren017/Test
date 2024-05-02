#include<stdio.h>
int main()
{
    char line[1000];
    printf("Enter a line of text: ");
    fgets(line, 1000, );
    char character;
    printf("Enter the character to search for: ");
    scanf(" %c", &character);
    int count = 0;
    for (int i = 0; line[i]; i++)
    {
        if (line[i] == character)
        {
            count++;
        }
    }
    printf("The character '%c' appears %d times in the line.\n", character, count);
    return 0;
}
