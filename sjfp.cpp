#include<iostream>
using namespace std;
int main()
{
	int n,b[n],w[n],p[n];
	float sum=0;
	cout<<"Enter number of process"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	  p[i]=i+1;
	  cout<<"Enter burst time for"<<p[i]<<"=";
	  cin>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(b[i]>b[j])
			{
			int temp=b[j];
			b[j]=b[i];
			b[i]=temp;
			int t=p[j];
			p[j]=p[i];
			p[i]=t;
		    }
		}
	}
	w[0]=0;
	for(int i=0;i<n;i++)
	{
		w[i+1]=w[i]+b[i];
		cout<<"Waiting time of "<<p[i]<<"is= "<<w[i]<<endl;
		sum=sum+w[i];		
	}
	cout<<"Total waiting time "<<sum<<endl;
	cout<<"Average waiting time is "<<sum/n<<endl;
}
