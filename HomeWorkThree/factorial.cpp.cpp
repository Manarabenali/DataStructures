#include <iostream>
using namespace std; 
int fact(int n){
    if (n<=1){
        return 1;}
        else
        return n*fact(n-1);
        
    }
    int main (){
        int number;
        cout<<"Enter the number to calcluate the it factorial"<<endl;
        cin>>number;
        int result=fact(number);
        cout<<"the factorial of "<<number<<" "<<"is : "<<result<<endl;
        return 0; 
    }