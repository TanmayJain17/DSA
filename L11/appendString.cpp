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
void appendString(char *a,char *b){
	int n=strlength(a);
	int nb= strlength(b);
	cout<<b<<endl;
	int i;
	for(i=0;i<nb;i++){
		a[n+i]=b[i];
	}
	a[n+i]='\0';
	cout<<a;
}

int main(){
	char a[100],b[100];
	cin.getline(a,100);
	cin.getline(b,100);
	//cout<<a<<endl<<b;
	 

	appendString(a,b);
	return 0;

}