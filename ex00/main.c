#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);
void	ft_strlen(char *str);
int main()
{
	ft_putstr("Enter a 20 character string\n");
	char c[20];
	scanf("%s",c);
	ft_strlen(c);
	return (0);
}
