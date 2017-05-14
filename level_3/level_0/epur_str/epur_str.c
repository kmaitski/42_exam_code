#include <unistd.h>

void	epur_str(char *str)
{
	int	i = 0;

	while (str[i] == ' ' || str[i] == '	')
		i++;
	while (str[i])
	{
		if (str[i] > 32 || (str[i] < 33 && str[i + 1] > 32))
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
