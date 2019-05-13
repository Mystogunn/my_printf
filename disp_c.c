/*
** disp_c.c for disp.c in /home/Mystogunn/EPITECH/MY_PRINTF/PSU_2016_my_printf
** 
** Made by Josselin Cosmao
** Login   <Mystogunn@epitech.net>
** 
** Started on  Tue Nov 15 18:41:05 2016 Josselin Cosmao
** Last update Tue Nov 15 19:47:52 2016 Josselin Cosmao
*/

#include "my.h"
#include <stdarg.h>

int	disp_c(va_list ap)
{
  my_putchar(va_arg(ap, int));
  return (0);
}
