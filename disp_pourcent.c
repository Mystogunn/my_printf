/*
** disp_pourcent.c for disp_pourcent.c in /home/Mystogunn/EPITECH/MY_PRINTF/PSU_2016_my_printf
** 
** Made by Josselin Cosmao
** Login   <Mystogunn@epitech.net>
** 
** Started on  Tue Nov 15 19:14:51 2016 Josselin Cosmao
** Last update Sun Nov 20 23:02:02 2016 Josselin Cosmao
*/

#include "my.h"
#include <stdarg.h>

int	disp_pourcent(char *str, int i)
{
  char	*string;
  int	j;

  j = 0;
  if (str[i] == '%')
    my_putchar('%');
  string = "discuxoXbpS";
  while (string[j] != '\0')
    {
      if (str[i] != string[j])
	return (0);
      j = j + 1;
    }
  return (0);
}
