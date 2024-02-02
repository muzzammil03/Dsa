// Search element in 2D array
#include <iostream>
using namespace std;
bool findelement(int arr[][3],int row,int col,int key){
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(arr[i][j]==key){
            return true;
            break;
        }
        
    }
  }return false;
}
int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int key;
    cout<< "Enter the key to find"<<endl;
    cin>>key;
    if(findelement(arr,row,col,key)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found";
    }
    return 0;

}