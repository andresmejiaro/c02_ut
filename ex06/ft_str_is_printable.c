#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str);

int main(void)
{
	char *str;

	printf("%s resultado:%d\n",strcpy(str,"test"), ft_str_is_printable(str)); 
	printf("%s resultado:%d\n",strcpy(str,"testT"), ft_str_is_printable(str)); 
	printf("%s resultado:%d\n",strcpy(str,""), ft_str_is_printable(str)); 
	printf("%s resultado:%d\n",strcpy(str,"^A"), ft_str_is_printable(str)); 
	printf("%s resultado:%d\n",strcpy(str,"\r"), ft_str_is_printable(str)); 
	return (0);
}


