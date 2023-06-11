#include <bits/stdc++.h>
using namespace std;

void merge(int *arr1,int *arr2,int n,int m){

vector<int >v; 

int i=0,j=0; 
while(i<n && j<m)
{
    if(arr1[i]>arr2[j]){
        v.push_back(arr2[j]); 
        j++; 
    }else{
        v.push_back(arr1[i]); 
        i++;  
    }
    
} 
    // j++,i++; 
while(i<n){
    v.push_back(arr1[i]); 
    i++; 
}
while(j<m){
    v.push_back(arr2[j]); 
    j++; 
}
 

 for(int i=0;i<v.size();i++){
    cout<<v[i]<<" "; 
 } 


}
bool find(int *arr,int n,int x){
    int i=0, j=n-1; 
    while(i<j){
        if(arr[j]-arr[i]==x){
            return true; 
        }else if(arr[j]-arr[i]>x){
           j--; 
        }else{
            i++; 
        }
    } 
    return false; 

}
void sq(int *arr, int n){
    int newarr[n]; 
    int i=0,j=n-1,k=n-1; 
    while(i<=j){
        if(pow(arr[i],2)>=pow(arr[j],2)){
            newarr[k]=arr[i]*arr[i]; 
            k--; 
            i++;
        }else if(pow(arr[i],2)<pow(arr[j],2)){
            newarr[k]=arr[j]*arr[j]; 
            k--; 
            j--;
        }
    } 
    for(int i=0;i<n;i++){
        cout<<newarr[i]<<" "; 
    } 
    cout<<endl; 
}
int count_pairs(int *arr,int n,int x){

    int i=0,j=n-1,c=0; 
    while(i<j){
        if(arr[i]+arr[j]==x){ 
             c++;
            for(int k=i+1;k<j;k++){
                if(arr[k]==arr[i]){
                    arr[k]=-1; 
                }
            } 
            for(int k=j-1;k>i;k--){
                if(arr[k]==arr[j]){
                    arr[k]=-1; 
                }
            }
            i++,j--; 
        }else if(arr[i]+arr[j]>x){
            j--;
        }else{
            i++; 
        }
    }
    return c; 
}

int getsum(vector<vector<int>>matrix,int row,int col,int l1,int r1,int l2,int r2){

    int startingrow=l1,startingcol=r1,endingrow=l2,endingcol=r2,sum=0; 
    while((startingrow<=endingrow) && (startingcol<=endingcol)){

        for(int i=startingcol;i<=endingcol;i++){
            sum+=matrix[startingrow][i]; 
        }
        startingrow++; 

         for(int i=startingrow;i<=endingrow;i++){
            sum+=matrix[i][endingcol]; 
            
        } 
        endingcol--;

         for(int i=endingcol;i>=startingcol;i--){
            sum+=matrix[endingrow][i]; 
           
        } 
        endingrow--;

         for(int i=endingrow;i>=startingrow;i--){
            sum+=matrix[i][startingcol]; 
        
        } 
        startingcol++;

    }
    return sum; 


}


int main(){
 /* int arr1[3]={1,2,3}; 
    int arr2[4]={4,5,6,7}; 
    int n=3,m=4; 

 1)  merge(arr1,arr2,n,m); 
*/

/*  int arr[]={-3,-2,-1,1,2,3}; 
    int n=6;
    int x; 
    cout<<"Enter any no: "; 
    cin>>x; 

2)   bool is= find(arr,n,x); 
    if(is){
        cout<<"Yes it is found"<<endl;
    }else{
        cout<<"Not fond"<<endl;
    }


    int arr[]={5,6,7,8,9}; 
    int n=5;
    int x; 
    cout<<"Enter any no: "; 
    cin>>x; 

3)   bool is= find(arr,n,x); 
    if(is){
        cout<<"Yes it is found"<<endl;
    }else{
        cout<<"Not fond"<<endl;
    }

*/ 

/*   int arr[]={-10,2,8}; 
     int n=3; 
3)   sq(arr,n);  


    int arr[5]={1,3,3,3,5}; 
    int n=5; 
    int x; 
    cout<<"Enter any no: "; 
    cin>>x; 

    cout<<"No of count is: "<< count_pairs(arr,n,x)<<endl; 


3)  int row,col; 
    cout<<"Enter row,col: ";
    cin>>row>>col;  
    cout<<"Enter elements: "<<endl; 

    //taking input .

    int matrix[row][col]; 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j]; 
        }
    }   
    
    cout<<endl<<endl;
    int matrix2[col][row]; //declaring transpose matrix.

    for(int i=0;i<col;i++){          // filling transpose elements.
        for(int j=0;j<row;j++){
          matrix2[i][j]=matrix[j][i]; 
        }
    }  
    
    int r=col; 
    int c=row; 

    for(int i=0;i<r;i++){       // printing transpose matrix.
        for(int j=0;j<c;j++){
            cout<<matrix2[i][j]<<" "; 
        } 
        cout<<endl;
    }  
*/ 

/* // Spiral printing>> 

    int row,col,count=0; 
    cout<<"Enter row & col: "; 
    cin>>row>>col; 
    int matrix[row][col]; 
// Taking i.p >>
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j]; 
        }
    } 

//printing>. 

    int firstrow=0,firstcol=0,lastrow=row-1,lastcol=col-1; 
    while(count<=row*col){
        for(int i=firstcol;i<=lastcol;i++){
            cout<<matrix[firstrow][i]<<" "; 
            count++; 
        } 
        firstrow++;

         for(int i=firstrow;i<=lastrow;i++){
            cout<<matrix[i][lastcol]<<" "; 
            count++; 
        } 
        lastcol--;

         for(int i=lastcol;i>=firstcol;i--){
            cout<<matrix[lastrow][i]<<" "; 
            count++; 
        } 
        lastrow--;

         for(int i=lastrow;i>=firstrow;i--){
            cout<<matrix[i][firstcol]<<" "; 
            count++; 
        } 
        firstcol++;
    }
*/

    // Sum of elements inside matrix of rectangle>> 
    int row,col,l1,r1,l2,r2; 
    cout<<"Enter row and col: "; 
    cin>>row>>col; 
    cout<<"Enter (l1,r1) & (l2,r2): "; 
    cin>>l1>>r1>>l2>>r2; 
    vector<vector<int>> vec( row , vector<int> (col)); 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>vec[i][j]; 
        }
    }
    cout<<"Sum of elements is: "<<getsum(vec,row,col,l1,r1,l2,r2); 
    cout<<endl;
    
    return 0; 
}