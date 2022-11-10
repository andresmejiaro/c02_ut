#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str);

int main(void)
{
	char *str;

	printf("%s resultado:%d\n",strcpy(str,"1234"), ft_str_is_numeric(str)); 
	printf("%s resultado:%d\n",strcpy(str,"uno,dos.tres"), ft_str_is_numeric(str)); 
	printf("%s resultado:%d\n",strcpy(str,""), ft_str_is_numeric(str)); 
	printf("%s resultado:%d\n",strcpy(str,"B3440"), ft_str_is_numeric(str)); 
	printf("%s resultado:%d\n",strcpy(str,"0.12"), ft_str_is_numeric(str)); 
	return (0);
}


