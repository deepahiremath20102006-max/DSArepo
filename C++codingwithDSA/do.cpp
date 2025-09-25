#include <iostream>
#include <climits>
using namespace std;
int linear(int target,int arr[]){
  int size = sizeof(arr) / sizeof(arr[0]);
  for(int i=0;i<size;i++){
    if(arr[i]==target){
      return i;
    }
  }
  return -1;
}
int main(){
  .
}







