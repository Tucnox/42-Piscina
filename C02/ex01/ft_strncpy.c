#include <unistd.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}
#include <unistd.h>
int main() {
    char dest[10];
    const char *src = "C is annoying";
    ft_strncpy(dest , src, 10);

    return 0;
}