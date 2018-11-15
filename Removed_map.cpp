#include<bits/stdc++.h>
using namespace std;
int main()
{
	int A[]={0,1,2,9,22,14,8,16,20,26,43,13,25,17,60,7,90,31,53,3,316,27,320,56};
	int B[]={0,8399,11746,3574,5271,3393,4097,6892,8474,3529,3367,4168},i,j;
	freopen("hash_list.csv","r",stdin);
	int m=60644;
	string L[m+10];
	while(m--)
	{
		string temp,s1="",s2="",s3="";
		getline(cin,temp);
		int flag=0;
		//cout<<temp<<endl;

		for(int i=0;i<temp.size();i++)
		{
			if(temp[i]==',')	
			{
				flag++;
			}
			else if(temp[i] == ' '){}
			else
			{
				if(flag==0)	s1=s1 +temp[i];
				if(flag==1)	s2=s2 +temp[i];
				if(flag==2)	s3=s3 +temp[i];
			}
		}
		s1=s1+'\0';
		s2=s2+'\0';
		s3=s3+'\0';
		s1 = s1 + "(";
		s1 = s1 + s2;
		s1 = s1 + ")";

 		stringstream g(s3);
		int x = 0 ;
		g >> x;
		L[x]=s1;
	}
	freopen("Removed.csv","w",stdout);
	for(i=1;i<=24;i++)
	{
		for(j=0;j<=11;j++)
		{
			cout<<"Cluster"<<i<<"_"<<j<<",";
			cout<<L[A[i]];
			if(j!=0)
			{
				cout<<","<<L[B[j]];
			}		
			else
			{
				cout<<","<<" No Reviewer Removed";
			}
			cout<<endl;
		}
	}
}
