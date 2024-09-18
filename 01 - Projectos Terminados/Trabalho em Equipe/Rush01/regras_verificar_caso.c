#include "regras_jogo.h"

int	duplo_check(int mapa[4][4], int pos, int num)
{
	int	i;

	i = -1;
	while (++i < pos / 4)
		if (mapa[i][pos % 4] == num)
			return (1);
	i = -1;
	while (++i < pos % 4)
		if (mapa[pos / 4][i] == num)
			return (1);
	return (0);
}

int	checa_col_up(int mapa[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (mapa[i][pos % 4] > max)
			{
				max = mapa[i][pos % 4];
				count++;
			}
			i++;
		}
		if (entry[pos % 4] != count)
			return (1);
	}
	return (0);
}

int	checa_row_right(int mapa[4][4], int pos, int entry[16])
{
	int	i;
	int	max_size;
	int	torres_visiveis;

	i = 4;
	max_size = 0;
	torres_visiveis = 0;
	if (pos % 4 == 3)
	{
		while (--i >= 0)
		{
			if (mapa[pos / 4][i] > max_size)
			{
				max_size = mapa[pos / 4][i];
				torres_visiveis++;
			}
		}
		if (entry[12 + pos / 4] != torres_visiveis)
			return (1);
	}
	return (0);
}

int	checa_col_down(int mapa[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (mapa[i][pos % 4] > max)
			{
				max = mapa[i][pos % 4];
				count++;
			}
			i--;
		}
		if (entry[4 + pos % 4] != count)
			return (1);
	}
	return (0);
}

int	checa_row_left(int mapa[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (mapa[pos / 4][i] > max)
			{
				max = mapa[pos / 4][i];
				count++;
			}
			i++;
		}
		if (entry[8 + pos / 4] != count)
			return (1);
	}
	return (0);
}
