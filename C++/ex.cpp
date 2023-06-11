#include <bits/stdc++.h>
using namespace std;
/*int sqroot(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<e){
        if(mid*mid>arr[size-1]){
            e=mid-1;

        }else if(mid*mid<arr[size-1]){
            ans=mid;
            s=mid+1;

        }else{
                    return mid;
        }
            mid=s+(e-s)/2;

    }
    return ans ;
}*/
void make(string& s)
{
    s.push_back("56"); 
}
int main()
{

    // int n;
    // cout<<"enter any no: ";
    // cin>>n;

    // int arr[100];
    // for(int i=0;i<=n;i++){
    //     arr[i]=i;
    // }
    // //int value=;
    // cout<<"sqroot of no. is: "<<sqroot(arr,n);

    string s = "abcd";
    make(s);
    cout << s << endl;
    return 0;
}