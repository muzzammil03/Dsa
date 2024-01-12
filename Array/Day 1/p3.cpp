// 2.Minimum number of an array

#include <iostream>
#include <limits.h>
using namespace std;
int main() {
    int mini=INT_MAX;
    // INT_MAN is pre build integer funtcion which is sued to find the maximum value of integer
    int arr[10]={10,2,8,65,55,4,18,9};
    int size=8;
    for(int i=0;i<size;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
        
    }
    cout<<mini<<endl;
    return 0;
}