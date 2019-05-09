// Using sizeof() operator

#include<iostream>
using namespace std;

int main()
{
	cout<<"Size of Integer\t: "<<sizeof(int)<<endl;;
	cout<<"Size of char\t: "<<sizeof(char)<<endl;
	cout<<"Size of string\t: "<<sizeof(string)<<endl;
	cout<<"Size of float\t: "<<sizeof(float)<<endl;
	cout<<"Size of double\t: "<<sizeof(double)<<endl<<endl;

// Also we can find number of elements isn an array by using this simple formula
	
	int arr[]={3,5,7,2,5,8};
	int elements=sizeof(arr)/sizeof(*(arr));
	
	cout<<"\n\nSize of Array: "<<sizeof(arr)<<endl;		//size of all the elemnts in an array which shpould be 6(total elements) X 4(size of int)=24
	cout<<"\nSize of Array Pointer: "<<sizeof(*arr);	//size of pointer should be 4 because here it only points to the first element
	
	cout<<"\n\nArray : ";
	for(int i=0;i<elements;i++)
	{cout<<arr[i]<<" ";}
	
	cout<<"\n\nNumber of elements in an Array(Size of Array/Size of Array pointer): "<<elements;
	
return 0;
}
