/* strcpy example */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main ()
{
	char	str1[40]="Sample";
	char	str2[40]="Bienvenidos a Tijuana";
	char	str3[40]="Bienvenidos a Tijuana";
	char	*str4;
	char	*str5;	
	int		num_char_to_copy=2;

	printf("Cadena original fuente: %s\nCadena destino original funcion sistema: %s\nCadena destino original funcion compilada:%s\nNumero de caracteres copiados: %d\n",str1,str2,str3,num_char_to_copy);

	str4=strncpy (str2,str1,num_char_to_copy);
	//strncpy (str2,str1,1);
	//strncpy (str3,"copy successful",10);
	//printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);


	printf ("Mi funcion\n");

	//str1="Sample string";

	//ft_strncpy (str3,"copy successful",20);
	str5=ft_strncpy (str3,str1,num_char_to_copy);
	//ft_strncpy (str3,str1,1);
 	printf("str1: %s\nstr2: %s\nstr3: %s\nComparacion de cadenas: %d\n",str1,str2,str3,strcmp(str2,str3));
	printf("Comparacion de basura:\n%s \n%s\n",str2+num_char_to_copy+1,str5+num_char_to_copy+1);
  	printf("Diferencia en apuntadores original:%ld\n",str4-str2);
 	printf("Diferencia en apuntadores nueva:%ld\n",str5-str3);
  return 0;
}
