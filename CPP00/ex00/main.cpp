
#include <iostream>
#include <cctypes>

static char	*toUpper(char *const str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str && str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

int			main(int ac, char **av)
{
	uint8_t	i;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (i < ac)
		std::cout << std::string::toupper(static_cast<std::string>(av[i++]));
	std::cout << std::endl;
	return (0);
}