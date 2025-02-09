#include <unistd.h>

int main(int ac, char *av[])
{
    if (ac == 2)
    {
        int i;
        
        i = 0;
        /* looping over the whole string
         */
        while (av[1][i])
        {
            /* checking if the character is between Aa - Mm
             * if it's the case, we can add 13 to it to get
             * the character 13 places in front of it
             */
            if ((av[1][i] >= 65 && av[1][i] <= 77) || (av[1][i] >= 97 && av[1][i] <= 109))
                av[1][i] += 13;
            /* checking if the character is between Nn - Zz
             * if it's the case, we can substract 13 to it to get
             * the character 13 places in front of it
             */
            else if ((av[1][i] >= 78 && av[1][i] <= 90) || (av[1][i] >= 110 && av[1][i] <= 122))
                av[1][i] -= 13;
            /* finally, we can write the character and increment the
             * counter
             */
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
