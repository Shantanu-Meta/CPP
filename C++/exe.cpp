#include<bits/stdc++.h>
using namespace std;

class sportsman{

  public:
  char *name = new char[100]; 
  int age;
  static int fitness; 

  static void result(){
    cout<<this->age<<endl; 
  }
  // sportsman(char *name, int age){  // Parameterized Constructure
  //   this->name = name; 
  //   this->age = age;  
  // } 

  // sportsman(sportsman& man){    //  copy constructure 

  //   char *temp = new char[strlen(man.name) + 1]; 
  //   strcpy(temp,man.name); 
  //   name = temp; 

  //   this->age =man.age; 
  // }


  void print(){                 // printing of data
    cout<<"Name: "<<this->name<<endl;
    cout<<"Age: "<<this->age<<endl<<endl<<endl;
  }

  ~sportsman(){
    cout<<"Dectructure is called"<<endl; 
  }

};

int sportsman ::fitness = 10; 

int main(){
  // char ch[10] ="MSD"; 
  // sportsman m1(ch,25); 
  // m1.print(); 

  // sportsman m2 = m1; 
  // m2.print(); 

  // ch[0] = 'L'; 
  // m1.print(); 

  // m2.print();

  // sportsman m1; 

  // sportsman *m2 = new sportsman; 
  // delete m2; 
  
  cout<<"Max fitness: "<<sportsman::fitness<<endl;
  cout<<sportsman::result()<<endl;
 


  
    return 0;
}


// vzceojoxvthskrercrzzwbptrlvulronrmtbrulntlvlahigcctdggdgfeztydekrjkppgcorawqzji plpqtnirnzwnewvwwyicjonrkraxemtvzscsmul