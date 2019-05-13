/*
** my_printf2.c for my_printf.c in /home/Mystogunn/EPITECH/MY_PRINTF/TAB_PRINTF
** 
** Made by Josselin Cosmao
** Login   <Mystogunn@epitech.net>
** 
** Started on  Tue Nov 15 14:00:53 2016 Josselin Cosmao
** Last update Sun Nov 20 23:04:32 2016 Josselin Cosmao
*/

#include <stdarg.h>
#include "my.h"

int	my_printf2(int i, va_list ap, char *str)
{
  int	(*flag[11])(va_list);
  char	*functions;
  int	count;

  count = 0;
  functions = "discuxoXbpS";
  flag[0] = disp_di;
  flag[1] = disp_di;
  flag[2] = disp_s;
  flag[3] = disp_c;
  flag[4] = my_put_nbr_u;
  flag[5] = my_put_nbr_hexa;
  flag[6] = my_put_nbr_octa;
  flag[7] = my_put_nbr_up_hexa;
  flag[8] = my_put_nbr_bin;
  flag[9] = my_put_nbr_adress;
  flag[10] = disp_up_s;
  while (str[i] != functions[count])
    {
      count = count + 1;
      if (count > 12)
	return (84);
    }
  flag[count](ap);
  count = 0;
  return (0);
}

int		my_printf(char *str, ...)
{
  va_list	ap;
  int		i;

  va_start(ap, str);
  i = 0;
  if (str == 0)
    return (84);
  while (str[i] != '\0')
    {
      if (str[i] == '%')
	{
	  i = i + 1;
	  if (str[i] == ' ' && str[i + 1] == ' ')
	    my_putchar(' ');
	  while (str[i] == 32)
	    i = i + 1;
	  disp_pourcent(str, i);
	  my_printf2(i, ap, str);
	}
      else
	my_putchar(str[i]);
      i = i + 1;
    }
  va_end(ap);
  return (i);
}
