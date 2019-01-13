#include<math.h>
#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int arvc, string argv[])
{
    if(arvc == 2)
    {

        int k = atoi(argv[1]); //key
        if(k>0)
        {
            string input = get_string("Input: "); //input
            int len = strlen(input); //length of the input
            //convert each letter in string into 0-25 (capital)
            printf("ciphertext: ");
            for(int i=0; i<len;i++)
            {
                if islower(input[i])
                {
                    printf("%c", (((input[i]+k)-97)%26)+97);
                }
                else if isupper(input[i])
                {
                    printf("%c", (((input[i]+k)-65)%26)+65);
                }
                else
                {
                    printf("%c",input[i]);
                }
            }
            printf("\n");
        }
        else if(k<0)
        {
            printf("Invalid");
            return 1;
        }

    }
    else
    {
        printf("I am a salad\n");
        return 1;
    }
}