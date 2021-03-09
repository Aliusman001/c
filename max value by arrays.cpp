#include <iostream>
using namespace std;
int main()
{
int a[100];
int n;
int i;
int max=a[0];
cout<<" Enter n : "<<"";
cin>>n;
cout<<"enter "<< n << "numbers :";
for(i=0;i<n;i++){
	
	cin>>a[i];}
	cout<<"max"<<endl;
	for(i=1;i<n;i++){
	
	if(max<a[i])


	max=a[i];}
	cout<<max;
}

