/*
** help.c for   in /home/courne_l/rendu/synthese/palindrome/srcs
** 
** Made by courneil lucasc
** Login   <courne_l@epitech.net>
** 
** Started on  Thu Jun 16 11:04:22 2016 courneil lucasc
** Last update Thu Jun 16 11:14:37 2016 courneil lucasc
*/

#include "my.h"

void	puthelp()
{
  my_putstr("USAGE\n"
	    "\t./palindrome -n number -p palindrome [-b base]"
	    "[-imin i] [-imax i]\n"
            "\nDESCRIPTION\n"
            "\t-n nb        integer to be transformed (≥ 0)\n"
            "\t-p pal       palindromic number to be obtained (incompatible"
	    "with the −n option) (≥ 0)\n"
            "\t\t     if defined, all fitting values of n will be output\n"
	    "\t-b base      base in which the procedure will be executed"
	    " (1 < b ≤ 10) [def: 10]\n"
	    "\t-imin i      minimum number of iterations,"
	    "included (≥ 0) [def: 0]\n"
       	    "\t-imax i      maximum number of iterations,"
	    "included (≥ 0) [def: 100]\n");
}
