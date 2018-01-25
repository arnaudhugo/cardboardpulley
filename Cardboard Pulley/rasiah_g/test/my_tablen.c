int	my_tablen(char tab[])
{
  int	nb_letter;

  nb_letter = 0;

  while (tab[nb_letter] != '\0')
    {
      nb_letter = nb_letter + 1;
    }
  return (nb_letter);
}