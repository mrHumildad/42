#include "libft.h"
#include <stddef.h>

void *ft_memset(void *str, int c, size_t n)
{
	size_t i;
	//unsigned char *chstr;
	//unsigned char x;

	i = 0;
	//str = (char*)str;
	//chstr = (unsigned char*)str;
	//x = c;
	while (n > i)
	{
		//chstr[i] = x;
		*(char*)str = c;
		*str = *str + sizeof(char);
		i++;
	}
}

/*
 * void	*ft_memset(void *str, int c, size_t n)
{
	void	*str_ptr;

	str_ptr = str;
	while (n--)
		*(unsigned char *)str++ = (unsigned char)c;
	return (str_ptr);
}
NSHAHID
*/
