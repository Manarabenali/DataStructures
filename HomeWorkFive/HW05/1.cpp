#include <iostream>
#include <string>
using namespace std;

struct Student {
    int ID;
    string name;
    int age;
    Student *next;
    
};
int main (){
  Student*student1=new Student{1001,"john doe",20,nullptr};
  Student*student2=new Student{1002,"jane smith",21,nullptr};
  Student*student3=new Student{1003,"bob johnson",19,nullptr};
  
    student1->next=student2;
    student2 ->next=student3;
    Student*current =student1;
    int count=1;
    while (current!=nullptr){
        cout<<"Student "<<count<<":"<<endl;
        cout<<"ID: "<<current->ID<<endl;
        cout<<"name: "<<current->name<<endl;
        cout<<"age: "<<current->age<<endl;
        current=current->next;
        count++;}
        
            delete student1;
            delete student2;
            delete student3;
            
            
    return 0;
}