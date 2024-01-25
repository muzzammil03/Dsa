// Print 2D Array
#include <iostream>
#include <vector>
using namespace std;
void printArray(vector<vector<int>>arr)
{
    for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<arr[i].size();j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
}


int main() {
   int row,col;
    cout<< "Enter the number of rows and columns: ";
    cin>>row>>col;
    cout<<"Enter the elements in the array: ";
    
    vector<vector<int>>arr(row,vector<int>(col));
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}