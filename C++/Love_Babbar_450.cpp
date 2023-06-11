// Reverse lonked list using recurion. 
     // Base case 
        if(head == NULL || head->next == NULL) return head;  
        
        struct Node* temp =  reverseList(head->next); // call
        head->next->next = head; 
        head->next = NULL;  
        
        return temp; 

2.  long long maxSubarraySum(int arr[], int n){                 //subarray with max sum (kaden's algorithm)
        
       long long max_sum = INT_MIN; 
       long long max_sumToCheck =0; 
       for(int i=0;i<n;i++){
           max_sumToCheck+= arr[i];  
           if(max_sum < max_sumToCheck){
               max_sum = max_sumToCheck; 
           } 
           if(max_sumToCheck<0){
               max_sumToCheck = 0; 
           }
       }
        return max_sum ; 
    }
