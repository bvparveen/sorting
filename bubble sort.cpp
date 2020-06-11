#include <iostream>
#include<conio.h>
using namespace std;
int main() 
{
	int arr[100],i,j,n,temp;
	cout<<"enter the size of array";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"sort the array";
		for(i=0;i<n-1;i++)
		{
				for(j=0;j<n-i-1;j++)
				{
					if(arr[j] > arr[j+1])
					{
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			
		}
		cout<<"Sorted list in ascending order";
		for(j=0;j<n;j++)
		{
		  cout<<arr[j]<<endl;
	     }
	
	return 0;
	
}

