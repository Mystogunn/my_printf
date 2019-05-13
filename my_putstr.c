/*
** my_putstr.c for my_putstr.c in /home/Mystogun/CPool_Day04
** 
** Made by Josselin COSMAO
** Login   <Mystogun@epitech.net>
** 
** Started on  Thu Oct  6 18:04:49 2016 Josselin COSMAO
** Last update Fri Nov 11 13:38:53 2016 Josselin Cosmao
*/

#include "my.h"

int	my_putstr(char *str)
{
  int	repet;
  
  repet = 0;
  while (str[repet] != '\0')
    {
      my_putchar(str[repet]);
      repet = repet + 1;
    }
  return (repet);
}
