/*
** my.h for my.h in /home/Mystogunn/EPITECH/MY_PRINTF/PSU_2016_my_printf/include
** 
** Made by Josselin Cosmao
** Login   <Mystogunn@epitech.net>
** 
** Started on  Wed Nov  9 15:52:23 2016 Josselin Cosmao
** Last update Fri Nov 18 11:40:48 2016 Josselin Cosmao
*/

#ifndef MY_H_
# define MY_H_
#include <stdarg.h>

int	disp_pourcent(char *str, int i);
int	disp_s(va_list ap);
int	disp_di(va_list ap);
int	disp_c(va_list ap);
void	my_putchar(char c);
int	my_put_nbr(int nb);
int	my_putstr(char *str);
int	my_printf(char *str, ...);
int	my_put_nbr_octa(va_list ap);
int	my_put_nbr_hexa(va_list ap);
int	my_strlen(char *str);
int	my_put_nbr_u(va_list ap);
int	my_put_nbr_up_hexa(va_list ap);
int	my_put_nbr_bin(va_list ap);
int	my_put_nbr_adress(va_list ap);
int	disp_up_s(va_list ap);

#endif /* !MY_H_ */
