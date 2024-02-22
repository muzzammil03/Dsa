// Missing Element in An array

#include <iostream>
using namespace std;

// visited method
void findMissing(int*a,int n){
  for(int i=0;i<n;i++){
    int index=abs(a[i]);
    if(a[index-1]>0){
      a[index-1]*=-1;
    }
  }
  for(int i=0;i<n;i++){
    if(a[i]>0){
      cout<<i+1<<" ";
    }
    }


}

int main() {
  int n;
  int a[]={3,3,3,3,4,9};
  // idhar array me missing element change krke dekhe
  n=sizeof(a)/sizeof(int);
  findMissing(a,n);
  return 0;
}