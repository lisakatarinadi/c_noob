#include <stdio.h>

int main()
{
    char str[69];
    int i, vowels, consonants, digits;

    vowels =  0;
    consonants = 0;
    digits = 0;
    
    printf("Zeichenkette eingeben: ");
    gets(str);
    for(i=0; str[i]!='\0'; ++i)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
           str[i]=='o' || str[i]=='u' || str[i]=='A' ||
           str[i]=='E' || str[i]=='I' || str[i]=='O' ||
           str[i]=='U')
        {
            ++vowels;
        }
        else if((str[i] >= 'a' && str[i] <= 'z') ||
          (str[i] >= 'A' && str[i] <= 'Z'))
        {
            ++consonants;
        }
        else{
            ++digits;
        }
    }
    printf("\nVowels: %d",vowels);
    printf("\nConsonants: %d",consonants);
    printf("\nDigits: %d",digits);

    return 0;

}
