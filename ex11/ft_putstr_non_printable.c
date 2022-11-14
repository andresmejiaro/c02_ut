#include <stdio.h>

void ft_print_single_hex(int nb);
void ft_print_hex(int nb);
void ft_putstr_non_printable(char *str);

int main(void)
{

	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	printf("\n");

	ft_putstr_non_printable("");

	ft_putstr_non_printable("\r\n\e\a\b\t");
	return 0;
}
