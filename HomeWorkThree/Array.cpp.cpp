#include <iostream>
using namespace std;

 int calcAverage(int arr[],int size){
     int sum=0;
     for(int i =0; i<size ;i++){
         sum+=arr[i];
     }
     return sum/(size);}
     int main (){
         int numbers [10]={10,20,30,40,50,60,70,80,90,100};
         int average = calcAverage(numbers,10);
         cout<<"The average of the number is : "<<average<<endl;
         return 0;
     }