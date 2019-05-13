/*
** my_putchar.c for my_putchar.c in /home/Mystogunn/EPITECH/MY_PRINTF/PSU_2016_my_printf_bootstrap
** 
** Made by Josselin Cosmao
** Login   <Mystogunn@epitech.net>
** 
** Started on  Mon Nov  7 20:48:06 2016 Josselin Cosmao
** Last update Mon Nov  7 20:48:49 2016 Josselin Cosmao
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
