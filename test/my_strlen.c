int	my_strlen(char *str)
{
  int	end;

  end = 0;
  while ( str[end] != '\0')
    {
      end = end + 1;
    }
  return (end);
}