/*
** my_strcmp.c for   in /home/courne_l/rendu/synthese/palindrome/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Wed Jun 15 17:55:08 2016 courneil lucasc
** Last update Wed Jun 15 17:55:10 2016 courneil lucasc
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  if (s1 == NULL)
    exit(0);
  if (my_strlen(s1) != my_strlen(s2))
    return (-1);
  while (s1[i] != '\0' && s2[i] != '\0')
    {
      if (!s1[i] || !s2[i] || s1[i] != s2[i])
	return (s1[i] - s2[i]);
      i++;
    }
  return (0);
}
