#include "funcoes.h"
#include <stdlib.h>

int	checar(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	if (ft_strlen(argv[1]) != 31)
		return (1);
	return (0);
}

int	*pega_numeros(char *str)
{
	int	i;
	int	j;
	int	*mapa;

	mapa = malloc(4 * 16 * sizeof(int));
	if (mapa == NULL)
		return (0);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (j < 16)
			{
				mapa[j++] = ft_atoi(str + i);
			}
		}
	}
	return (mapa);
}
