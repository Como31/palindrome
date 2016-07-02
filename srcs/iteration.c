/*
** iteration.c for   in /home/courne_l/rendu/synthese/palindrome/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Thu Jun 16 09:32:48 2016 courneil lucasc
** Last update Sat Jun 18 23:41:52 2016 courneil lucasc
*/

//#include "my.h"

int		iteration(int nb)
{
  static int	boucle = 0;
  int		i;
  int		i2;

  if (check_palindrome(nb) == 0)
    {
      i = reverse_number(nb);
      i2 = add_opposite(nb, i);
      boucle++;
      return (iteration(i2));
    }
  return (boucle);
}
