#include<iostream>
#include<vector>
using namespace std; 

 void subset(vector<int>nums, vector<vector<int>>& ans, vector<int> output,int index){
        //base case >>
        if(index>=nums.size()){
            ans.push_back(output); 
            return ; 
        }  
        //Exclude kar do>> 
        subset(nums,ans,output,index+1); 

        //include kardo >> 
        output.push_back(nums[index]); 
        subset(nums,ans,output,index+1); 

    } 

 vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;  
        int index=0; 
        subset(nums,ans,output,index); 
        return ans; 
    }



int main(){

   vector<int> nums; 
   nums.push_back(1); 
   nums.push_back(2); 
   nums.push_back(3); 

   vector<vector<int>> ans= subsets(nums); 
    for(int i=0;i<ans.length();i++){
        cout<<ans[i]<<" "; 
    } 
    cout<<endl<<endl; 
    
    return 0; 
}

