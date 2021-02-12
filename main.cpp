ll gcd(ll a, ll b)
{
	if (a == 0 || b == 0)
		return a + b;
	if (a == b)
		return a;
	if (a == 1 || b == 1)
		return 1;
	if ((a & 1) == 0 && (b & 1) == 0)
		return 2 * gcd(a >> 1, b >> 1);
	if ((a & 1) == 0 && (b & 1) != 0)
		return gcd(a >> 1, b);
	if ((a & 1) != 0 && (b & 1) == 0)
		return gcd(a, b >> 1);
	if ((a & 1) != 0 && (b & 1) != 0)
	{
		if (a > b)
			return gcd((a - b) >> 1, b);
		if (a < b)
			return gcd((b - a) >> 1, a);
	}
}
