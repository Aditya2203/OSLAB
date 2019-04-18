#include<bits/stdc++.h>
using namespace std;
#define max 100
class WorstFit{
	public:
		int process,process_size[max],block_size[5]={500,100,400,200,300},index[5]={1,2,3,4,5},temp;
		void getdata()
		{
			cout<<"Enter number of processes= ";
			cin>>process;
			cout<<"Enter the size of processes:\n";
			for(int i=0;i<process;i++)
				cin>>process_size[i];
		}
		void calculation(){
			for(int i=0;i<3;i++){
				for(int j=0;j<5-i-2;j++){
					if(block_size[j]<block_size[j+1]){
						temp=block_size[j];
						block_size[j]=block_size[j+1];
						block_size[j+1]=temp;
					
						temp=index[j];
						index[j]=index[j+1];
						index[j+1]=temp;
					}
				}
			}
			for(int i=0;i<process;i++){
				for(int j=0;j<5;j++){	
					if((process_size[i]<=block_size[j]) && (index[j]!=-1)){
						cout<<"Index of process in memory for process "<<i+1<<":"<<index[j]<<endl;
						index[j]=-1;
						break;	
					}
					if((j==4) && (process_size[i]>block_size[j]))	
						cout<<"No memory allocate to process "<<i+1<<endl;	
				}	
			}
		}
};
int main()
{
	WorstFit obj;
	obj.getdata();
	obj.calculation();
}
