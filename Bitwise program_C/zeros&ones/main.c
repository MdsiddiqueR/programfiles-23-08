/*Write a C program to count total zeros and ones in a binary number.*/

#include <stdio.h>
#include <stdlib.h>
#define INT_SIZE sizeof(int) * 8 /* Total number of bits in integer */

int main()
{
   int num, zeros, ones, i;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    zeros, ones = 0;

    for(i=0; i<INT_SIZE; i++)
    {
        /* If LSB is set then increment ones otherwise zeros */
        if(num&1)
            ones++;
        else
            zeros++;

     /* Right shift bits of num to one position */
        num >>= 1;
    }
    printf("Total number of Zeros :%d\n",zeros);
    printf("Total number of Ones :%d\n",ones);

    return 0;
}
