#include <bits./stdc++.h>
using namespace std;

class student{                  // Class is a keyword to make user defined data type,where all objects can be stored. 
                                // roll , name these are data member/Properties of an object.
    private:                    // Private / Public / Protected are acess modefiers, these help to get acess the data members
    int roll;                   // By default acess medefiers is private.
    public:
    // char *name=new char[100]; 
    char *name; 
    float height;  
    
    int getroll(){              // Getter -> to fetch the data of private members.
        return roll; 
    } 

    void setroll(int _roll){    // Setter -> to initilize any data of any private members.
        roll=_roll; 
    }
                                // In empty class, object is aloocated 1 byte memory to keep track.
    void setname(char name[]){
        strcpy(this->name ,name); 
    } 
   
   student(){       // non parameterzied constructer[ default ] 
     
    // name== new char[100]; 

     //cout<<"Adress of this: "<<this<<endl;   // "this" is a keyword that store adress of an object(here in case Ramesh).
    
        cout<<"Bhai me constructor hu"<<endl;

    } 
   ~student(){
        cout<<"Bhai me destructure hu"<<endl;
    }
    // student(int roll){

    //     this ->roll =roll; 
    // }

    // student(int roll,char name,float height){
    //     this->roll =roll; 
    //     this ->name =name; 
    //     this ->height= height; 

    // }

    // student(student &him){              // If we do call by value without '&', a new object named 'him' will be constructed and then 'ram's data'would be copied to 'him',another copy constructed will be called>> infinite loop . so to avoid it, simply do call by reference .
    //     this->roll= (him.roll)+1;
    //     this->name= him.name; 
    //     this ->height= him.height;  
        
    // }  
    student(student& S){ 

        char *temp= new char[strlen(S.name+1)];     
        strcpy(temp,S.name);  
        this->name =temp;  

        this->roll= S.roll; 
        this->height=S.height; 

    }

    void print(){ 
       
        cout<<"Name: "<<this->name<<endl ; 
        cout<<"Roll: "<<this->roll<<endl; 
        cout<<"Height: "<<this->height<<endl;
        cout<<endl<<endl;
    }

}; 


class car{
    public:
    double a; 
    int ab,b; 
    char ch;  
    int  d; 
   
}; 
class number{
    public:
    int a; 
    int b; 
    number(int i,int j) :a(i),b(j)
    {
        cout<<"constructor called"<<endl ;
        

    } 
    void print(){
        cout<<"a== "<<this->a<<endl; 
        cout<<"B== "<<this->b<<endl;
    }
};

int main()
{
/*  student ramesh,shantanu;     // ramesh & shantanu are objects , they have properties & beheaviour. 
    ramesh.name='A'; 
    ramesh.setroll(70);          // setting roll(private member) calling setter
    ramesh.height=5.6; 

    cout<<"Roll :"<<ramesh.getroll()<<endl;     // fetching data of private members using getter.
    cout<<"Name :"<< ramesh.name<<endl; 
    cout<<"Height: "<<ramesh.height<<endl;
    cout<<"size of Ramesh: "<<sizeof(ramesh)<<endl; 


 
    // Dynamic allocation >>> **************************

    student *ramesh = new student;          //  [Student is datatype(class) , ramesh is variable(object)]

    (*ramesh).name='R';     
    (*ramesh).height=6.3; 
    (*ramesh).setroll(52); 

    cout<<"Roll :"<<  (*ramesh).getroll()<<endl;            // one way by dereferencing using (*) sign
    cout<<"Name :"<<  (*ramesh).name<<endl; 
    cout<<"Height:"<< (*ramesh).height<<endl<<endl<<endl;
   
    cout<<"Roll:"<<  ramesh->getroll()<<endl;               // one way using arrow ( -> ) sign
    cout<<"Name:"<<  ramesh->name<<endl; 
    cout<<"Height:"<< ramesh->height<<endl;
   

   
   
    // Understanding of Constructer *******************


1.  student ramesh;      // (statically allocated) 
        cout<<"Adress of Ramesh object :"<<(&ramesh)<<endl<<endl<<endl;
 

2.  student *ramesh =new student; // (Dynamically allocated) 
        cout<<"Adress of Ramesh object :"<<ramesh<<endl;
   
   

3. (statically)   student arijit(12);         // 12 is going to roll var. of parameterised constructor. 12 is copied to arijit.roll
                  cout<< "roll of arijit: "<<arijit.getroll()<<endl; // fetching arijit.roll that is 12 .


4. (dynamically) student *arijit =new student(12); // (Dynamically allocated) 
                cout<< "roll of arijit: "<<arijit->getroll()<<endl;


    // Copy Constructor ************


    student ram(9,'R',6.1);   // Parameterised making of argument [line no. 33]

    cout<<"Roll :"<<ram.getroll()<<endl; 
    cout<<"Name: "<<ram.name<<endl; 
    cout<<"Height: "<<ram.height<<endl<<endl<<endl;



    student himesh(ram);        // Make himesh object and copy all properties of ram to himesh. It can canstruct by own without any copy constructor. But we made a copy constructor [Line no. 40(see there notes)]
                                
    cout<<"Roll :"<<himesh.getroll()<<endl;         
    cout<<"Name: "<<himesh.name<<endl; 
    cout<<"Height: "<<himesh.height<<endl<<endl<<endl;



    
    // Shallow copy & Deep copy.

    student s1; 
    s1.setroll(10); 
    s1.height=6.2; 
    char name[5]="Sanu"; 
    s1.setname(name); 

    s1.print(); 


    student s2(s1);  
    s2.print(); 

    s1.name[2]='K'; 
    s1.print(); 
    s2.setroll(50); 
    s2.print(); 
    
     
    
    student Sita; 

    student *Rama=new student; 
    delete Rama; 
    
*/ 
    // car c1; 
    // cout<<"size== "<<sizeof(c1)<<endl; 
    // cout<<sizeof(double)<<endl;  

    number copy(10,20); 
    copy.print(); 
    return 0;
}