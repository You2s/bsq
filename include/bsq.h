/*
** bsq.h for bsq in /home/sayyou_y/rendu/CPE-Prog-Elem/CPE_2014_bsq/include
** 
** Made by Youssef Sayyouri
** Login   <sayyou_y@epitech.net>
** 
** Started on  Wed Jan 14 11:47:09 2015 Youssef Sayyouri
** Last update Sun Jan 18 22:16:33 2015 Youssef Sayyouri
*/

#ifndef BSQ_H_
# define BSQ_H_

void	show_int_tab(char **char_tab, int **int_tab);
void	my_putnbr(int nbr);
void	show_char_tab(char **tab);
void	my_putchar(char c);
void	my_putstr(char *str);
void	*my_malloc(size_t s);
void	parse_int_tab(char **char_tab, int **int_tab);
void	square(char **tab, int x, int y, int max_val);
void	free_int_tab(char ** char_tab, int **int_tab);
void	free_char_tab(char **tab);
char	*my_realloc(char *old, int size);
char	*get_next_line(const int fd);
char	**init_char_tab(int file, int nbl);
int	**init_int_tab(char **char_tab);
int	tab_count(char **tab, char type);
int	min_val(int **tab, int i, int j);
int	arg_check(int ac);
int	file_check(int file, char *av);
int	gnl_check(char *str);
int	map_check(int n1, int n2);
int	bsq(char **char_tab, int **tab, int file, int nbl, char *str);
int	init_bsq(char **av, char *str, int *nbl);
int	my_strlen(char *str);
int	my_getnbr(char *str);

#endif /* !BSQ_H_ */
