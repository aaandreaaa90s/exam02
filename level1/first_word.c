#include <unistd.h>

int main(int ac, char *av[])
{
    /* checking the number of arguments
     */
    if (argc == 2)
    {
        unsigned int i;
        
        i = 0;
        /* looping over the string to remove the possible starting
         * spaces (32) and tabulations (9)
         */
        while (av[1][i] == 32 || av[1][i] == 9)
            i++;
        /* then start printing the characters from the string
         * until we find either a space, a tabulation, or a \0
         */
        while ((av[1][i] != 32 && av[1][i] != 9) && av[1][i])
            write(1, &av[1][i++], 1);
    }
    /* writing a \n at the end, because in every case we have to put a 
     * \n at then end, either when we wrote something or not
     */
    write(1, "\n", 1);
    return (0);
}