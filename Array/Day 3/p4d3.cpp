// minimum in 2d array

#include <iostream>
#include <limits.h>
using namespace std;
int minimum(int arr[][3], int row, int col)
{
    int min = INT_MAX;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
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
    cout << minimum(arr, row, col);
}

// 1 2 3
// 4 5 6  not need to use commas
// 7 8 9  use type of syntax in input  