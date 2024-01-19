//double sum in an array
#include <iostream>
#include <vector>
using namespace std;
 
int main() {
   vector<int> arr{10,20,30,40};
   int sum=50;
    
    for(int i=0;i<arr.size();i++){
        int element1=arr[i];
        for(int j=i+1;j<arr.size();j++){
            int element2=arr[j];
            if (element1+element2==sum){
                cout<<element1<<"+"<<element2<<"="<<sum<<endl;
            }
        }
    }
    return 0;

}