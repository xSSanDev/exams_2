/*Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);
==========================================================================================*/
#include <stdio.h>
int ft_strlen(char *str)
{
    int i ;
    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);

}
int main()
{  
    //char result;
    ft_strlen("Hello World");
    //result = ft_strlen("Hello World");
    //printf("%d",result);
    return(0);
}