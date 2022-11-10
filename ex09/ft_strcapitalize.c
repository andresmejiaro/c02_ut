#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
	char *str;

	printf("%s resultado:\n",strcpy(str,"Test1")); 
	printf("%s resultado:%s\n",strcpy(str,"Test1"), ft_strcapitalize(str)); 
	printf("%s resultado:\n",strcpy(str,"test")); 
	printf("%s resultado:%s\n",strcpy(str,"test"), ft_strcapitalize(str)); 
	printf("%s resultado:\n",strcpy(str,"TeXt")); 
	printf("%s resultado:%s\n",strcpy(str,"TeXt"), ft_strcapitalize(str)); 
	printf("%s resultado:\n",strcpy(str,"Con salto \n de linea")); 
	printf("%s resultado:%s\n",strcpy(str,"Con salto \n de lineaA"), ft_strcapitalize(str)); 
	printf("%s resultado:\n",strcpy(str,"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un")); 
	printf("%s resultado:%s\n",strcpy(str,"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"), ft_strcapitalize(str)); 
	return (0);
}


