#ifndef FUNCOES_H
# define FUNCOES_H

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		*pega_numeros(char *str);
int		checar(int ac, char **av);
int		duplo_check(int tab[4][4], int pos, int num);
int		verificar_caso(int tab[4][4], int pos, int entry[16]);

#endif
