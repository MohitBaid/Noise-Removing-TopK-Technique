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
	int A[]={0,1,2,9,22,14,8,16,20,26,43,13,25,17,60,7,90,31,53,3,316,27,320,56,77,40,36,66,42,87,41,10,6,44,47,48,23,15,4,58,18,67,84,119,92,127,59,117,98,35,64,19,61,52,12,70,49,116,107,103,126,112,80,24,54,5,82,86,63,21,50,152,79,106,45,68,101,165,142,75,71,265,95,121,94,360,37,120,62,30,38,143,33,174,72,34,104,177,139,162,51,148,29,109,89,65,55,46,78,11,144,154,158,76,100,115,171,108,135,132,128,166,184,153,192,122,96,73,99,172,141,182,105,164,186,131,155,197,111,74,206,448,215,183,85,189,218,147,178,113,159,123,57,161,198,173,231,97,226,149,138,118,157,163,213,181,88,179,216,110,220,223,225,307,421,199,202,137,207,230,176,136,214,203,217,32,221,227,146,246,150,276,83,228,129,238,130,151,205,196,145,160,224,91,233,271,209,190,242,235,269,134,200,195,234,344,272,264,180,299,251,252,286,358,294,229,248,253,385,288,274,268,270,187,256,243,351,263,114,244,266,332,349,281,319,301,250,279,125,211,348,386,204,237,303,313,330,310,93,240,355,292,140,305,394,222,185,275,262,298,427,327,314,212,302,167,260,296,193,309,39,374,258,280,282,289,300,417,409,311,324,191,318,364,284,291,383,278,293,322,334,354,372,321,363,376,277,304,493,267,326,393,401,387,201,208,345,405,285,368,361,457,341,295,437,219,249,255,398,210,328,340,366,411,236,347,357,369,440,329,443,336,343,402,315,342,399,335,381,156,273,283,365,418,323,353,425,388,528,390,499,297,466,247,375,451,346,352,494,509,392,422,431,548,681,742,396,370,389,259,261,496,290,400,439,441,535,549,241,442,449,308,433,438,469,483,475,498,325,356,474,490,406,463,486,416,464,410,476,566,539,391,429,520,333,362,420,435,559,102},i,j;
	
	// From results of count folder


	string in,in2,in3,temp;
	for(i=0;i<=420;i++)
	{
		int j=0;
		in="edge_list";
		if(i==1)	
		{	
			in2=in+".csv";
		}
		else		
		{
			in2=in+cchar(i-1);
			in2+=".csv";
		}
		in3=in+cchar(i)+".csv";
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
			if(s==A[i]);
			else	m2++;
		}
		printf("%d,%d\n",n,m2);
		freopen(in2.c_str(),"r",stdin);
		scanf("%d,%d",&n,&m);
		while(m--)
		{
			int s,d;
			scanf("%d,%d",&s,&d);
			if(s==A[i]);
			else	printf("%d,%d\n",s,d);
		}
	}
}