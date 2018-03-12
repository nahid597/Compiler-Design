#include<stdio.h>
#include<string.h>


int find(char c)
{
    char vow[] = "AaEeIiOoUu";
    int i;
    for(i = 0; vow[i] != '\0'; i++)
    {
        if(c==vow[i])
            return 0;
    }
    return 1;
}
int main()
{
    char str[1000], vowel[1000], consonant[1000];
    int i, vow, cons, freq[256];
    for(i = 0; i <= 255; i++) freq[i] = 0;
    vow = cons = 0;
    gets(str);
    for(i = 0; str[i]!='\0'; i++)
    {
        if(isalpha(str[i]))
            freq[str[i]]++;
        if(isalpha(str[i]) && find(str[i]))
            cons++;
        else
            if(isalpha(str[i]))
                vow++;
    }
    int j, k;
    j = k = 0;
    for(i = 0; i <= 255; i++)
    {
        if(find(i)&&freq[i]!=0)
            consonant[j++] = (char)i;
        else
            if(freq[i]!=0)
                vowel[k++] = (char) i;
    }
    consonant[j] = vowel[k] = '\0';
    printf("Vowel: %d\nConsonant: %d\n\n", strlen(vowel), strlen(consonant));
    printf("Existed Consonant: %s\nExisted vowel: %s\n\n", consonant, vowel);
    j = k = 0;
    for(i = 0; str[i]!='\0'; i++)
    {
        while(!isalpha(str[i])) i++;
        if(find(str[i]))
        {
            while(!isspace(str[i])) consonant[j++] = str[i++];
            consonant[j++] = ' ';
        }
        else
        {
            while(!isspace(str[i])) vowel[k++] = str[i++];
            vowel[k++] = ' ';
        }
    }
    vowel[k] = consonant[j] = '\0';
    printf("Start with consonant: %s\nStart with Vowel: %s\n", consonant, vowel);

    return 0;
}

