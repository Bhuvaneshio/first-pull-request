
#include <iostream>

using namespace std;

void bsort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;++i)
	{
		for(j=0;j<(n-i);++j)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	}
	
	cout<<"Array after bubble sort:";
	for(i=0;i<n;++i)
		cout<<" "<<a[i];
}

int main()
{
    
    int n, a[50];
    cout<<"Enter an array size (<49..) : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bsort(a,n);
    return 0;
}