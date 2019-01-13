#include<math.h>
#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int arvc, string argv[])
{

    if (arvc != 2)
    {
         printf("I am vinegar\n");
         return 1;
    }
    else if (arvc == 2)
    {
        for (int i=0; i <strlen(argv[1]); i++)
        {
            if isalpha(argv[1][i])
            {
            }
            else
            {
                printf("I am vinegar\n");
                return 1;
            }
        }

        int k_len = strlen(argv[1]);
        int k[k_len];
        string code = argv[1];

        for(int j = 0; j<k_len; j++)
        {
            if isupper(code[j])
            {
                k[j] = (code[j])-65;
            }
            else if islower(code[j])
            {
                k[j] = (code[j])-97;
            }
        }

        if(arvc == 2)
        {
            string input = get_string("Input: "); //input
            int len = strlen(input); //length of the input

            printf("ciphertext: ");
            for(int i=0, j=0; i<len; i++, j++)
            {
                if islower(input[i])
                {
                    if (j>=k_len)
                    {
                        j = 0;
                    }
                    printf("%c", (((input[i]+k[j])-97)%26)+97);
                }
                else if isupper(input[i])
                {
                     if (j>=k_len)
                    {
                        j = 0;
                    }
                    printf("%c", (((input[i]+k[j])-65)%26)+65);
                }
                else
                {
                    printf("%c",input[i]);
                    j--;
                }
            }
                printf("\n");
        }
    }
    else
    {
        printf("I am vinegar\n");
        return 1;
    }

}