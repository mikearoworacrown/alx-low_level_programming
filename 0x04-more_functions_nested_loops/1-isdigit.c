/**
 * _isdigit - checks for digits 1-9
 * @c: test character.
 * Return: return 1 if true, else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
