#include "regras_jogo.h"

int	verificar_caso(int mapa[4][4], int pos, int entry[16])
{
	if (checa_row_left(mapa, pos, entry) == 1)
		return (1);
	if (checa_row_right(mapa, pos, entry) == 1)
		return (1);
	if (checa_col_down(mapa, pos, entry) == 1)
		return (1);
	if (checa_col_up(mapa, pos, entry) == 1)
		return (1);
	return (0);
}
