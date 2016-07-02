/*
** add_base.c for   in /home/courne_l/rendu/synthese/palindrome/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Fri Jun 17 00:07:06 2016 courneil lucasc
** Last update Fri Jun 17 09:42:45 2016 courneil lucasc
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int	addbase(int nb, int nb2)
{
  nb = nb + nb2;
  nb = convert_base(nb, 10);
  return (nb);
}

int	final_b(int nb, int base)
{
  int	conv_nb;
  int	sum;
  char	*str;
  int	tmp;
  int	i = 0;

  conv_nb = convert_base(nb, base);
  while (check_palindrome(conv_nb) == 0)
    {
      conv_nb = addbase(conv_nb, reverse_number(conv_nb));
      check_palindrome(conv_nb);
    }
  tmp = conv_nb;
  while (tmp > 9)
    {
      tmp = tmp / 10;
      i++;
    }
  str = my_malloc(sizeof(char) * (i + 1));
  sprintf(str, "%d", conv_nb);
  sum = base_to_decimal(str, base);
  return (sum);
}
