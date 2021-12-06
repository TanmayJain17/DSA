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
bool checkPalindrome(char *str,char *str2){
	int n=strlength(str);
	int m=strlength(str2);
	if(m!=n){
		return false;
	}
	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=0;j<n;j++){
			if(str[i]==str2[j]){
				flag=1;
				str2[j]=' ';
			}
		}
		if(flag==0){
			break;
		}
	}
	int flag=1;
	for(int i=0;i<n;i++){
		if(str2[i]!=' '){
			flag=0;
			break;
		}
	}
	if(flag==0){
		return false;
	}
	return true;
}
int main(){
	char str[100];
	char str2[100];
	cin>>str>>str2;
	if(checkPalindrome(str,str2)){
		cout<<"Permutaion";
	}
	else{
		cout<<"NO";
	}
	return 0;
}