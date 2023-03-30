#include <iostream>
#include<iomanip>
using namespace std;

const int ROWS=3, COLS=4;
void printArray(int ar[][COLS], int r, int c);
int sumArry(int ar[][COLS], int r, int c);
int largestNumber(int ar[][COLS], int r, int c);
int smallerNumber(int ar[][COLS], int r, int c);
int main() {

  int ar[][COLS]={{10,20,15,30},{1,5,7,4},{11,22,55,13}};
  printArray(ar, 3, 4);
  cout<<"\nThe sum= "<<sumArry(ar, 3, 4);
  cout<<"\nThe largest number= "<<largestNumber(ar, 0, 0);
  cout<<"\nThe smaller number= "<<smallerNumber(ar, 3, 4);
 
}
void printArray(int ar[][COLS], int r, int c){
  for(int row=0; row<ROWS; row++){
    cout<<"\n";
    for (int col=0; col<COLS; col++){
      cout<<setw(5)<<ar[row][col];
    }
}
}

int sumArry(int ar[][COLS], int r, int c){
  int sum=0;
  for(int row=0; row<ROWS; row++){
    cout<<"\n";
    for (int col=0; col<COLS; col++){
      sum+=ar[row][col];
      
      
    }
  }
  return sum;
}

int largestNumber(int ar[][COLS], int r, int c){
  int largestNumber=ar[0][0];
  for(int row=0; row<ROWS; row++){
    for (int col=0; col<COLS; col++){
      if(ar[row][col]>largestNumber){
        largestNumber=ar[row][col];
      }
      
      
    }
  }
  return largestNumber;
  
}
int smallerNumber(int ar[][COLS], int r, int c){
  int smallerNumber=ar[0][0];
  for(int row=0; row<ROWS; row++){
    for (int col=0; col<COLS; col++){
      if(ar[row][col]<smallerNumber){
        smallerNumber=ar[row][col];
      }
      
      
    }
  }
  return smallerNumber;
  
}