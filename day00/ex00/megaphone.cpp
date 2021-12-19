#include <iostream>
#include <string>

int is_alpha(char	ch)
{
	const char a = 'a';
	const char z = 'z';

	if (z >= ch && ch >= a)
		return (1);
	return (0);
}

char uppercase(char src)
{
	const int UP = 32;
	char dst;

	dst = src - UP;
	return (dst);
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int j = 1; argv[j] != NULL; j++)
		{
			for (int i = 0; argv[j][i] != '\0'; i++)
			{
				if (is_alpha(argv[j][i]))
					argv[j][i] = uppercase(argv[j][i]);
			}
		}
		for (int j = 1; argv[j] != NULL; j++)
			std::cout << argv[j];
		std::cout << '\n';
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
