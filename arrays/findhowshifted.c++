#include <iostream>
using namespace std;

int shift(int shifted[], int size){
  int i = 0; 
  int j = size;
  while(j - i > 1){
    int l  = (i + j)/2;
    if(shifted[l] < shifted[l-1]){
      return l;
    } else if (shifted[l] > shifted[l+1]){
      return l+1;
    } else if(shifted[l] < shifted[j]){
      j = l;
    } else {
      i = l;
    }
  }
        
  return 0;
}
    
int main()
{
  int shifted[] = {1,2,3,4,5,6,7,8,9};
  int k = shift(shifted, 8);
  cout << k;
}
