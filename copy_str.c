#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	old_array[] = {1,2,3,4,5};
	int	new_array[];
	int	i;
	i = 0;
	while (i<5)
	{
		new_array[i] = old_array[i];
		printf("%i", new_array[i]);
		i++;
	}
	return (0);
}
