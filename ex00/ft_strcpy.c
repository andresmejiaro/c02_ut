#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int main ()
{
	char	str1[]="Sample string";
	char	str2[40];
	char	str3[40];
 
	//strcpy (str2,str1);
	//strcpy (str3,"copy successful");
	//printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);


	printf ("Mi funcion\n");

	//str1="Sample string";

	ft_strcpy (str2,str1);
	ft_strcpy (str3,"copy successful");
 	printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);

 
 
  return 0;
}
