/*
** my_putchar.c for   in /home/courne_l/rendu/synthese/palindrome/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Wed Jun 15 17:55:25 2016 courneil lucasc
** Last update Thu Jun 16 10:54:31 2016 courneil lucasc
*/

#include <unistd.h>
#include "my.h"

void	my_putchar(char c)
{
  write(2, &c, 1);
}
