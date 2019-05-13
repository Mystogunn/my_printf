/*
** my_strlen.c for my_strlen.c in /home/Mystogun/CPool_Day04
** 
** Made by Josselin COSMAO
** Login   <Mystogun@epitech.net>
** 
** Started on  Thu Oct  6 22:17:09 2016 Josselin COSMAO
** Last update Fri Nov 11 13:37:54 2016 Josselin Cosmao
*/

int	my_strlen(char *str)
{
  int	repet;
  
  repet = 0;
  while (str[repet] > '\0')
    {
      repet = repet + 1;
    }
  return (repet);
}
