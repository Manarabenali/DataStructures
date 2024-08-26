#include <iostream>
using namespace std;

struct Student{ 
    int ID;
    string name;
    int age;
};

int main (){
 Student student1;
  student1.ID=1001;
   student1.name="john doe";
   student1.age=20;
   cout<<"student 1: "<<endl;
 cout<<" name : "<<student1.name<<endl;
 cout<<" ID: "<<student1.ID<<endl;
 cout<<" age: "<<student1.age<<endl;

 Student student2;
  student2.ID=1002;
   student2.name="jane smith";
  student2.age=21;
  cout<<"student 2 :"<<endl;
 cout<<" ID: "<<student2.ID<<endl;
 cout<<"name: "<<student2.name<<endl;
 cout<< "age: "<<student2.age<<endl;
  Student student3;
  student3.ID=1003;
  student3.name="Bob johnson";
  student3.age=19;
  cout<<"student 3:"<<endl;
 cout<<" ID: "<<student3.ID<<endl;
 cout<<" age: "<<student3.age<<endl;
 cout<<" name: "<<student3.name<<endl;
 
 

 
 return 0;
}