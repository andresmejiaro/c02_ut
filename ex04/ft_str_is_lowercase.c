#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str);

int main(void)
{
	char *str;

	printf("%s resultado:%d\n",strcpy(str,"test"), ft_str_is_lowercase(str)); 
	printf("%s resultado:%d\n",strcpy(str,"testT"), ft_str_is_lowercase(str)); 
	printf("%s resultado:%d\n",strcpy(str,""), ft_str_is_lowercase(str)); 
	printf("%s resultado:%d\n",strcpy(str,"test1"), ft_str_is_lowercase(str)); 
	printf("%s resultado:%d\n",strcpy(str,"test\n"), ft_str_is_lowercase(str)); 
	return (0);
}


