#include <iostream>
#include <algorithm> 
#include<string.h>
#include<array>
using namespace std;

int len(char name[]){
	int c=0; 
	int i=0; 
	while(name[i]!='\0'){
		c++; 
		i++;
	}
	return c; 
} 
void reverse(char name[],int n){
	int i=0; 
	int j=n-1; 
	while(i<j){
		swap(name[i++],name[j--]);
	}
}
int main() {
		string s="i am bot";  
		string s1; 
		for(int i=0;i<s.length();i++){
			if(s[i]==' '){
				s1.push_back('@'); 
				s1.push_back('4'); 

				
			}else{
				s1.push_back(s[i]);
			}
		} 
		cout<<s1<<endl;
	return 0;
}