#include<bits/stdc++.h>
using namespace std;


//OUTPUT
// A5_i
// 1 value @ arr[0] 0x61fea0 0x61fea0
// 2 value @ arr[1] 0x61fea4 0x61fea4
// 0x61fea8 0x61fea8

// 1 2 3 4 5

// type of *arr Pi
// 2 3 4 5 6
void updateArray(int *arr,int n){
	cout<<endl<<"type of *arr "<<typeid(arr).name()<<endl;
	for(int i=0;i<n;i++){
		*(arr+i)=*(arr+i)+1;
	}
}
int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(int);

	cout<<typeid(arr).name()<<endl;

	cout<<*arr<<" value @ arr[0] "<<arr<<" "<<&arr[0]<<endl;
	cout<<*(arr+1)<<" value @ arr[1] "<<arr+1<<" "<<&arr[1]<<endl;
	cout<<arr+2<<" "<<&arr[2]<<endl;

	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<*(arr+i)<<" ";
	}
	cout<<endl;
	updateArray(arr,n);
	for(int i=0;i<n;i++){
		cout<<*(arr+i)<<" ";
	}


	return 0;
}