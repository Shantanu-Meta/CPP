#include<iostream>
using namespace std;

// int sum(int *x=0,int *y=0,int *z=0);
int& fun(int k){
  int p=k; 
  int& ans = p ;
    
  return ans;
 


}
int& point(int k){
  int *ans=&k; 
  return ans;
}

int main(){
  //   int a,b,c; 
	// cout<<"enter three no: ";
	// cin>>a>>b>>c;
  //  cout<<"sum is: "<<sum(&a,&b,&c)<<endl;
  // // cout<<"sum is: "<<sum(&a)<<endl;

  int n=5; 
  
  fun(n); 



}
