/*
** my.h for  in /home/courne_l/rendu/synthese/sbml/SBMLparser/include
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Tue Jun 14 09:38:35 2016 courneil lucasc
** Last update Sat Jun 18 17:00:17 2016 courneil lucasc
*/

#ifndef MY_H_
# define MY_H_

void	puthelp();
void	check_flag(char **);
void	my_putchar(char);
void	my_putstr(char *);
void	*my_malloc(unsigned int);
void	my_exit();
int	my_strlen(char *);
int	check_palindrome(int);
int	iteration(int);
int	reverse_number(int);
int	add_opposite(int, int);
int	is_num(char *);
int	aff_n(int, int);
int	aff_b(int, int, int, char **);
int	aff_p(int, int);
int	aff_pimin(int, int);
int	aff_pimax(int, int);
int	isdigitstr(char *);
int	final_nb(int nb);
int	my_base_add(int, int, int);
int	final_b(int, int);
int	convert_base(int, int);
int	base_to_decimal(char *, int);

#endif /* !MY_H_ */
