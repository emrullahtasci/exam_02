typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

void	fill(char **tab, t_point size, int x, int y, char hedef)
{
	if (x < 0 || x >= size.x || y < 0 || y >= size.y)
		return ;
	if (tab[y][x] != hedef)
		return ;
	tab[y][x] = 'F';
	fill(tab, size, x + 1, y, hedef);
	fill(tab, size, x - 1, y, hedef);
	fill(tab, size, x, y + 1, hedef);
	fill(tab, size, x, y - 1, hedef);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin.x, begin.y, tab[begin.y][begin.x]);
}