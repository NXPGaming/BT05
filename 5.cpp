bool check(int n)
{
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
