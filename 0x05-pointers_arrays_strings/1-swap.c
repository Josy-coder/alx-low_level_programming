/**
 * swap_int - swaps the values of two integers
 *		using two input parameters
 *
 * @i: input parameter 1
 * @j: input parameter 2
 *
 * Return: Nothing
*/

void swap_int(int *i, int *j)
{
	int temp;

	temp = *i;
	*i = *j;
	*j = temp;
}
