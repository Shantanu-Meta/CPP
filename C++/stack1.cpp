#include<bits./stdc++.h>
using namespace std;

/*class Stack{
    public:
    int *arr; 
    int size; 
    int top; 

    //  constructor
    Stack(int size){        
        this->size = size; 
        arr = new int[size]; 
        top = -1; 
    } 

    void push(int element){
        if(top<size){
            top++; 
            arr[top] = element; 
        }else{
            cout<<"Stack overFlow" << endl; 
        }
    } 

    void pop(){
        if(top>=0){
            top--; 
        }else{
            cout<<"Stack underFlow" <<endl; 
        }
    } 

    int peak(){
        if(top>=0 && top<size){
            return arr[top]; 
        }else{
            cout<<"No elements are present"<<endl;
            return -1;  
        }
    } 

    bool isEmpty(){
        if(top<0){
            return true; 
        }else{
            return false; 
        }
    }

}; 

*/

/*class Node{

    // struct for linked list creation. 
    struct myStack{
            myStack *next; 
            myStack *prev;
            int data; 
            myStack(int data) { 
                this->data = data; 
                next = NULL; 
                prev = NULL; 
            }
    };

    myStack* top = NULL;
    myStack* mid = NULL;
    int size = 0;

    public: 
    void push(int data){
        myStack *temp = new myStack(data); 
        if(size==0){
            top = temp; 
            mid = temp; 
            size++; 
            return ; 
        } 

        top->next = temp; 
        top->next->prev = top; 
        top = top->next; 
        size++; 
        
        if(size%2 ==0){
            mid = mid->next; 
        }
    }

    int pop(){
        // odd h to piche 
        if(top==NULL) return -1; 

        if(size%2==0){
            mid = mid->prev; 
        }
        size--; 
        int ele = top->data; 
        top = top->prev; 
        if(top==NULL){
            mid = mid->prev; 
            return ele;
        } 
        top->next->prev = NULL; 
        top->next = NULL; 
        
        return ele; 
    }

    int findMiddle(){
        if(mid==NULL) return -1; 

        return mid->data; 
    }

    void deleteMiddle(){
        if(size==0) return; 

        if(size==1){
            top = NULL; 
            mid = NULL; 
        }else if(size==2){
           top = top->prev; 
           mid = top; 
           top->next = NULL; 
        }else{
            mid->prev->next = mid->next; 
            mid->next->prev = mid->prev; 

            if(size%2==0){
                mid = mid->prev; 
            }else{
                mid = mid->next; 
            }
        }
        size--; 
    }

}; 
*/



int main(){
    
/*    
    Stack st(5); 

    st.push(5); 
    st.push(8); 
    st.push(12);
    st.push(5); 
    st.push(8); 
    st.push(12);
    
    cout<< st.peak()<<endl; 

    st.pop(); 
    cout<< st.peak()<<endl;
    
    if(st.isEmpty()){
        cout<<"stack is empty"<<endl; 
    }else{
        cout<<"Stack is not Empty"<<endl; 
    } 
*/
    
/*
    Node st;
    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);
    st.push(55);
    st.push(66);
    st.push(77);
    st.push(88);
    st.push(99);
    cout <<"Popped : "<< st.pop() << endl;
    cout <<"Popped : "<< st.pop() << endl;
    cout <<"Middle Element : "<< st.findMiddle() << endl;
    st.deleteMiddle();
    cout <<"New Middle Element : "<< st.findMiddle() << endl;
*/
    return 0; 
}