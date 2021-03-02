void tamgiac(int n)
{
	for(int i=0;i<=(n-1);i++)
	{
		for(int j=-(n-1);j<=(n-1);j++)
		{
			if(j<=i && j>=(-i))
			{
				cout<<"*";
			}
			else cout<<" ";
		}
		cout<<endl;
	}
}
