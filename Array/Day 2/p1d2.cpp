//Unique Element in an Array 

#include <iostream>
#include <vector>
using namespace std;
int findUnique(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
        // nor operator is used to find the unique element
    }
        return ans;
    }

int main() {
    int n;
    cout<<"Enter the number of element "<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the element "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int uniqueElement=findUnique(arr);
    cout<<"Unique Element is "<< uniqueElement <<endl;
    return 0;
}
 