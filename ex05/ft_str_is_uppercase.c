#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str);

int main(void)
{
	char *str;

	printf("%s resultado:%d\n",strcpy(str,"TEST"), ft_str_is_uppercase(str)); 
	printf("%s resultado:%d\n",strcpy(str,"TESTt"), ft_str_is_uppercase(str)); 
	printf("%s resultado:%d\n",strcpy(str,""), ft_str_is_uppercase(str)); 
	printf("%s resultado:%d\n",strcpy(str,"TEST1"), ft_str_is_uppercase(str)); 
	printf("%s resultado:%d\n",strcpy(str,"TEST\n"), ft_str_is_uppercase(str)); 
	return (0);
}


