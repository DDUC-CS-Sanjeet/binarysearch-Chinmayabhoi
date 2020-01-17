#include<iostream>
#include<algorithm>
using namespace std;

bool binarySearchReacursive(int* array, int startIndex, int lastIndex, int element)
{
	 int mid= (startIndex+lastIndex)/2;
    
       if(array[mid]==element)
	 	 return true;
	  else if(array[mid]>element)
	  {
        binarySearchReacursive(array,startIndex,mid,element);
       }
	   else
	    {
        binarySearchReacursive(array,mid,lastIndex,element);
		}
	return false;
}
bool binarySearchIterative(int* array, int startIndex, int lastIndex, int element)

{	
	int middle = (startIndex+lastIndex)/2;
	while (true)
	{
		if(array[middle] < element)
		{
			startIndex = middle;

		}
		else if(array[middle] == element)
		{
			return true;
			break;
		}
		else
		{
			 lastIndex = middle ;
		}
	}
  return false;
}

int main()
{
	int n,element;
	cout<<"\nEnter the size of array:";
	cin>>n;
	int array[n];
	cout<<"\nEnter the element of array:";
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	sort(array,array+n);
	cout<<"\nEnter the element to be searched:";
	cin>>element;
	int startIndex=0;
	int lastIndex=n;
	int x;
	char ch;
	do{
		cout<<"Enter the way you want to do binary search:"<<endl;
		cout<<"1.Recursion"<<endl;
		cout<<"2.Iteration"<<endl;
		cin>>x;
		
		switch(x){
		
		
			case 1: cout<<binarySearchReacursive(array,startIndex,lastIndex,element);
					break;
			case 2:	 cout<<binarySearchIterative(array,startIndex,lastIndex,element);	
	                break;
	                
	        default :
	        	cout<<"invalid choice";
				}
		cout<<"\n want to enter more(y/n) :";
		cin>>ch;
  		}		while(ch!='n');
	return 0;
}
