#include <ctype.h>
#include<stdio.h>
#include <string.h>
int main()
{
	printf("%d",isascii('a'));
	printf("%d",ft_isascii('a'));

}
int main()
{
	char str[19] = "hello world test";
	ft_memset(str + 5, 'a', 7*sizeof(char));
	printf("%s", str);
}


#include"libft.h"
#include<stdlib.h>