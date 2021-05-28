
#include <iostream>
#include <string>

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
	{
		std::string str = std::string(av[i++]);
		for(std::string::iterator it = str.begin(); it != str.end(); it++)
		{
			if (*it >= 'a' && *it <= 'z')
				*it -= 32;
		}
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}