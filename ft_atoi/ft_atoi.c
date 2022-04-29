int ft_atoi(const char *str)
{
	int x;
	int y;
	int res;

	x = 0;
	res = 1;
	while (str[x] <= 32)
	{
		if (str[x] == '+')
			x++;
		else if (str[x] == '-')
			res *= -1;
		while (str[x] >= '0' && str[x] <= '9')
		{
			y = *str;
			y -= '0';
			y *= 10;
			x++;
			y *= res;
		}
		x++;
	}
	return(y);
}

#include<stdio.h>

int main()
{
	printf("%d\n", ft_atoi("+-+-+++--53sef"));
}
