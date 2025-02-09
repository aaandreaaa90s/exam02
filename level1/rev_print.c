#include <unistd.h>

int main(int ac, char *av[])
{
    if (ac == 2)
    {
        int i;
        
        i = 0;
        /* looping over the whole string to find its length
         */
        while (av[1][i])
            i++;
        /* looping over the length of the string (length to 0)
         * and writing each character one by one
         */
        while (i--)
            write(1, &av[1][i], 1);
    }
    write(1, "\n", 1);
}
