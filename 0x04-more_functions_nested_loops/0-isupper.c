/**
 * _isupper - check uppercase.
 * @c: character to test.
 * Return: return 1 if true, else return 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
