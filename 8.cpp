void sd_ceil_floor(int n)
{
	double a= n-int(n);
	if(a>=0.5)
	{
		cout<<ceil(n);
	}
	else
	{
		cout<<floor(n);
	}
}

void ksd_ceil_floor(int n)
{
	double a= n-int(n);
	if(a>=0.5)
	{
		cout<<int(n)+1;
	}
	else
	{
		cout<<int(n);
	}
}
