#include<iostream>
#include<string>
using namespace std;

void incre(int & j){
   j++; 
}


 int main(){

   //  int n=7; 
   //  cout<<&n<<endl;
   // int *p=&n; 
   // cout<<p<<endl; 
   // cout<<&p<<endl; 
   // cout<<sizeof()<<endl;

   // int arr[5]={10,2,3,4,5}; 

   // cout<<arr<<endl;
   // cout<<&arr[0]<<endl;
   // int *p=arr; 
   // cout<<p<<endl;

   // int *ptr=&arr[0]; 
   // cout<<   ptr<<endl;
    
   // cout<<(*p)<<endl; 
   // cout<<(*ptr)<<endl;
   // cout<<&p<<endl;
   // cout<<*p<<endl;
   // *p=*p+1; 
   // cout<<*p<<endl;

   // char ch[6]={"abcde"}; 
   // cout<<ch<<endl;
   // cout<<&ch[0]<<endl;
   // char *p=&ch[0]; 
   // cout<<p<<endl;
   // cout<<&p+1<<endl;
   // cout<<&p<<endl;

   // cout<<*p<<endl;
   // char temp= '@';
   // char *z=&temp; 
   // cout<<z<<endl;
   // cout<<*z<<endl;

   // int a=5; 
   // cout<<a<<endl;
   // int *p=&a;
   // doing(p);     
   // cout<<a<<endl;

// int n[3]={1,22,3} ; 
// int *p1=&n[0]; 
// int *p2=&n[0]+1; 
// cout<<p1<<endl;
// cout<<p2<<endl;
// cout<<p2-p1<<endl;
   

   // int x=5; 
   // int *p=0; 
   // p=&x; 
   // cout<<*p<<endl; 
   // cout<<(&x)<<endl;

   // int arr[]={1,2,3,4}; 
   // &arr[0]=&arr[0]+1;
   // cout<<arr<<endl;  
   int n=5; 
   incre(n); 
   cout<<n<<endl;
   






    return 0;
 }