#include <iostream>
#include <string>
using namespace std;
 
 struct student{
    int ID;
    string name;
    int age;
};
   int main (){
     
     student*s1=new student{1001,"john doe",20};
     student*s2=new student{1002,"jane smith",21};
     student*s3=new student {1003,"bob johnson",19};
     cout<<"student 1:"<<endl;
     cout<<"name: "<<s1->name<<endl;
     cout<<"ID: "<<s1->ID<<endl;
     cout<<"age: "<<s1->age<<endl;
     cout<<"student 2:"<<endl;
     cout<<"name: "<<s2->name<<endl;
     cout<<"ID: "<<s2->ID<<endl;
     cout<<"age: "<<s2->age<<endl;
     cout<<"student 3:"<<endl;
     cout<<"name: "<<s3->name<<endl;
     cout<<"ID: "<<s3->ID<<endl;
     cout<<"age: "<<s3->age<<endl;
     return 0;
 }
