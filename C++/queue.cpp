#include <iostream> 
#include <queue> 
using namespace std;
// class for implement k queues in n sized arr. 
/* class queue{

    public:
    int *arr; 
    int size; 
    int n; 
    int *front; 
    int *rear; 
    int *next;   
    int freespot; 
    queue(int s, int n){
        size = s; 
        this->n = n; 
        arr = new int[size]; 
        front = new int[n]; 
        rear = new int[n]; 
        for(int i=0; i<n; i++){
            front[i]=rear[i] = -1; 
        } 
        next = new int[size]; 
        for(int i=0; i<size; i++){
            next[i] = i+1; 
        } 
        next[size-1] = -1; 
        freespot = 0; 
    } 



    void push(int m, int data){
        // checking for overflow; 
        if(freespot==-1){
            cout<<"Queue is overflowed"<<endl; 
            return ; 
        }    
        // at index data should be pushed. 
        int index = freespot; 
        // update freespot; 
        freespot = next[index]; 
        // update the front for 1st element; 
        if(front[m-1]==-1){
            front[m-1] = index; 
        } 
        if(rear[m-1]==-1){
            rear[m-1] = index; 
        } 

        next[rear[m-1]] = index; 

        next[index] = -1; 
        // update the rear pointer. 
        rear[m-1] = index; 

        // push the data into rear; 

        arr[index] = data; 
    } 

 
    
    int pop(int m){
        if(front[m-1]==-1) {
            cout<<"Queue is underflowed"<<endl; 
            return -1; 
        }
        int index = front[m-1]; 
        int ele = arr[index]; 
        front[m-1] = next[index]; 
        next[index] = freespot; 
        freespot = index;

        return ele; 
    }


}; 
*/


// Impementation of circular queue. 
/*class Nqueue{
    public:

    int *arr;
    int size;  
    int front; 
    int rear; 

    queue(int n){
        size = n; 
        arr = new int[size] ; 
        front = -1; 
        rear = -1;  
    } 

    void push(int x){
        // checking for oveerflow 
        if(rear==n-1){ 
            cout<<"Queue is overflown"<<endl;


        }else if(front==-1){ // 1st element need to be inserted. 
            front = rear = -1; 
        }else{
            rear++; 
        } 
        arr[rear] =  x; 
    }
    void pop(){
        // check for underFlow 
        if(front==-1){
            cout<<"queue is underflown"<<endl; 
        }else if(front==rear){
            rear = front = -1; 
        }else{
            front++; 
        }
        
    } 
    // for circulae queue just try to make the condition as cyclic. 

}
*/


// Find the sum of max and min element of every k sized sub Array; 
/*int getSum(int *arr, int n, int k){
    int ans = 0; 
    deque<int> maxi(k); 
    deque<int> mini(k);

    // Processing for 1st k sized window; 
    for(int i=0; i<k; i++){
        // processing to find max element ; 
        while(!maxi.empty() && arr[i] >= arr[maxi.back()]){
            maxi.pop_back(); 
        } 
        maxi.push_back(i); 

        // processing to find min element; 
       while(!mini.empty() && arr[i] <= arr[mini.back()]){
            mini.pop_back(); 
       } 
       mini.push_back(i); 

    } 

    ans = ans + arr[maxi.front()] + arr[mini.front()]; 

    // pocessing for remaining window; 
    for(int i = k; i<n; i++){
        // check for consider front ele or not; >> do the front elements have value in our next array ?
        while(!maxi.empty() &&  maxi.front() <= i-k){
            maxi.pop_front(); 
        }

        while(!mini.empty() &&  mini.front() <= i-k){
            mini.pop_front(); 
        }

        // add the last element in sub Array; 
        while(!maxi.empty() && arr[i] >= arr[maxi.back()]){
            maxi.pop_back(); 
        } 
        maxi.push_back(i); 


        while(!mini.empty() && arr[i] <= arr[mini.back()]){
            mini.pop_back(); 
        } 
        mini.push_back(i); 

        ans = ans + arr[maxi.front()] + arr[mini.front()]; 
    }

    return ans; 

}
*/

int main(){
// code for k queues in arr. 
/*    queue q(5,2); 
    q.push(1,10); 
    q.push(1,15); 
    q.push(2,20); 
    q.push(2,30); 
    q.push(1,40);  
    cout<<q.pop(1)<<endl; 
    cout<<q.pop(1)<<endl; 
    cout<<q.pop(1)<<endl; 
    cout<<q.pop(2)<<endl; 
    q.push(2,60); 
    cout<<q.pop(2)<<endl; 
*/    

// code for circular queue. 
/*    queue<int> q; 
    q.push(10); 
    q.push(20);
    q.push(30);

    cout<<"first ele: "<<q.front()<<endl; 

    q.pop(); 

    cout<<"first ele: "<<q.front()<<endl; 
    q.pop(); 
    q.pop();
   
    cout<<"Size: "<<q.size()<<endl; 
    q.pop();
    q.pop();
    
    cout<<"first ele: "<<q.front()<<endl;
*/

/*    int arr[6] = {5,-3,7,-2,8,-10};// 6+
    int k = 5; 
    int sum = getSum(arr,6,k); 
    cout<<"Sum is: "<<sum<<endl; 
*/    

    
}