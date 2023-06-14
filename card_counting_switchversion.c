#include <stdio.h>
#include <stdlib.h>

int     main()
{
        /* evaluate the card*/
        char    card_name[3]
        puts("Enter the card name:");
        scanf ("%2s", card_name);
        int     val;
        val = 0;
	switch(card_name[0])
	{
		case 'A':
			val = 11;
			break;
		case 'K':
		case 'Q':
		case 'J':
			val = 10;
			break;
		default:
			val = atoi(card_name);
			break;
	}
    
        /* between 3-6, increase by 1*/
        int     count;
        count = 0;
        if ((val >= 3) && (val <= 6))
        {
                count += 1;
                printf("Count has gone up to %i", count);
        }
        /*10 J Q or K, decrease by 1*/
        else
        {
                count -= 1;
                printf("Count has gone down to %i", count);
        }
        return (0);
}

