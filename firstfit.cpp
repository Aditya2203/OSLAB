#include<bits/stdc++.h>
using namespace std;//3 12 20 10 5 1 10 2 10 1 20 2 30 1 10 2 5 1 30 2 20 1 10 2 15 1 20 2 20
main()
{
	int n,m;
	cout<<"No. of processes";
	cin>>n;
	cout<<"No. of blocks in memory";
	cin>>m;
	int a[n],aa[m],s[m]={0},an[n]={0},re[m]={0};
	
	cout<<"Enter process size";
	for(int i=0;i<n;i++) cin>>a[i];
	
	cout<<"Enter size of memory blocks\n";
	cout<<"1. For Used \n 2. For hole\n";
	for(int i=0;i<m;i++) { cin>>re[i];cin>>aa[i]; }
	
	int flag[m]; for(int i=0;i<m;i++) flag[i]=0;
	
	for(int i=0;i<n;i++)
	{  
		for(int j=0;j<m;j++)
		{   s[i]+=aa[j];
			//cout<<"s[i] at "<<i<<"time is "<<s[i]<<endl;
			if(aa[j]>=a[i]&&flag[j]==0&&re[j]==2)
			{an[i]=s[i]-aa[j];
				aa[j-1]=aa[j]+a[i];
				aa[j]=aa[j]-a[i];
				if(aa[j]>0) flag[j]=0; 
				else flag[j]=1; 
				break;
			}
	
		}
	}
	
	cout<<"Starting addresses are\n";
	for(int i=0;i<n;i++) cout<<"For p"<<i+1<<" "<<an[i]<<"  \n";
}
