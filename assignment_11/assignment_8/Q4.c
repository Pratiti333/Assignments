#include <stdio.h>

int main()
{
    char str[100];
    char lc, rc;
    int length = 0, l, r, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    l = 0;
    r = length - 1;

    while (l < r)
    {
        lc = str[l];
        rc = str[r];

        if (lc >= 'A' && lc <= 'Z')
        {
            lc = lc + 32;
        }
        if (rc >= 'A' && rc <= 'Z')
        {
            rc = rc + 32;
        }

        if (lc != rc)
        {
            isPalindrome = 0;
            break;
        }

        l++;
        r--;
    }

    if (isPalindrome == 1)
    {
        printf("The string is a palindrome.");
    }
    else
    {
        printf("The string is not a palindrome.");
    }

    return 0;
}