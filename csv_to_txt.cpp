#include<bits/stdc++.h>
using namespace std;
string cchar(int n)
{
	string s = "";
	if(n==0)
	{
		string str = "0";
		return str;
	}
	while(n>0)
	{
		int d = n%10;
		n/=10;
		s = char(d+48)+s;
	}
	return s;
}


int main()
{
	string s = "edge_list";
	int i;
	for(int z=0;z<=0;z++)
	{
		string f=s;
		if(z!=0)
		{
		f = f + cchar(z);
		}
		for(i=0;i<=0;i++)
		{
			string in = f;
			string in2 = in;
			string in3 = in;
			if(i!=0)
			{
				//cerr << "E e"<<endl;
				in2 = in2 + "_";
				in3 = in3 + "_";
				in2 = in2 + cchar(i);
				in3 = in3 + cchar(i);
			}
			in2 = in2+".csv";
			in3 = in3+".txt";
			freopen(in2.c_str(),"r",stdin);
			freopen(in3.c_str(),"w",stdout);
			int n,m;
			cerr<<in2<<" "<<in3<<endl;
			scanf("%d,%d",&n,&m);
			printf("%d %d\n",n,m);
			while(m--)
			{
				int s,d;
				scanf("%d,%d",&s,&d);
				printf("%d %d\n",s,d);
			}
		}	
	}
}
