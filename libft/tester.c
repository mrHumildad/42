#include <stdio.h>
#include "libft.h"


void chartest(char *str)
{
	int i = 0;

	printf("       CHARTESTS \n");
	printf("STRING LENGHT : %d \n", ft_strlen(str));
	while (str[i] != '\0')
	{	
		printf("%c :isalpha? %d ; isdigit? %d ; isalnum?  %d; isascii? %d; isprint? %d \n", 
			str[i], ft_isalpha(str[i]), ft_isdigit(str[i]), ft_isalnum(str[i]), ft_isascii(str[i]), ft_isprint(str[i]));
		i++;
	}
		
}

void strtest(char *str)
{
	
	printf("       STRTESTS \n");
	//printf("STRING LENGHT : %d \n", ft_strlen(str));
	ft_memset(str, 'x', 3);
	printf("memset: %s", str);
}

int main (void)
{	
	char *charlist = "1234AHDHHZ ajjskz *(/&";
	void *ptr;
	chartest(charlist);
	//strtest(charlist);
	strtest(ptr);
	return (0);
}

