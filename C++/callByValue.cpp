#include<iostream>
using namespace std;

int sum(int x=0,int y=0,int z=0);

int main(){
    int a,b,c,d; 
	cout<<"enter three no: ";
	cin>>a>>b>>c;
   cout<<"sum is: "<<sum(a,b,c)<<endl;
   cout<<"sum is: "<<sum(a)<<endl;


}
int sum(int x,int y,int z){

	return x+y+z;
}