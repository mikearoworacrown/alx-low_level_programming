/**
 * swap_int - switches betwenn values.
 * @a: First value.
 * @b: Second value.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
