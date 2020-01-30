#include <iostream>
using namespace std;

void print_array(int [], int);
void InsertionSortArray(int [], int);
int LinearSearchArray(int [], int, int);

int main(){
 int ARRAY_SIZE=10;
 int nums[ARRAY_SIZE]={7, 4, 6, 9, 10, 2, 5, 3, 8, 1};

 print_array(nums, ARRAY_SIZE);
 InsertionSortArray(nums, ARRAY_SIZE);
 print_array(nums, ARRAY_SIZE);
 
int Pos=LinearSearchArray(nums,ARRAY_SIZE, 5);
 
 if(Pos!= -1)
  cout << "The position of the target value in the Array is " << Pos << "!" << endl;
 if(Pos==-1)
  cout << "The target value does not exist within the Array, therefore its position is " << Pos << "!" << endl;
 return 0;
}

void print_array(int array[], int ARRAY_SIZE)
{

for(int i=0; i<ARRAY_SIZE; i++)
{
  cout<<array[i];
  if(i!=ARRAY_SIZE-1)
   cout<<", ";
}

cout <<endl;
}

void InsertionSortArray(int arr[], int size){
int i, j, currValue;
for( i=1;i<size; i++){
 currValue= arr[i];
 j=i-1;
 while(j>=0 && currValue<arr[j]){
  arr[j+1]=arr[j];
  j--;
 }
 arr[j+1]=currValue;
}
}

int LinearSearchArray(int arr[], int AR_SIZE, int target){
 for(int i=0; i<AR_SIZE; i++)
 {
  if(arr[i]==target)
   return i;
 }
 return -1;
}
