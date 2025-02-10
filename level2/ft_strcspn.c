#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    // Save a pointer to the start of s
    const char *og = s;
    const char *s2;
    
    // Looping over the whole string 
    while (*s++)
    {
        // Set s2 to be the start of reject
        // that way we keep the reject pointer to its original position
        // Then loop over the whole charset
        s2 = reject;
        while (*s2)
        {
            // If current string charcter found in charset, return the
            // number of characters spanned
            if (*s == *s2++)
                // Here we make use of the original pointer to calculate
                // the number of char. spanned
                return (s - og);
        }
    }
    // Same as above, we use the original pointer to calculate the number
    // of character spanned
    return (s - og);
}
