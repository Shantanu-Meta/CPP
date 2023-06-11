#include <iostream>
#include <algorithm> 
#include<string.h>
#include<array> 
#include<bits/stdc++.h>
using namespace std;
int sumofcol(int arr[][4],int row,int col){ 
    //int sum=0;  
   int maxi=INT_MIN;
    for(int i=0;i<col;i++){
       int sum=0 ;
        for(int j=0;j<row;j++){
            sum+=arr[j][i]; 
        } 
        maxi=max(maxi,sum); 
    }
        return maxi ;
}
void wave(int arr[][4],int n,int m){
    for(int col=0;col<m;col++){
        if(col%2==0){
            for(int row=0;row<n;row++){
                cout<<arr[row][col]<<" "; 
            } 
        }
        else{
             for(int row=n-1;row>=0;row--){
                cout<<arr[row][col]<<" "; 
            }
        }
        }
    }


void rotate(int arr[][3],int row,int col){

    int matrix[row][col]; 
    for(int i=0,k=col-1;i<row,k>=0;i++,k--){
        for(int j=0,m=0;j<col,m<row;j++,m++){
            matrix[m][k]=arr[i][j];
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        } 
        cout<<endl;
    }
}


int main(){
    int arr[3][3]; 
    cout<<"enter 9 nos: ";
   
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col]; 
        } 
    } 
   rotate(arr,3,3);
    
    return 0; 
}