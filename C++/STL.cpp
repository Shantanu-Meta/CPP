#include<iostream> 
#include<array>   // for array
#include<vector> // for vector
#include<deque> // for deque
#include<stack> // for stack 
#include<queue>// for queue 
#include<set> //for set
using namespace std; 

int main(){
        /*// Array    =============>> it is a derived data type to store same type of data.
        array<int,4> a={1,5,8,9}; 
        cout<<"size of array is:"<<a.size()<<endl; 
        cout<<"at index 3 element is :"<<a.at(3)<<endl; 
        cout<<"first element:"<<a.front()<<endl; 
        cout<<"last element:"<<a.back()<<endl; 
        cout<<"array empty or not:"<<a.empty()<<endl<<endl<<endl; */ 


         // Vector  =============>>  it is also an array but if we want to store another data it will double itself to store it .

       /* vector<int> v; 
        cout<<"capacity: "<<v.capacity()<<endl;
        cout<<"element no: "<<v.size()<<endl;

        v.push_back(3); 
        cout<<"capacity: "<<v.capacity()<<endl;
        cout<<"element no: "<<v.size()<<endl;

        v.push_back(8); 
        cout<<"capacity: "<<v.capacity()<<endl;
        cout<<"element no: "<<v.size()<<endl;

        v.push_back(5); 
        cout<<"capacity: "<<v.capacity()<<endl;
        cout<<"element no: "<<v.size()<<endl; 
        cout<<"before pop back: "; 
        for(int i:v){
            cout<<i<<" ";
        } 
        cout<<endl; 
        v.pop_back();
        cout<<"after pop back: "; 
        for(int i:v){
            cout<<i<<" ";
        }
        cout<<endl; */ 


         /* Deque  =============>>  

            deque<int> d; 

            d.push_back(3);
            d.push_back(7);
            d.push_front(8); 
            d.push_front(12); 
            for(int i:d){
                cout<<i<<" ";  
            } 
            cout<<endl; 

             d.erase(d.begin()); 
        for(int i:d){
            cout<<i<<" ";
        }
         cout<<endl;

            cout<<"element at 0="<<d.at(0);
            cout<<endl; 

            cout<<"size is="<<d.size();
            cout<<endl;

            cout<<"before pop front: "; 
        for(int i:d){
            cout<<i<<" ";
        } 
        cout<<endl; 
        d.pop_front();
      

        cout<<"after pop front: "; 
        for(int i:d){
            cout<<i<<" ";
        }
        cout<<endl;

        cout<<"first el.="<<d.front()<<endl;
        cout<<"last el.="<<d.back()<<endl; */ 



        /*Stack============>> saadi may plate wala concept. (first in,last out);
       
        stack<int> s; 
        s.push(1); 
        s.push(5); 
        s.push(8); 
        cout<<s.size()<<endl; 
        cout<<s.top()<<endl ;
        s.pop(); 
        cout<<s.top()<<endl ;
        cout<<s.empty()<<endl ;
        cout<<s.swap(s.top())<<endl ;*/


    /* Queue =========>>  line concept(first in -first out concept); 
    queue<string>q; 
    q.push("shantanu"); 
    q.push("dutta"); 
    q.push("valo"); 
    q.push("jio"); 
    
    cout<<q.back()<<endl<<q.front()<<endl;
    int n= q.size(); 
    for(int i=0;i<n;i++){
        cout<<q.front()<<" "; 
        q.pop();
    } cout<<endl;
    cout<<q.size()<<endl; 
    q.push("go");
    cout<<q.empty()<<endl; */ 

    /* priority_queue   ===============>>(max to min / min to max); 
   
    priority_queue<int > max; 
    max.push(1);
    max.push(8);
    max.push(12);

    max.push(0); 
    int n= max.size();
    for(int i=0;i<n;i++){
            cout<<max.top()<<" "; 
            max.pop(); */

    // Set ===================>> this data str. always store unnique value and give o/p as a sorted order.
//     set<int> s; 
//     s.insert(5); 
//     s.insert(2); 
//     s.insert(11); 
//     s.insert(0); 

//      for(auto i:s){
//     cout<<i<<" "; 

//    } 
//    cout<<endl;
//    cout<<"-5 is present or not >>"<<s.count(-5)<<endl;
//    s.erase(s.begin()); 
//    for(auto i:s){
//     cout<<i<<" ";
//    }
//      cout<<endl;
//     cout<<"size is :"<<s.size(); 
    // vector<int,int>v={0,0}; 
    // cout<<v.empty()<<endl;
  
   
    vector<int >v={1,2,3}; 
    vector<vector<int>>ans; 
  ans.push_back(v); 
  cout<<ans<<endl;

 return 0; 
    
}