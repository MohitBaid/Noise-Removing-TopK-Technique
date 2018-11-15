#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("kolkata_names.csv","r",stdin);
	int b=255506;
	set < pair < string , string > > se;
	set < pair < string , string > > :: iterator st;
	map < pair < string, string > ,int> mp;
	while(b--)
	{
		string s,s1,s2;
		int id;	
		bool flag = true;
		getline(cin,s);
		for(int i=0;s[i]!='\0';i++)
		{
			if(s[i]==',')
			{
				flag=false;
			}
			else
			{
				if(flag)	s1=s1+s[i];
				else		s2=s2+s[i];
			}
		}
		s1=s1+'\0';
		s2=s2+'\0';
		//cout<<s1<<"   ----   "<<s2<<"\n\n";
		//s1.clear();
		//s2.clear();
		mp[make_pair(s1,s2)]++;	
		//cout<<s1<<"   ----   "<<s2<<" -- > " <<mp[make_pair(s1,s2)]<<"\n\n";
	}
	map <int,int > mp2;
	map <pair < string,string > ,int> :: iterator it;
	map <int,int> :: iterator jt;
	freopen("count_KOL_hotel.csv","w",stdout);
	for(it=mp.begin();it!=mp.end();it++)
	{
		cout<<it->first.first<<','<<it->first.second<<','<<it->second<<endl;
		//b+=it->second;
		mp2[it->second]++;
	}
	cerr<<b<<endl;
	freopen("count_KOL_hotel_freq.csv","w",stdout);
	cout<<"NO_Of_Reviews"<<','<<"No_OF_Hotels"<<endl;
	for(jt=mp2.begin();jt!=mp2.end();jt++)
	{
		cout<<jt->first<<','<<jt->second<<endl;
		//b-=jt->second*jt->first;
	}
	//cerr<<b<<endl;
}
