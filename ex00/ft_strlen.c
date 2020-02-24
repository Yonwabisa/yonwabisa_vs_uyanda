#include <stdio.h>

void	ft_putchar(char c);
int	ft_strlen(char *str)
{
	int i;
	int l;

	i = 0;
	l = sizeof(str);
	while (i <= l)
	{
		ft_putchar(str[i]);
		i++;
	}
	printf("String length : %d\n",i);
	return (l);
}	
