/*Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 4, it prints 'buzz' instead.

If the number is a multiple of 7, it prints 'fizz' instead.

If the number is both a multiple of 4 and a multiple of 7, it prints 'buzzfizz' instead.*/
#include <unistd.h>
void ft_putnbr(int n)
{
    char digit;

    if (n >= 10)
    {
        ft_putnbr(n / 10);
    }
    digit = (n % 10) + '0';
    write(1,&digit,1);
}
int main(void)
{
    int i;
    i = 1;
    while(i <= 100)
    {
        if(i % 4 == 0 && i % 7 == 0)
        {
            write(1, "buzzfizz", 8);
        }
        else if(i % 4 == 0)
        {
            write(1, "buzz",4);
        }
        else if(i % 7 == 0)
        {
            write(1, "fizz",4);
        }
        else
        {
            ft_putnbr(i);
        }
        write(1, "\n",1);
        i++;
    }
    return(0);
}