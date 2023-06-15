#include <stdio.h>
#include <stdlib.h>


void	go_southeast(int *lat, int *lon)
{
	printf("Move South East!\n");
	*lat = *lat - 1;
	*lon = *lon + 1;
}

int	main()
{
int	latitude;
int	longitude;

latitude = 12;
longitude = 23;
printf("Latitude is %i and longitude is %i\n", latitude, longitude);
go_southeast(&latitude, &longitude);
printf("Latitude is %i and longitude is %i\n", latitude, longitude);
return (0);
}
