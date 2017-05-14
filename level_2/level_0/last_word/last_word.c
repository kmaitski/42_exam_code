#include <unistd.h>

void	last_word(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	while (str[i] < 33 && i != 0)
		i--;
	while (str[i] > 32 && i != 0)
		i--;
	i++;
	while (str[i] && str[i] > 32)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return(0);
}
