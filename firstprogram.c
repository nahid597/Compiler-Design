#include<stdio.h>
#include<string.h>

int main()
{

    char ch[1000];
    int i,k=1,c=0,l=0,d=1;
    gets(ch);

   // l = strlen(ch);

    for( i = 0; i< strlen(ch);i++)
    {
        if(ch[i] != ' ' || ch[i]==',')
        {
            if(ch[i] !='.')
            {
                  if( ch[i] != ',')
                        printf("%c",ch[i]);
            }


            c++;
            if(ch[i] <=56 && ch[i]>=48)
            {
                d++;
            }
        }


        if(ch[i] == ' ' || ch[i]==',')
        {
            printf("\n");
            k++;
        }

    }

    printf("\n");
     for( i = 0; i< strlen(ch);i++)
    {

         if(ch[i]=='.' || ch[i]==',' || ch[i] == '-')
            {
                printf("%c",ch[i]);
                l++;
            }

    }



    printf("\nNumber of words: %d\n",k);
    printf("\nNumber of letters: %d\n",c);
    printf("\nNumber of characters: %d\n",l);
    printf("\nNumber of digits: %d\n",d-1);




    return 0;
}
