#include<bits./stdc++.h>
using namespace std; 

//                               Singly Linked List

/*
 class Node{

    public: 
    int data; 
    Node* next; 

    Node(int data){             // Constructor of a node
        this ->data = data; 
        this ->next = NULL;

    } 

    // Destructor of a node>> 
    ~Node(){
        
    }

};  

void insertAtHead(int data , Node* &Head){       
    Node* temp = new Node(data); 
    temp ->next =  Head; 
    Head = temp; 
};

void insertAtTail(int data, Node* &tail){
    Node* temp = new Node(data); 
    tail->next = temp; 
    tail = temp; 
}

void print(Node* Head){
   Node* LastHead = Head; 
   while(LastHead != NULL){
    cout<<  LastHead->data <<" ";
    LastHead = LastHead ->next;  
   } 
   cout<<endl<<endl;

}

void insertAtPosition(int data, int position, Node* &Head, Node* &Tail){
    // Insert at 1st position >> 
    if(position ==1){
        insertAtHead(data,Head); 
        return ; 
    }

    // Insert at middle position >>
    Node* index = Head; 
    int count= 1 ; 
    while(count< position-1){
        index = index ->next; 
        count++; 
    } 
    if(index-> next == NULL){           // from 53 to 56 it is used when we want to add node at last position.
        insertAtTail(data, Tail);
        return ; 
    }



    Node* nodeToInsert =  new Node(data); 
    nodeToInsert -> next = index-> next; 
    index->next = nodeToInsert; 

}

void deleteNode(int position, Node* & Head,Node*& Tail){

    if(position == 1){
        Node* temp = Head; 
        Head = Head->next; 
        temp->next = NULL; 
        delete temp;  
    }else{
        Node* current = Head;
        int cnt=1; 
        while(cnt<position-1){
        current = current ->next; 
        cnt++; 
        } 

        Node* ptrOfDeletedNode = current->next; 
        current->next = ptrOfDeletedNode->next;  
        if(ptrOfDeletedNode->next == NULL){
            Tail= current; 
        }
        ptrOfDeletedNode->next = NULL; 
        delete ptrOfDeletedNode; 

        }

       
} 


bool detectoop(Node* &Head){
    if(Head== NULL){
        return false; 
    } 
    Node* temp = Head; 
    map<Node*,bool> visited; 
    while(Head!= NULL){
        if(visited[temp]== true){
            return true; 
        } 
        visited[temp] = true; 
        temp = temp->next; 
    } 
    return false;
} 
Node* detectLoop(Node* Head){
    if(Head == NULL || Head->next == NULL){
        return NULL; 
    }

    Node* first = Head; 
    Node* slow = Head; 
    while(first != NULL && slow != NULL){
        
        first = first->next->next; 
        if(first != NULL){
            first = first->next; 
        } 
        slow=  slow->next; 
        if(first == slow) return slow; 

    }
    
    return NULL; 
}
Node* getfirstadress(Node* Head){
    if(Head == NULL){
        return NULL; 
    } 
    Node* fast = detectLoop(Head); 
    Node* slow = Head; 
    while(slow != fast){
        slow = slow->next; 
        fast = fast ->next; 
    } 
    return slow; 
} 
*/

//                              Doubly Linked List

/*
class Node{
    public: 
    int data; 
    Node* previous; 
    Node* next; 

    Node(int data){         // Constructor creation
        this ->data = data; 
        this ->previous = NULL; 
        this ->next = NULL; 
    } 
    ~Node(){
        cout<<"Distructed"<<endl;
    }

}; 

void print(Node* &Head){

    Node* head = Head; 
    while(head!= NULL){
        cout<<head->data<<" "; 
        head = head->next; 
    } 
    cout<<endl<<endl;

}

void insertAtHead(Node* &Head, Node* &Tail, int data){
    if(Head == NULL){
        Node* temp = new Node(data); 
        Head = temp; 
        Tail = temp;
    }else{
    Node* temp = new Node(data); 
    temp-> next = Head; 
    Head-> previous = temp; 
    Head= temp; 
    }
   

}

void insertAtTail(Node* &Head, Node* &Tail , int data){
    if(Tail == NULL){
        Node* temp = new Node(data); 
        Tail = temp;
        Head = temp;  

    }else{

    Node* temp = new Node(data); 
    Tail->next = temp; 
    temp->previous = Tail; 
    Tail = temp; 

    }
   
} 

void insertAtPosition(Node* &Head,Node* &Tail,int position,int data){
    // insert at first position
    if(position == 1){
        insertAtHead(Head,Tail, data); 
        return ; 
    }

    Node* head = Head; 
    int cnt=1; 


    while(cnt < position-1){
        head = head->next; 
        cnt++; 
    }  
    // Insert at Last position
    if(head-> next == NULL){
        insertAtTail(Head,Tail,data);
        return ; 
    } 
    // Insert at any middle position

    Node* nodeToInsert = new Node(data); 
    Node* temp = head->next; 
    nodeToInsert->next =temp; 
    temp->previous =nodeToInsert; 
    head->next = nodeToInsert; 
    nodeToInsert-> previous = head; 

} 

void deleteNode(Node* &Head ,Node* &Tail ,int position){

    if(position ==1){
        Node* temp = Head; 
        Head = Head-> next; 
        Head->previous = NULL; 
        temp->next = NULL;  

        delete temp; 
    }else{
        Node* curr = Head; 
        int cnt = 1 ;
        while(cnt<position){
            curr = curr ->next ; 
            cnt++; 
        }
        Node* prev = curr->previous; 
        curr->previous =NULL;
        prev ->next = curr->next ;
        if(curr ->next == NULL){
            Tail = prev; 
        }
        else{
            curr->next->previous = prev; 
        }
        curr->next = NULL;  

        delete curr; 

        
    }

}
*/

