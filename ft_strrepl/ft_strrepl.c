char *ft_strrepl(char *str, char c1, char c2)
{
	int x;

	x = 0;
	while(str[x] != '\0')
	{
		if(str[x] == c1)
			str[x] = c2;
		x++;
	}
	return(str);
}
