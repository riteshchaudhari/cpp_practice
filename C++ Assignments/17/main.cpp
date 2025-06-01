#include<iostream.h>
template <class T>
void sort(T * arr,int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if( *(arr+j) > *(arr+j+1) )
			{
				T temp;
				temp=*(arr + j);
				*(arr +j ) = *(arr + j+1);
				*(arr +j+1)=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		cout<<*(arr + i)<<" ";
	}
	cout<<endl;
}
void main()
{
	int  *arr,no;//[10]={12,34,23,67,21,10};
	char *arr1;//[10]={'C','K','Y','R','P'};
	cout<<"Enter no: "<<endl;
	cin>>no;
	arr=new int[no];
	cout<<"Enter int Data: "<<endl;
	for(int i=0;i<no;i++)
		cin>>*(arr+i);
	sort(arr,no);

	arr1=new char[no];
	cout<<"Enter char Data: "<<endl;
	for( i=0;i<no;i++)
		cin>>(arr1+i);
	sort(arr1,no);
	//rt(arr1,no);
}