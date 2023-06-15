
#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  /* evaluate the card */
  char card_name[3];
  int count;

  count = 0;
  puts ("Welcome to Pro Card Counter 3000. Press X to exit");
  while (card_name[0] != 'X')
    {
      puts ("Enter the card name:");
      scanf ("%2s", card_name);
      int val;
      val = 0;
      switch (card_name[0])
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
	  val = atoi (card_name);
	  if ((val <= 0) || (val >= 11))
	    {
	      printf ("The card name is not valid");
	      continue;
	    }
	  break;
	}

      /* between 3-6, increase by 1 */
      if ((val >= 3) && (val <= 6))
	{
	  count++;
	  printf ("Count has gone up to %i\n", count);
	}
      /*10 J Q or K, decrease by 1 */
      else if ((val == 10) || (val == 11))
	{
	  count--;
	  printf ("Count has gone down to %i\n", count);
	}
	else 
	{
	    printf ("Current count is %i\n", count);
	}
    }
  return (0);
}
