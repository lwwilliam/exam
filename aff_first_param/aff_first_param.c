#include<unistd.h>

int main(int ac, char **av)
{
	int x;

	x = 0;
	if (ac > 1)
	{
		while(av[1][x] != '\0')
		{
			write(1, &av[1][x], 1);
			x++;
		}
	}
	write(1, "\n", 1);
}
