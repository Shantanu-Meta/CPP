#include<iostream>
using namespace std;

// int sum(int x,int y,int z);
// float sum(float x1,float y1);

void sorted(int arr[],int n){

    for(int i=1;i<n;i++){ 
        int temp=arr[i];
        int j=i-1;
        for( ;j>=0;j--){

            if(temp<arr[j]){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        } 
            arr[j+1]=temp; 

    }



}


int main(){
    // int a,b,c; rt
	// cout<<"enter three no: ";
	// cin>>a>>b>>c;
    // cout<<"sum is: "<<sum(a,b,c)<<endl;
    // float f1,f2;
    // cout<<"enter two floating val:";
    // cin>>f1>>f2;
    // cout<<"sum of is: "<<sum(f1,f2)<<endl;nt n; 

    
    int n; 
    cin>>n; 
    int arr[n]; 
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
       
    } 
            sorted(arr,n); 
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

        return 0;
}
// int sum(int x,int y,int z){

// 	return x+y+z;
// }
// float sum(float x1,float y1){

//     return x1+y1;
// }
