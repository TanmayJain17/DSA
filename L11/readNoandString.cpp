#include<bits/stdc++.h>
using namespace std;
//to read both num and char dont give any space or '\n'

//to solve this situation use cin.ignore ->it ignores one char while reading from input buffer
int main(){
	int n;
	cin>>n;
	char arr[100];
	cin.ignore();//ignores one character
	cin.getline(arr,100); //cin.getline(arr,100,' ');
	cout<<n<<endl<<arr;
	return 0;
}