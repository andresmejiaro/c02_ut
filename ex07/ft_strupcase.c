#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int main(void)
{
	char *str;

	printf("%s resultado:\n",strcpy(str,"Test1")); 
	printf("%s resultado:%s\n",strcpy(str,"Test1"), ft_strupcase(str)); 
	printf("%s resultado:\n",strcpy(str,"test")); 
	printf("%s resultado:%s\n",strcpy(str,"test"), ft_strupcase(str)); 
	printf("%s resultado:\n",strcpy(str,"TeXt")); 
	printf("%s resultado:%s\n",strcpy(str,"TeXt"), ft_strupcase(str)); 
	printf("%s resultado:\n",strcpy(str,"Con salto \n de linea")); 
	printf("%s resultado:%s\n",strcpy(str,"Con salto \n de lineaA"), ft_strupcase(str)); 
	printf("%s resultado:\n",strcpy(str,"\r Caracter no imprimible")); 
	printf("%s resultado:\n",strcpy(str,"\r Caracter no imprimible"), ft_strupcase(str)); 
	return (0);
}


