//Reverse of An array

#include <iostream>
using namespace std;
int main() {
    int arr[10]={10,20,30,40,50,60,70};
    int size=7;
    int start=0;
    int end=size-1;
    while(start<=end){
        // Step 1 
        swap(arr[start],arr[end]);
        // Step 2
        start++;
        // Step 3
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}