int    len(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    int    len_dest;
    int    j;

    len_dest = len(dest);
    j = 0;
    if ((int)size <= len_dest)
        return ((int)size + len(src));
    else
    {
        while (src[j] != '\0' && ((int)size - len_dest - 1) > j)
        {
            dest[len_dest + j] = src[j];
            j++;
        }
        dest[len_dest + j] = '\0';
    }
    return (len_dest + len(src));
}

#include <stdio.h>
#include <string.h>
int main()
{
    char dest1[20] = "1234231";
	char dest2[20] = "1234231";
    char src[] = "Worldhdafhadkgsdhfghdfkhgkhsdfgdf";

    // unsigned int result1 = strlcat(dest1, src, x);
    // printf("strlcat %s: %u\n", dest1, result1);
	unsigned int result2 = ft_strlcat(dest2, src, -1);
	printf("ft_strlcat %s: %u\n", dest2, result2);
    return(0);
}
