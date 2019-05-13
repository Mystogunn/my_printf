/*
** my_put_nbr.c for my_put_nbr.c in /home/Mystogunn/CPool_Day05
** 
** Made by Josselin Cosmao
** Login   <Mystogunn@epitech.net>
** 
** Started on  Mon Oct 10 08:58:54 2016 Josselin Cosmao
** Last update Tue Nov  8 16:55:18 2016 Josselin Cosmao
*/

#include "my.h"

int	my_put_nbr(int nb)
{
  int	modulo;

  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  if (nb >= 0)
    {
      if ( nb > 9)
	{
	  modulo = nb % 10;
	  nb = (nb - modulo) / 10;
	  my_put_nbr(nb);
	  my_putchar(48 + modulo);
	}
      else
	{
	  my_putchar(nb + 48);
	}
    }
  return (nb);
}
