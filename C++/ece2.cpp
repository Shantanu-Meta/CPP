#include<iostream>
using namespace std;
void triplate(int arr[],int n,int s){
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
for(int k=j+1;k<n;k++){
if(arr[i]+arr[j]+arr[k]==s){
cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
}
}
}
}
}
void sorting(int arr[],int size){
    int i=0,j=0,k=size-1;
    while(j<=k){
        if(arr[j]==0){
            swap(arr[i],arr[j]);
            i++,j++;
        }else if(arr[j]==1){
            j++;
        }else{
            swap(arr[j],arr[k]); 
            k--;
        }
    }
}
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    } 
    cout<<endl;
}

int main(){

//   int arr[5]={5,8,4,1,2},s=8;  
//   triplate(arr,5,8);

int n,arr[100]; 
cout<<"enter any no: "; 
cin>>n; 
for(int i=0;i<n;i++){
    cin>>arr[i];
}

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<"  ";
//     }
//     for(int k=1;k<=i;k++){
//         cout<<k<<" ";
//     }
//     for(int l=i-1;l>=1;l--){
//         cout<<l<<" ";
        
//     }
//     cout<<endl;

// }
        sorting(arr,n); 
       printarr(arr,n);
    //     for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // } 
    //   cout<<endl;

    return 0;
}