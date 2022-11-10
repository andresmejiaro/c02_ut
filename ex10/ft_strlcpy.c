#include <stdio.h>
#include <string.h>

unsigned int ft_strlen(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char *print;
	char str[20];
	char ex1[20];
	unsigned int len_result;

	len_result = strlcpy(ex1,"hola",3);
	printf("teorico resultado: %s, %d\n",ex1,len_result); 
	len_result = ft_strlcpy(ex1,"hola",3);
	printf("compilado resultado: %s, %d\n",ex1,len_result); 
	len_result = strlcpy(ex1,"hola",10);
	printf("teorico resultado: %s, %d\n",ex1,len_result); 
	len_result = ft_strlcpy(ex1,"hola",10);
	printf("compilado resultado: %s, %d\n",ex1,len_result); 
	return (0);
}


