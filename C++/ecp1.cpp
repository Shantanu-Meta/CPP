#include<iostream>
using namespace std;

/*int factorial(int n){
    int product=1;
   for(int i=1;i<=n;i++){
        product=product*i;   //120  2*6
   }
   return product;
}

int ans(int n,int r){
     int value= factorial(n) / (    factorial(r) * factorial(n-r)    );
         return value;
}    
                              ==========  end of 1) 
 */

void check(int n){

    bool isprime=1;

    for(int i=2;i<n;i++){
        
         if(n%i==0){
            isprime=0;
            break;
         }

    }
       if(isprime==1){
        cout<<"prime number"<<endl;
       }else{
        cout<<"complex number"<<endl;
       }

}


int ap(int n){

    int value=3*n+7;
    return value;
}


int fibo(int n){
    int i=2,sum,a=0,b=1;
  while(i<n){
  // a=0,b=1; 
   sum=a+b;
   b=sum;
   a=b;
   i++;
  }
 cout<<"ans "<<sum<<endl;
}

int store(int p){
           int count=0;
    while(p!=0){

      int bit=p &1;
      if(bit==1){
      count++;

      } 
      p=p>>1;
    }

      return count;

}



int task(int a,int b){

int sum=store(a)+store(b); 
return sum;

}
void update(int n){

 n=n/2;


}

int main(){                     //  1)  Printitng nCr;
    // int n,r;// 5 2
    // cout<<"enter n & r :";
    // cin>>n>>r;
    // cout<<n<<"C"<<r<<" is : "<<ans( n, r)<<endl;
    //                              ===============end============
    
    
    //                       2)  Printitng prime or not using fuction;

    //  int a,b; 
    //  cout<<"enter a & b : ";
    //  cin>>a>>b;

   // check(n);
     // cout<<"ans is:"<<ap(n)<<endl;

    //cout<<"fib: "<<fibo(n)<<endl;
//  int n=10; 
//    update(n);
//        cout<<"n is:  "<<n<<endl;
                    
    int array[5]={8,10,5,7,2};

    //To initialize the array with value'1'.
   // fill_n(array, 100, 1);

    //To check the array input (kewaal 5 hi kari h print)
//     for(int i = 0; i <= 20; i++){
//         cout << array[i] <<" ";
//     }
//  cout<<endl; 
  
    int max=array[0],min=array[0];
    
    for(int i=0;i<5;i++){
            if(array[i]>max){
                max=array[i];
            }
            if(array[i]<min){
                min=array[i];
            }
    }

 cout<<"max val: "<<max<<endl<<"min val: "<<min<<endl<<endl;

    return 0;
}