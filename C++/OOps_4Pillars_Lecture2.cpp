#include<bits./stdc++.h> 
using namespace std; 

class Student{

    protected: 
    int age; 
     
    public: 
    string name; 
    char sec; 

    public: 
    void play(){
        cout<<"Student can play !"<<endl ; 

    } 
    void read(){
        cout<<"Student can read !"<<endl; 
    }

};  

class BoyStudent: public Student{
    public: 
    void charecter(){
        cout<<"Boys are Chad"<<endl ;
    } 
    void getplay(){
        play(); 
    }
   
    void setage(int age){
        this->age =age; 
    }
    int getage(){
        return this->age; 
    }
}; 

class Pen{

    public: 
    void write(){
        cout<<"Pen are used to write!"<<endl;
    } 
    
}; 
class Pencil: public Pen{

    public:  // Function can be overloaded by adding arguments >> polymorphism concept of function overloading.
    void write(){
        cout<<"Pencil are used to write!"<<endl;
    } 
    void write(int n){
        cout<<"They are easy to write"<<endl;
        
    } 
   
    
};  

/*class Add{
    public: 
    int value; 
    public: 
    void operator*(Add& B){
      int a= this->value; 
      int b=B.value; 

      cout<<"division is: "<<b/a<<endl;

    }

    void operator<= (){
        cout<<"This is pehrenthisis"<<endl;
    }

}; 
*/
class student{
    public: 
    int roll; 

    // student(){

    // } 
    student(int roll){
        this->roll = roll; 
    } 
    d
}; 

int main(){
    student S1(22); 
   
    cout<<S1.roll<<endl; 
    student S2(S1); 
    cout<<S2.roll<<endl;


    
//      Add a,b; 
//      a.value=10; 
//      b.value=20; 
//      a*(b); 

    // Pencil apsara; 
    // apsara.write(); 

    // BoyStudent s1; 
    // s1.getplay(); 
    // s1.charecter();  

    // s1.setage(19); 
    // cout<<"Age is: "<<s1.getage()<<endl;  



    return 0; 
}
