/*
** getop.c for   in /home/courne_l/rendu/synthese/palindrome
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Wed Jun 15 17:58:16 2016 courneil lucasc
** Last update Sat Jun 18 16:20:23 2016 courneil lucasc
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//#include "my.h"

int	reverse_number(int nb)
{
  int	n1;
  int	n2;
  int	quotient;
  int	reste;

  n1 = nb;
  n2 = 0;
  while (n1 > 0)
    {
      quotient = n1 / 10;
      reste = n1 - quotient * 10;
      n2 = 10 * n2 + reste;
      n1 = quotient;
    }
  return (n2);
}

int	add_opposite(int nb, int n2)
{
  return (nb + n2);
}

int     final_nb(int nb)
{
  int   i;

  while (check_palindrome(nb) == 0)
  {
    i = reverse_number(nb);
    nb = add_opposite(nb, i);
    check_palindrome(nb);
  }
  return (nb);
}

int	final_nb2(int nb)
{
  int	i;

  i = reverse_number(nb);
  nb = add_opposite(nb, i);
  return (nb);
}

char	*reverse_str(char *str)
{
  int	i;
  char  *new;
  int	len;

  i = 0;
  len = strlen(str) - 1;
  if (!(new = malloc(sizeof(char) * (len + 1))))
    return (NULL);
  while (str[i])
    {
      new[i] = str[len];
      i++;
      len--;
    }
  new[i] = '\0';
  return (new);
}

int	check_palindrome(int nb)
{
  char  *s1;
  char	*s2;
  int	i = 1;
  int	j;
  int	tmp;

  tmp = nb;
  while (tmp > 9)
    {
      tmp = tmp / 10;
      i++;
    }
  j = i;
  s1 = my_malloc(sizeof(char) * i);
  sprintf(s1, "%d", nb);
  s2 = reverse_str(s1);
  if (strcmp(s1, s2) == 0)
    tmp = 1;
  else
    tmp = 0;
  return (tmp);
}
