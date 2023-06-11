#include<iostream>
#include<map >
#define ele 1, \
            2, \
            3
using namespace std;

// void reachhome(int src,int des){
//     if(src==des){
//       cout<<"pouch gya"<<endl;
//       return; 
//     }
//   src++; 
//   reachhome(src,des); 
//   return ; 

// }
// void saydigit(int n){

  // if(n<10){
  //   if(n==0){
  //   cout<<"zero\t"; 
  // }else if(n==1){
  //   cout<<"one\t";
  // }else if(n==2){
  //   cout<<"two\t";
  // }else if(n==3){
  //   cout<<"three\t";
  // }else if(n==4){
  //   cout<<"four\t";
  // }else if(n==5){
  //   cout<<"five\t";
  // }else if(n==6){
  //   cout<<"six\t";
  // }else if(n==7){
  //   cout<<"seven\t";
  // }else if(n==8){
  //   cout<<"eight\t";
  // }else if(n==9){
  //   cout<<"nine\t";
  // }
  //   return ; 
  // } 

//  if(n==0){
    
//     return ; 
//   } 






//   int digit=n%10; 
//   saydigit(n/10); 
//   if(digit==0){
//     cout<<"zero\t"; 
//   }else if(digit==1){
//     cout<<"one\t";
//   }else if(digit==2){
//     cout<<"two\t";
//   }else if(digit==3){
//     cout<<"three\t";
//   }else if(digit==4){
//     cout<<"four\t";
//   }else if(digit==5){
//     cout<<"five\t";
//   }else if(digit==6){
//     cout<<"six\t";
//   }else if(digit==7){
//     cout<<"seven\t";
//   }else if(digit==8){
//     cout<<"eight\t";
//   }else if(digit==9){
//     cout<<"nine\t";
//   }


// }

// bool checksorted(int arr[],int n){
//     if(n==0 || n==1) return true; 

//     if(arr[0]>arr[1]) return false; 
//     else{
//       bool ans= checksorted(arr+1,n-1); 
//       return ans; 
//     }

// }

// int sum(int *arr, int n){
   
//     if(n==0) return 0; 
//     if(n==1) return arr[0]; 

   
//     int _sum= arr[0]+sum(arr+1,n-1); 
//     return _sum; 

// }

// bool finding(int *arr,int n,int k){

//       if(n==0) return false; 
//       if(arr[0]==k) return true; 

//       bool ans= finding(arr+1,n-1,k);
//       return ans;

// }
// bool dofind(int arr[],int n,int s,int e,int k){

//   if(s>e)
//     return false; 

//   int mid=s+(e-s)/2; 
//   if(arr[mid]>k) {
//     bool ans= dofind(arr,n,s,mid-1,k); 
//   }else if(arr[mid]<k){
//     bool ans= dofind(arr,n,s+1,e,k); 
//   }else{
//     return true; 
//   }
// }

float seris(int n){
  cout<<"value of n=="<<n<<endl; 
  if(n==1) {
    return 1;
  } 

  float ans= (1/n) + seris(n-2); 
    return ans; 



}


int main(){             // Dynamic memory allocation of 2D array.
  /* nt row,col;
  cout<<"Enter row & coloum:"; 
  cin>>row>>col; 
  // Memory allocation in heap. 
  int **arr= new int*[row]; 
  for(int i=0; i<row; i++){
    arr[i]= new int[col];
  }

  // taking input
  for(int i=0;i<row; i++){
    for(int j=0;j<col;j++){
      cin>>arr[i][j]; 
    }
  }

  //showing output
  for(int i=0;i<row; i++){
    for(int j=0;j<col;j++){
      cout<<arr[i][j]<<" "; 
    }
     cout<<endl; 
  }
  // memory releasing from heap manually
   for(int i=0; i<row; i++){
   delete []arr[i];
  }
  delete []arr; 
   */
  
  // bool ans= checksorted(arr,5); 
  // if(ans){
  //   cout<<"sorted"<<endl;
  // }else{
  //   cout<<"not sorted"<<endl; 
  // }

  // cout<<"sum of all elements is :"<<sum(arr,0)<<endl; 
    // int arr[5]={0,2,3,4,5}; 
    // bool ans=dofind(arr,5,0,4,0); 
    // if(ans) cout<<"found"<<endl;
    // else cout<<"not found"<<endl;
  int n; 
  cout<<"enter no: "; 
  cin>>n; 
  
  cout<<"ans="<<seris(n)<<endl;

  // Jaggered array>>>>
/*
 int row,col; 
  cout<<"enter row: "; 
  cin>>row; 

  int **arr= new int*[row];         // asol array
  int *forcol= new int[row];        // declare of a array to stoe the coloum of each row for further task;

  for(int i=0;i<row;i++){
    cout<<"enter col: "; 
    cin>>col; 
    forcol[i]=col;                  // prothome forcol array te col. no. store then dyamic mem. alloc.
    arr[i]=new int[forcol[i]]; 

  }

  for(int i=0;i<row; i++){          // forcol amader help kor6e kotota ele, nite hbe.
    for(int j=0;j<forcol[i]; j++){
      cin>>arr[i][j]; 
    }
  }

  
  for(int i=0;i<row; i++){          // showing o/p.
    for(int j=0;j<forcol[i]; j++){
      cout<<arr[i][j]<<" "; 
    } 
    cout<<endl; 
  }


      delete []forcol;                  // releasing memory always.
      for(int i=0;i<row;i++){
        delete []arr[i]; 
      } 
      delete []arr; 
     
*/

  
  // saydigit(n); 
 

  return 0; 
}
