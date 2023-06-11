#include<bits/stdc++.h>
using namespace std; 

void subsequence(string s,vector<string>& ans,vector<string> output,int index){

    if(index>=s.length()){
        ans.push_back(output); 
        return ; 
    } 

    subsequence(s,ans,output,index+1); 
    
    output.push_back(s[index]); 
    subsequence(s,ans,output,index+1); 


}




int main(){

    cout<<"hello world";
    return 0; 
}