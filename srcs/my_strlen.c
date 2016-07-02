/*
** my_strlen.c for   in /home/courne_l/rendu/synthese/palindrome/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Wed Jun 15 17:55:37 2016 courneil lucasc
** Last update Wed Jun 15 17:55:38 2016 courneil lucasc
*/

#include "my.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
