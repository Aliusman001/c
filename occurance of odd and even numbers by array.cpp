#include <iostream>
using namespace std;
int main()
{
	int i;           //loop
	int arr[100];   //arrays
	int n;
	cout<<"Enter n:"<<"";
	cin>>n;
	cout<<"Enter "<<n<<" numbers:";
	
	for(i=0;i<n;i++){
	
	cin>>arr[i];}
		cout<<"odd numbers:"<<endl;
	for(i=0;i<n;++i){
		if(arr[i]%2==1)
		cout<<""<<arr[i]<<endl;
	}
		cout<<"Even numbers:"<<endl;
	for(i=0;i<n;++i){
		if(arr[i]%2==0)
		cout<<""<<arr[i]<<endl;
	}
	
	return 0;
}
