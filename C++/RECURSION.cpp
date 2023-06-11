#include <iostream>
using namespace std;
/*
int leftocc(int *arr,int n,int s,int e,int k){
    static int ans=-1;
    if(s>e){
        return ans;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        ans=mid;
        return leftocc(arr,n,s,mid-1,k);

    }
    if(arr[mid]>k){
          return leftocc(arr,n,s,mid-1,k);

    }else{
          return leftocc(arr,n,mid+1,e,k);
    }
}


int rightocc(int *arr,int n,int s,int e,int k){
    static int ans=-1;
    if(s>e){
        return ans;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        ans=mid;
         return rightocc(arr,n,mid+1,e,k);

    }
    if(arr[mid]>k){
          return rightocc(arr,n,s,mid-1,k);

    }else{
          return rightocc(arr,n,mid+1,e,k);
    }
}


void doswap(string &arr,int n,int i){

    if(i>n-i-1) return ;

    swap(arr[i],arr[n-i-1]);
    doswap(arr,n,i+1);

}

bool checkpalindrome(string& str, int i,int j){

    if(i>j) return true;
    if(str[i]!=str[j]) return false;

    if(str[i]==str[j]){
     return checkpalindrome(str,i+1,j-1);

    }
}

long long int power(int a,int b){

    if(b<=1) return a;

    if(b%2==0){
        return power(a,b/2)*power(a,b/2);
    }else{
        return power(a,b/2)*power(a,b/2)*a;
    }

}


void dosort(int *arr,int n,int i){

    if(n==1 || n==0) return ;

    if(arr[0]>arr[1]){
        swap(arr[0],arr[1]);

    }
    dosort(arr+1,n-1,i);

}

void reverse(int *arr,int n){

    if(n==0 || n==1) return;


    for(int i=1;i<n;i++){
        if(arr[i]<arr[0]){
            swap(arr[i],arr[0]);
        }
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

            reverse(arr+1,n-1);

}


void sorting(int *arr, int n, int i)
{   if(n<=i) return ; 
    int ans = arr[i];   
    int j;
    for (j = i - 1; j >= 0; j--)
    {
        if (arr[j] > ans)
        {
            arr[j + 1] = arr[j];
        }
        else
        {
            break;
        }
    }
    arr[j + 1] = ans;
    sorting(arr,n,i+1); 
    return ;
}
*/
void merge(int *arr,int s,int e){

    int mid= (s+e)/2; 

    int len1= mid-s+1; 
    int len2=e-mid; 
     
     //making 2 dabba
    int *arr1= new int[len1]; 
    int *arr2= new int[len2]; 

    // copying ele. from main array to dabbas.
    int mainindex= s; 
    for(int i=0;i<len1;i++){
        arr1[i]=arr[mainindex++];
    } 
    // mainindex=mid+1;
    for(int i=0;i<len2;i++){
        arr2[i]=arr[mainindex++]; 
    } 
    // sorting dabba and putting ele. in main array

    int index1=0; 
    int index2=0;  
    mainindex=s; 
    while(index1<len1 && index2<len2){
        if(arr1[index1]<arr2[index2]){
            arr[mainindex++]=arr1[index1++]; 
        }else{
            arr[mainindex++]=arr2[index2++]; 
        }
    } 
    while(index1<len1){
        arr[mainindex++]=arr1[index1++]; 
    } 
    while(index2<len2){
        arr[mainindex++]=arr2[index2++]; 
    } 


    delete []arr1; 
    delete []arr2; 

}

void mergesort(int *arr,int s,int e){

    if(s>=e) return ; 

    int mid=s+(e-s)/2; 
    mergesort(arr,s,mid); 
    mergesort(arr,mid+1,e);    
    merge(arr,s,e); 

}


int main()
{
    // int arr[7]={1,2,2,2,2,4,4};
    // int left= leftocc(arr,7,0,6,4);
    // int right= rightocc(arr,7,0,6,4);
    // cout<<"Left index="<<left<<" "<<"Right index="<<right<<endl;

    // string arr="love";
    // doswap(arr,4,0);
    // for(int i=0;i<4;i++){
    //     cout<<arr[i];
    // }
    // cout<<endl;
    // string str="ABBAcc";
    // bool ans=checkpalindrome(str,0,str.length()-1);
    // if(ans){  
    //     cout<<"yes"<<endl;
    // }else{
    //     cout<<"no"<<endl;
    // }
    // int a,b;
    // cout<<"Enter a & b: ";
    // cin>>a>>b;
    // cout<<"Power is: "<<power(a,b)<<endl;

    // int arr[5] = {2, 2, 2, 2,2};

    //  reverse(arr,5);
    //  for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    //  }
    // cout<<endl;

    // sorting(arr, 5, 1);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // int arr1[5]={1,3,5,7,9}; 
    // int arr2[3]={2,4,6}; 
    // int _new[8]={0}; 

    // int n=5; 
    // int m=3; 
    // int mainindex=0; 
    // int i=0,j=0; 
    // while(i<n && j<m){
    //     if(arr1[i]<arr2[j]){
    //         _new[mainindex]=arr1[i]; 
    //         i++, mainindex++; 
    //     }else{
    //         _new[mainindex]=arr2[j]; 
    //         j++, mainindex++; 
    //     }
    // }

    // while(i<n){
    //     _new[mainindex]=arr1[i]; 
    //     mainindex++,i++; 
    // } 

    // while(j<m){
    //     _new[mainindex]=arr2[j]; 
    //     j++,mainindex++; 
    // }

    // for(int i=0;i<n+m;i++){
    //     cout<<_new[i]<<" "; 
    // }
    // cout<<endl;


    int arr[12]={4,3,6,2,1,0,0,2,1,10,11,-2}; 
    int n=12; 
    mergesort(arr,0,n-1); 

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;

    return 0;
}