#include <iostream>
using namespace std;

int get_hcf(int a,int b){

    if(a==0){
        return b; 
    }else if(b==0){
        return a; 
    }

    while(a!=b){
        if(a>b) 
            a=a-b; 
        if(b>a) 
            b=b-a; 
    }
    return b; 
}
int fact(int n){
    int i=1;
   long long  mul=1; 
    while(i<=n){
        mul=mul*i; 
        i++;
    }

    return (mul % 1000000007); 
}



int main(){ 

   int n; 
   cout<<"Enter a no: "; 
   cin>>n ; 
   int ans=fact(n); 
   cout<<"Factorial of n is: "<<ans<<endl; 
    return 0; 
}