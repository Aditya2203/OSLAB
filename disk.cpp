#include<iostream >
#include<stdlib.h>
using namespace std;
int main()
{
		int n,x;
		int cylinder[200];
		int pos=0;
		int total=0;
			cout<<"enter the current position of the cylinder"<<endl;
			cin>>pos;
			cout<<"enter pending request\t"<<endl;
			cin>>x;
			cout<<"enter pending request:"<<"\n"<<endl;
			for(int i=0;i<x;i++)
			{
			cin>>cylinder[i];	
			}
			for(int i=0;i<x;i++)
			{
				total=total+abs(cylinder[i]-pos);
				pos=cylinder[i];	
			}
			cout<<"total movement "<<total;
}
