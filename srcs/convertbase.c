/*
** convertbase.c for   in /home/courne_l/rendu/synthese/palindrome
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Fri Jun 17 00:09:27 2016 courneil lucasc
** Last update Fri Jun 17 15:16:24 2016 courneil lucasc
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "my.h"

char	*getbase(int base)
{
  if (base <= 1 || base > 10)
    {
      my_putstr("Base between 1 < b <= 10\n");
      exit(84);
    }
  if (base == 2)
    return ("01");
  if (base == 3)
    return ("012");
  if (base == 4)
    return ("0123");
  if (base == 5)
    return ("01234");
  if (base == 6)
    return ("012345");
  if (base == 7)
    return ("0123456");
  if (base == 8)
    return ("01234567");
  if (base == 9)
    return ("012345678");
  if (base == 10)
    return ("0123456789");
  return (NULL);
}

int	convert_base(int nb, int nbase)
{
  int   res;
  int   div;
  int   size_base;
  int	i = 0;
  char	*str;
  char	*base;
  int	sum;

  base = getbase(nbase);
  size_base = strlen(base);
  div = 1;
  while ((nb / div) >= size_base)
    {
      div = div * size_base;
    }
  str = my_malloc(sizeof(char) * size_base);
  while (div > 0)
    {
      res = (nb / div) % size_base;
      str[i] = base[res];
      i++;
      div = div / size_base;
    }
  sum = atoi(str);
  return (sum);
}

int     power(int i, int j)
{
  int	res;
  int	m;

  m = 1;
  res = 1;
  if (j == 0)
    return (1);
  while (m <= j)
    {
      res = res * i;
      m++;
    }
  return (res);
}

int	base_to_decimal(char *nbr, int base)
{
  int	res;
  int	i;
  int	nb;
  int	j;

  res= 0;
  j = 0;
  nb = atoi(nbr);
  i = strlen(nbr) - 1;
  while (i >= 0)
    {
      res = res + ((nb % 10) * power(base, j));
      nb = nb / 10;
      j++;
      i--;
    }
  return (res);
}
