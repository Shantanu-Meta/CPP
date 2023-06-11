#include <iostream>
#include<string.h>
using namespace std;

int main(){
// // char c='*';
// int n;
// char ch;
// cout<<"enter any no.& charecter:: ";
// cin>>n>>ch;
// int i=0;

// while(i<n){
//    int j=0;
//     while(j<n){
//       cout<<ch<<" ";
//       j++;
//     }
//    cout<<endl;
//    i++;

// }                     =====================END=============

// int n;
//  cout<<"enter any no.";
//  cin>>n;
//  int i=1,ptr;//2
 
//  while(i<=n){
//   int j=1;//2
//    ptr=i;
//   while (j<=i)
//   {
    
//     cout<<ptr<<" ";
//     j++;
//     ptr--;
    
    
//   }
//   cout<<"\n";
//   i++;

//  }
                                 //  =====================END=============
/*   PROGRAMME TO PRINT   D
                          C D
                          B C D
                          A B C D
                          pattern */
// int n; 
// cout<<"enter any no:: ";
// cin>>n;

// int row=1;
// char ch;
// while(row<=n){
//   ch='A';
//    int col=1;
//    char ch1=ch+n-row;

//    while(col<=row){
//    cout<<ch1<<" ";
//    col++;
//    ch1++;
//   }

//     row++;
//     cout<<"\n";

// }
                                  //  =====================END=============

// print     n=4;   * * * *
//                  * * * 
//                  * * 
//                  * 


/*int n; 
cout<<"enter any no:: ";
cin>>n;

int i=1;
while(i<=n){

  int j=1;
  while(j<=n-i+1){
    cout<<"*"<<" ";
    j++;
  }
  cout<<"\n";
  i++;
}*/

                            //  =====================END=============
                          // ===============  FINAL PATTERN  =============
                          //                1
                          //              1 2 1
                          //            1 2 3 2 1
                          //          1 2 3 4 3 2 1
/*int n; 
cout<<"enter any no: ";
cin>>n;

int i=1;
while(i<=n){

 int space=1;
 while(space<=n-i){
  cout<<"  ";
  space++;
 }

 int j=1;
 while(j<=i){
  cout<<j<<" ";
  j++;
 }

int k=1;
while(k<=i-1){
  cout<<j-2<<" ";
  k++;
  j--;
}

i++;
cout<<endl;


}*/  



//                                =====================END=============

// int n;
// bool prime = 1; //==7
// cout<<"enter any no: ";
// cin>>n; 
// for(int i=2;i<n;i++ ){
//   if(n%i==0){
//     // cout<<"complex"<<endl;
//     prime=0;
//     break;
//   }
// }
// if(prime==0){
//   cout<<"complex"<<endl;
// }else{
//   cout<<"prime"<<endl;
// }

// 


// int n; 
// cin>>n;
// int sum=0,prod=1,rem,quo;
// while(n!=0){

//     rem=n%10;
//     quo=n/10;
//     n=quo;
//     prod=rem*prod;
//     sum=sum+rem;

//      }
//      cout<<"product-sum: "<<prod-sum<<endl;
//     // cout<<"sum: "<<sum<<endl;

                           //==================BINARY TO DECIMAL=====================
/*int n; 
cout<<"Enter any no: ";//1001
cin>>n;
int rem,val=0,i=0;  //i=1,2,3
while(n!=0){

  rem=n%10;     //1, 0,0,1
  n=n/10;           //100,10,1,0

  if(rem==1){
    val=(rem*pow(2,i))+val; //1,9
  }else{
    val=val+0; // 1
  }
  i++;


}
cout<<"ans: "<<val<<endl; */

// int n,rem,ans=0; 
// cin>>n; 

// while(n!=0){
//  rem=n%10;
//  n=n/10;
  
//   ans=(ans*10)+rem;
  
// }
// cout<<"ans: "<<ans<<endl;
// return 0;



// int n; 
// cout<<"enter any no: ";
// cin>>n;
// int ans=0,i=0;

// while(n!=0){
//   int bit= n&1;
//   if(bit==1){
//     bit=0;
//   }else{
//     bit=1;
//   }

//   //ans=(bit*pow(10,i))+ans;
//   ans=(ans*10)+bit;
//   n=n>>1;
//   i++;
// } 
// int rem,val=0,j=0;
//  while(ans!=0){

//   rem=ans%10;
//   ans=ans/10;

//   if(rem==1){
//      val=pow(2,j);
//   }else{
//     val=val+0;
//   }
//    j++; 



//  }

// cout<<"ans: "<<val<<endl;

// int n; 
// cout<<"enter no: ";
// cin>>n; 
// bool ispower=0;


// for(int i=0;i<31;i++){
//  if(n==pow(2,i)){
//       ispower=1;
//       break;
//  }
// }

// if(ispower==1){
//   cout<<"true"<<endl;
// }else{
//  cout<<"false"<<endl;
// }

// }


  
   string s="0001"; 
   int n=strlen(s); 
   cout<<n<<endl;
return 0; 
}