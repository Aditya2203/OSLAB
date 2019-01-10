#include<iostream>
using namespace std;
main()
{ int n;
  cout<<"Enter the number of Processes ";
  cin>>n;
  int a[n],e[n],c[n],tat[n],w[n];
  float tata=0,wt=0;
  cout<<"Enter Arrival Time Of all the processes sequentially "<<endl;
  for(int i=0;i<n;i++)   cin>>a[i];
  cout<<"Enter Execution Time Of all the processes sequentially "<<endl;
  for(int i=0;i<n;i++) cin>>e[i];
  c[0]=e[0];
  for(int i=1;i<n;i++)
  { if(c[i-1]>a[i]) c[i]=c[i-1]+e[i];
    else c[i]=a[i]+e[i];
  }
  for(int i=0;i<n;i++) 
  tat[i]=c[i]-a[i];
  for(int i=0;i<n;i++) 
  w[i]=tat[i]-e[i];
  cout<<" Completion Time Of all the processes sequentially are "<<endl;
  for(int i=0;i<n;i++) cout<<c[i]<<"\n";
  cout<<"Turn Around Time Of all the processes sequentially are "<<endl;
  for(int i=0;i<n;i++) 
  {tata=(tata+tat[i]);
  cout<<tat[i]<<"\n";
  }
  cout<<" Avg TAT = "<<(tata/n)<<endl<<" Waiting Time Of all the processes sequentially are "<<endl;
  for(int i=0;i<n;i++) 
  {
  cout<<w[i]<<"\n";
  wt=(wt+w[i]);
  }
  cout<<"Avg Waiting Time = "<<(wt/n);
}
