#include<bits/stdc++.h>
using namespace std;
int strlength(char *arr) {
	int i = 0;
	int count = 0;
	while (arr[i] != '\0') {
		i++;
		count++;
	}
	return count;
}
void copystr(char *maxim,char *a){
	int n=strlength(a);
	n=n+1;
	for(int i=0;i<n;i++){
		maxarr[i]=a[i];
	}
}
int main(){
	int n;
	cin>>n;
	char maxarr[1000];
	//char *maxarr=NULL;
	int max=INT_MIN;
	while(n){
		char arr[100];
		cin.getline(arr,100);
		int size=strlength(arr);
		if(size>max){
			max=size;
			copy(maxarr,arr);
		}
		n--;
		
	}
	cout<<maxarr;
	return 0;

}