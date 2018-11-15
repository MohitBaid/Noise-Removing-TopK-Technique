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
	int A[]={0,8399,11746,3574,5271,3393,4097,6892,8474,3529,3367,4168,4518,7988,3798,4728,3442,8002,7026,3511,9642,4542,3556,8454,3585,4675,3797,4711,3573,8180,9778,10487,4511,4248,4527,9399,3787,5657,8450,7973,3518,9611,4478,3557,5891,3544,3804,4012,8465,10334,9257},i,j;
	// From Data of count folder
	string in,in2,in3,temp;
	for(int z=1;z<=50;z++)
	{
		in="edge_list"+cchar(z);
		for(i=1;i<=50;i++)
		{
			int j=0;
			if(i==1)	
			{	
				in2=in+".csv";
			}
			else		
			{
				in2=in+"_"+cchar(i-1);
				in2+=".csv";
			}
			in3=in+"_"+cchar(i)+".csv";
			cerr<<in2<<" "<<in3<<endl;
			freopen(in2.c_str(),"r",stdin);
			freopen(in3.c_str(),"w",stdout);
			int n,m;	scanf("%d,%d",&n,&m);
			int m3=m;
			int m2=0;
			while(m3--)
			{
				int s,d;
				scanf("%d,%d",&s,&d);
				if(d==A[i]);
				else	m2++;
			}
			printf("%d,%d\n",n,m2);
			freopen(in2.c_str(),"r",stdin);
			scanf("%d,%d",&n,&m);
			while(m--)
			{
				int s,d;
				scanf("%d,%d",&s,&d);
				if(d==A[i]);
				else	printf("%d,%d\n",s,d);
			}
		}
	}
}
