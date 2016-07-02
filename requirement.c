/*
** requirement.c for   in /home/courne_l/rendu/synthese/sbml/palindrome
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Wed Jun 15 16:25:50 2016 courneil lucasc
** Last update Wed Jun 15 17:49:49 2016 courneil lucasc
*/

int	my_factrec_synthesis(int nb)
{
  if (nb > 12 || nb < 0)
    return (0);
  if (nb == 0)
    return (1);
  else
    {
      nb = nb * my_factrec_synthesis(nb - 1);
      return (nb);
    }
}

int	my_squareroot_synthesis(int nb)
{
  int	i;

  i = 0;
  if (nb == 0 || nb == 1)
    return (nb);
  while (i * i < nb)
    i++;
  if (i * i == nb)
    return (i);
  return (-1);
}

