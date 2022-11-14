#include <stdio.h>
#include <string.h>
#include <unistd.h>

unsigned int ft_strlen(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char *print;
	char str[20];
	char ex1[]="la historia natural de las peras es una maravilla";
	unsigned int len_result;

	len_result = strlcpy(ex1,"hola",3);
	printf("teorico resultado: %s, %d\n",ex1,len_result); 
	len_result = ft_strlcpy(ex1,"hola",3);
	printf("compilado resultado: %s, %d\n",ex1,len_result); 
	len_result = strlcpy(ex1,"hola",10);
	printf("teorico resultado: %s, %d\n",ex1,len_result); 
	len_result = ft_strlcpy(ex1,"hola",10);
	printf("compilado resultado: %s, %d\n",ex1,len_result); 
	write(1,ex1,30);

	return (0);
}


