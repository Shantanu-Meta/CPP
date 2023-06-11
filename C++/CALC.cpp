#include<iostream> 
using namespace std; 

int fibo(int n)
{
  if(n==0) return 0; 
  if(n==1) return 1;

  int val=fibo(n-1)+fibo(n-2); 
  return val;  

}


int main(){

   int n;
    cin>>n; 
    int ans= fibo(n); 
    cout<<ans<<endl;

    return 0; 
}