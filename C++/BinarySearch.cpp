#include<iostream>
using namespace std; 

// int rightO(int arr[],int size,int key){
//     int s=0,e=size-1,mid=s+(e-s)/2,ans=0;
//     while(s<=e){
//         if(arr[mid]==key){
//              ans=mid;
//              s=mid+1;
//         }else if(arr[mid]>key){
//             e=mid-1;
//         }else{
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//         return ans;
// }

// int leftO(int arr[],int size,int key){

//   int s=0,e=size-1,mid=s+(e-s)/2,ans=0;
    
//     while(s<=e){
//         if(arr[mid]==key){
//             ans=mid; 
//             e=mid-1;
//         }else if(key>arr[mid]){
//            s=mid+1;
//         }else{
//             e=mid-1; 
//         }
//              mid=s+(e-s)/2;

//     }
//         return ans;
// } 


int main(){
        bool isequal=0;
//   int arr[6]={0,1,1,2,2,2};  
//   int occurence= (rightO(arr,6,0)-leftO(arr,6,0))+1;

//     cout<<"occ of 0 is: "<<occurence<<endl;
        int n,arr[10]; 
        cout<<"enter total no of elements: "; 
        cin>>n; 
        for(int k=0;k<n;k++){
            cin>>arr[k];
        } 
        int i;
        int leftsum,rightsum; 
        for( i=0;i<n;i++){ 
            rightsum=0;
            for( int l=i+1;l<n;l++){
                rightsum=rightsum+arr[l];
            }
            leftsum=0;
            for(int j=0;j<i;j++){
                leftsum=leftsum+arr[j];
            }
               
        if(leftsum==rightsum){
           isequal=1; 
          //  cout<<"pivot index is: "<<i<<endl;
            break;
        }
        }
           if(isequal==1){
                cout<<"pivot index is: "<<i<<endl;
           }else{
            cout<<"there is no pivot element."<<endl;
           }
            

    return 0; 
}