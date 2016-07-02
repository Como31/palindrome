/*
** my_malloc.c for   in /home/courne_l/rendu/synthese/palindrome/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Fri Jun 17 09:38:35 2016 courneil lucasc
** Last update Fri Jun 17 09:44:34 2016 courneil lucasc
*/

#include <stdlib.h>

void	*my_malloc(unsigned int t)
{
  char	*str;

  if (!(str = malloc(sizeof(char) * t)))
    return (NULL);
  return (str);
}