//                              Circular Linked List  (Singly)


class Node{

    public :
    int data; 
    Node* next;  
    // Constructor
    Node(int data){
        this ->data = data; 
        this ->next =NULL; 
    } 
    ~Node(){

    }
};
void createNode(Node* &Tail , int element, int data){

    if(Tail == NULL){
        Node* temp = new Node(data);
        Tail = temp; 
        temp-> next = temp; 
    }else{
        Node* traverse = Tail; 
        while(traverse->data != element ){
            traverse = traverse ->next; 
        }

        Node* temp = new Node(data); 
        temp->next = traverse-> next; 
        traverse->next = temp; 

    }


} 
void deleteNode(Node*& Tail,int data){
   
    if(Tail == NULL){
        cout<<"Sorry,lined list size should be minimum 1 !"<<endl;
    }else{ 
        Node* prev = Tail; 
        Node* curr = prev->next; 
        while(curr->data != data){
        prev = curr; 
        curr = curr-> next; 
    }    
   
    if(prev==curr){
        Tail = NULL;
 
    }else{
        
        Tail = Tail ->next; 
    }
        prev ->next = curr ->next; 
        curr ->next =NULL;
        delete curr; 
    }
    

}

void print(Node* &Tail){
   
    if(Tail == NULL){
        cout<<"Empty list "<<endl;
        return;
    }else{
         Node* traverse =Tail; 
    do
    {
      cout<<traverse->data<<" "; 
      traverse = traverse->next;
    } while (traverse!=Tail);
    cout<<endl<<endl;
    }

   

}

Node* gethead(Node* head){            
 
    if(head ==NULL){
        return NULL; 
    }else if(head->next == head){
       
        return head;  
    } 
    Node* fast = head; 
    Node* slow = head; 
    while(fast->next != head && fast->next->next != head){
        fast = fast->next->next; 
        slow= slow->next; 
    }  
    Node* secondHead = slow->next; 
    slow->next = head;
    // cout<<slow->next->data<<endl; 
    if(fast->next->next == head){
        fast->next->next = secondHead; 
    }else{
        fast->next = secondHead; 
    }

    return secondHead; 

}




int main(){ 

//                              Singly Linked List

 // 1st node of ll creation dynamically. 
  /*  Node* node1 = new Node(10); 
    Node* head = node1; 
    Node* tail = node1; 
    // print(head);
    
    insertAtTail(12,tail); 
    // print(head);
   
    insertAtTail(18,tail); 
    // print(head);  


    insertAtTail(12, tail); 
    // print(head);  

    insertAtTail(18, tail); 
    print(head);  
    // tail->next = head->next; 
    
    if(detectLoop(head)){
        cout<<"Lopp is detected"<<endl;

    }else{
        cout<<"No Loop is here"<<endl;
    }

    Node* temp = getfirstadress(head);
    cout<<"Starting point of Loop is: "<<temp ->data<<endl<<endl; 
   
    // insertAtPosition(50,4,head,tail); 
    // print(head); 

    // insertAtPosition(100,1,head,tail); 
    // print(head); 
    
    // deleteNode(5,head,tail);
    // print(head); 

    // cout<<"Head=="<<head->data<<endl ;
    // cout<<"tail=="<<tail->data<<endl ;

    // deleteNode(4,head,tail);
    // print(head); 
    
    // cout<<"Head=="<<head->data<<endl ;
    // cout<<"tail=="<<tail->data<<endl ;

*/
   
//                              Doubly Linked List   
   
    
/*   Node* HEAD = NULL; 
    Node* TAIL = NULL; 

    

    insertAtTail(HEAD, TAIL , 20); 
    print(HEAD);

    insertAtTail(HEAD, TAIL , 50); 
    print(HEAD);

    insertAtTail(HEAD, TAIL , 80); 
    print(HEAD);
   
    insertAtPosition(HEAD,TAIL,1,10); 
    print(HEAD);
    
    insertAtPosition(HEAD,TAIL,2,120); 
    print(HEAD);

    insertAtPosition(HEAD,TAIL,6,25); 
    print(HEAD);

    deleteNode(HEAD,TAIL,3);
    print(HEAD);
    cout<< "HEAD  "<<HEAD->data<<endl; 
    cout<< "TAIL  "<<TAIL-> data<<endl;
   
*/   
   
//                              Circular Linked List 


    Node* TAIL = NULL; 
   
    createNode(TAIL, 5,3); 
    // print(TAIL); 

    // createNode(TAIL, 3,10); 
    // print(TAIL); 
    
    // createNode(TAIL, 10,14); 
    // print(TAIL); 
    
    // createNode(TAIL, 3,18); 
    // print(TAIL); 
    
    // createNode(TAIL, 18,2); 
    // print(TAIL); 
    
    // createNode(TAIL, 10,100); 
    print(TAIL); 
    cout<<endl<<endl;  
   
   
    Node* head =gethead(TAIL); 
    print(TAIL); 
    cout<<endl<<endl;  
    print(head); 
    cout<<endl<<endl;
    

  
    // deleteNode(TAIL,3);
    // print(TAIL); 
    
   return 0; 
}
