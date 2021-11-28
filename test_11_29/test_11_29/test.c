#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

void reverse(char str[], int left, int right)
{

    char t = 0;
    while (left <= right)
    {
        t = str[left];
        str[left] = str[right];
        str[right] = t;
        left++;
        right--;
    }
}
int main()
{
    char str[100] = { 0 };
    while (gets(str) != NULL)
    {
        int i = 0;

        int left = 0;
        int right = strlen(str) - 1;
        reverse(str, left, right);

        for (i = 0; i <= strlen(str) - 1; i++)
        {
            printf("%c", str[i]);//´òÓ¡×Ö·û´®
        }   printf("\n");

        left = 0;
        for (i = 0; i < strlen(str); i++)
        {
            if (str[i] == ' ')
            {
                right = i - 1;
                reverse(str, left, right);
                left = right + 2;
            }
            if (i == strlen(str) - 1)
            {
                right = i;
                reverse(str, left, right);
            }
        }
        for (i = 0; i <= strlen(str); i++)
        {
            prtinf("%c", str[i]);
        }printf("\n");
    }


    return 0;
}