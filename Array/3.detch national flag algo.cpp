// Move all negetive number to the left side of an array
// detuch national flag algo
#include <iostream>
using namespace std;
void moveAllNeftoleft(int*a, int n){
  int l=0, h=n-1;
  while (l<h){
    if (a[l]<0){
      l++;
    }
    else if (a[h]>0){
      h--;
    }
    else{
      swap(a[l],a[h]);
    }
  }
}
int main() {
  int a[]={1,2,-3,4,-5,6};
  int n = sizeof(a)/sizeof(int);
  moveAllNeftoleft(a,n);

  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  } 
  cout <<endl;
  return 0;
}