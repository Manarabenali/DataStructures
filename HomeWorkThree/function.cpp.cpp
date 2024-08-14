#include <iostream>
using namespace std;

void swap(int*a, int*b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main(){
    int x,y;
    cout<<"inter first number"<<endl;
    cin>>x;
    cout<<"enter the second numbe"<<endl;
    cin>>y;
    cout<<"the numbers before swap"<<"x= "<<x<<" "<<"y= "<<y<<endl;
    
    swap(&x,&y);
    cout<<"after the swap"<<"x= "<<x<<" "<<"y= "<<y<<endl;
    return 0;
}