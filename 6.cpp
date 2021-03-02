int UCLN(int a,int b)
{
	while(a*b!=0)
	{
		if(a>b) a=a%b;
		else b=b%a;
	}
	return a+b;
}