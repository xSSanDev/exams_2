/*======================================ft_atoi.txt=========================================
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(char *str);
==========================================================================================*/
#include <stdio.h>
int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while(str[i] == ' ' || str[i] >= '\t' && str[i] <= '\r')
    {
        i++;
    }
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return(result * sign);
}
int main()
{
    char result;
    result = ft_atoi(" Hello World ");
    printf("%d\n",result);
}