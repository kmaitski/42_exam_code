#include <unistd.h>

void	rev_print(char *str)
{
	int	i = 1;

	while (str[i])
		i++;
	while (i--)
		write(1, &str[i], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_print(argv[1]);
	write(1, "\n", 1);
	return (0);
}
