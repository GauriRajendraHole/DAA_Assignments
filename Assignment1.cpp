# include <iostream>
using namespace std;

int main()
{
int n,i,count=0;
int arr[5];
cout<<"\n Enter size of Array : ";
cin>>n;
cout<<"\n Enter Array Element : ";

for(i=0;i<n;i++)
{
	cin>>arr[i];
}

for(i=0;i<n;i++)
{
	if(arr[i]==0)
	{
		count++;
	}
}
	cout<<"\t Total Zero's : "<<count<<endl;

return 0;
}
