#include <stdio.h>
#include <stdbool.h>

void
ft_sort_int_tab (int *tab, int size)
{
  int l = 0;
  int l_pivot = 0;
  bool l_permutation = 1;

  while (l_permutation)
    {
      l = 0;
      l_permutation = 0;
      while (l < size - 1)
	{
	  if ((*(tab + l)) > (*(tab + l + 1)))
	    {

	      l_pivot = *(tab + l + 1);
	      *(tab + l + 1) = *(tab + l);
	      *(tab + l) = l_pivot;
	      l_permutation = 1;
	    }
	  l++;
	}
    }
}

int
main (void)
{
  int l_tab[35];
  int i;

  for (i = 0; i < 10; i++)
    l_tab[i] = 45 - 2 * i;

  for (i = 0; i < 10; i++)
    printf ("%d, ", l_tab[i]);
  printf ("\n");

  ft_sort_int_tab (l_tab, 10);

  for (i = 0; i < 10; i++)
    printf ("%d, ", l_tab[i]);
  printf ("\n");
}
