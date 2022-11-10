#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char *str;

	printf("%s resultado:\n",strcpy(str,"Test1")); 
	printf("%s resultado:%s\n",strcpy(str,"Test1"), ft_strlowcase(str)); 
	printf("%s resultado:\n",strcpy(str,"TEST")); 
	printf("%s resultado:%s\n",strcpy(str,"TEST"), ft_strlowcase(str)); 
	printf("%s resultado:\n",strcpy(str,"TeXt")); 
	printf("%s resultado:%s\n",strcpy(str,"TeXt"), ft_strlowcase(str)); 
	printf("%s resultado:\n",strcpy(str,"Con salto \n de linea")); 
	printf("%s resultado:%s\n",strcpy(str,"Con salto \n de linea"), ft_strlowcase(str)); 
	return (0);
}


