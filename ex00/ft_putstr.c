void	ft_putchar(char c);
void	ft_putstr(char *str)
{
	unsigned int i;
	i = 1;
	while (i < sizeof(*str))
		{
			ft_putchar(i-1);
			i++;
		}
}
