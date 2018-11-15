#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("edge_list.csv","r",stdin);
	int n,m;
	scanf("%d,%d",&n,&m);
	map < int , int > mp;
	map < int , int > :: iterator it;
	while(m--)
	{
		int s,d;	
		scanf("%d,%d",&s,&d);
		mp[s]++;
	}
	freopen("freq_list_res.csv","w",stdout);
	for(it=mp.begin();it!=mp.end();it++)
	{
		printf("%d,%d\n",it->first,it->second);
	}
}
