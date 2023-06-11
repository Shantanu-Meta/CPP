#include<bits/stdc++.h>
using namespace std; 

int main(){
    // int n; 
    // char val;
    // cin>>n; 
    // for(int i=0;i<n;i++){
    //   val='A'; 
    //     for(int j=0; j<n-i-1;j++){
    //         cout<<" ";
    //     } 
    //     for(int k=0;k<2*i+1;k++){
    //         cout<<val; 
    //         val++; 
    //     }
    //     cout<<endl;
    // }
    //     // cout<<endl; 
    //     val='A'; 
    // for(int i=n-1;i>=1;i--){
    //     val='A';
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" "; 
    //     }
    //     for(int k=0;k<i*2-1;k++){
    //         cout<<val; 
    //         val++; 
    //     }
    //      cout<<endl;
    // }
   
/*   //Pascle trianagle peinting: 
    int row; 
    cout<<"Enter no of Row: "; 
    cin>>row;  
    // Dynamic memory allocation>
    int **arr= new int*[row]; 
    for(int i=0;i<row;i++){
        arr[i]=new int[i+1]; 
    } 
    // Putting value in block according to pascle value.
    for(int i=0;i<row;i++){
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i){
                arr[i][j]=1; 
            }else{
                arr[i][j]=arr[i-1][j]+arr[i-1][j-1]; 
            }
        }
    } 
    // printing output>
    for(int i=0;i<row;i++){
        for(int j=0;j<i+1;j++){
            cout<<arr[i][j]<<" "; 
        } 
        cout<<endl;
    }
    // Deleting dynamic memory>>
    for(int i=0;i<row;i++){
        delete []arr[i];  
    }
    delete []arr; 
*/
  
  
    return 0; 
}