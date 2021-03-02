int toHop(int k, int n)
{
	int tuso = 1;
	int mauso1 = 1;
	int mauso2 = 1;
	for(int i=1;i<=k;i++)
	{
		mauso1*=i;
	}
	for(int i=1;i<=n;i++)
	{
		tuso*=i;
	}
	for(int i=1;i<=(n-k);i++)
	{
		mauso2 *=i;
	}
	return tuso / (mauso1 * mauso2);
}