#ifndef REGRAS_JOGO_H
# define REGRAS_JOGO_H

int	duplo_check(int mapa[4][4], int pos, int num);
int	checa_col_up(int mapa[4][4], int pos, int entry[16]);
int	checa_row_right(int mapa[4][4], int pos, int entry[16]);
int	checa_col_down(int mapa[4][4], int pos, int entry[16]);
int	checa_row_left(int mapa[4][4], int pos, int entry[16]);
int	verificar_caso(int mapa[4][4], int pos, int entry[16]);

#endif
