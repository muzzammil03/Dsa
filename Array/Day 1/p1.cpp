// 1.Counting of Zeros and Ones in an Array

#include <iostream>
using namespace std;
int main() {
int arr[10]={0,1,1,1,0,0,0,0,1,1};
    int size=10;
    int numZero=0;
    int numOne=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            numZero++;
        }
        else{
            numOne++;
        }
    }
    cout<<"Number of Zeros"<<endl;
    cout<<numZero<<endl;
    cout<<"Number of Ones"<<endl;
    cout<<numOne<<endl;


    return 0;
}