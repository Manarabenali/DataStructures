#include <iostream>
#include <string>
using namespace std; 
int main (){
    
       int n,m;
       cout<<"Enter number of students :  ";
       cin>>n;
       cout<<"Enter number of subject : ";
       cin>>m;
       string*subjects=new string[m];
       string*students=new string[n];
       int**grades=new int*[n];
       float*averages=new float[n]();
       for(int i=0; i<n;i++){
           grades[i]=new int[m];
       }
       cout<<"Enter names of subject : "<<endl;
       for(int i=0;i<m;i++){
           
           cout<<"subject"<<i+1<<": ";
            cin>>subjects[i];
       }
         for(int i=0; i<n;i++){
             cout<<"Enter name of student "<<i+1<<":";
             cin>>students[i];
             for(int j=0;j<m;j++){
                 cout<<"Enter grade for "<<subjects[j]<<":";
                 cin>>grades[i][j];
             }
                 averages[i] /= m;
             }
          cout <<" Student name ";
          for(int i=0;i<m;i++){
              cout<<" "<<subjects[i];
          }
         cout<<"average "<<endl;
         for(int i=0;i<n;i++){
             cout<<students[i];
             for(int j=0;j<m;j++){
                 cout<<" "<<grades[i][j]<<endl;
             }
         delete[] subjects;
         delete[] students;
         delete[] averages;
         for(int i=0;i<n; i++){
             delete[] grades[i];
         }
         delete[] grades;
         return 0;
             
         }
}