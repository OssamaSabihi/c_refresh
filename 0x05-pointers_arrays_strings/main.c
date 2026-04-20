#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 *  * main - check the code for ALX/1337 _atoi
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    int n;

	        /* Case 1: Standard positive */
	        n = _atoi("98");
		    printf("Result 1: %d (Expected: 98)\n", n);

		        /* Case 2: Standard negative */
		        n = _atoi("-402");
			    printf("Result 2: %d (Expected: -402)\n", n);

			        /* Case 3: Multiple signs (odd number of minus = negative) */
			        n = _atoi("          ------++++++-----+++++--98");
				    printf("Result 3: %d (Expected: -98)\n", n);

				        /* Case 4: Max Int */
				        n = _atoi("2147483647");
					    printf("Result 4: %d (Expected: 2147483647)\n", n);

					        /* Case 5: Min Int (The hardest one!) */
					        n = _atoi("-2147483648");
						    printf("Result 5: %d (Expected: -2147483648)\n", n);

						        /* Case 6: Text before number */
						        n = _atoi("Suite 402");
							    printf("Result 6: %d (Expected: 402)\n", n);

							        /* Case 7: Complex string with signs and noise */
							        n = _atoi("---++-ASSETS +++++0000--42--hf");
								    printf("Result 7: %d (Expected: 42)\n", n);

								        /* Case 8: No number at all */
								        n = _atoi("Hello World!");
									    printf("Result 8: %d (Expected: 0)\n", n);

									        return (0);
}
	
