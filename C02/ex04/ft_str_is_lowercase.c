#include <unistd.h>

int ft_str_is_lowercase(char *str)
{
    int i;
    if(!str)
        return 1;
    i =0;
    while (str[i] != '\0')
    {
        if (!((str[i] >= 'a' && str[i] <= 'z')))
            {
                return 0;
            }
        i++;
    }
    return 1;
}
#include <stdio.h>

int main(void)
{
char *test1 = "tuga";
char *test2 = "Dark";
char *test3 = "lud#b";
printf("Teste 1:%d",ft_str_is_lowercase(test1));
printf("Teste 2:%d",ft_str_is_lowercase(test2));
printf("Teste 3:%d",ft_str_is_lowercase(test3));
}