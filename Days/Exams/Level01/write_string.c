/*Assignment name  : write_string
Expected files   : write_string.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	write_string(char *str);
==========================================================================================
*/
#include <unistd.h>
void    write_string(char *str)
{
    while(*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
}
int main()
{
    write_string("anass\n");
    return(0);
}
