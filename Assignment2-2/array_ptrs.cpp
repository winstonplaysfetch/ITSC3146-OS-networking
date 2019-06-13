#include <iostream>
using namespace std;

void bubbleSort(int *array[], int size) {
      for(int i = 0; (i < size); i++) { //first value
            int temp;
          for (int j=0; j < (size -1); j++) { //second value
               if (*array[i] < *array[j]) { //if second value is less than first value, swap.
                    temp = *array[i];
                    *array[i] = *array[j];
                    *array[j] = temp;
               }
          }
     }
}

int main() {
   //A
   int myInts[4];
   //B
   cout << "Enter 4 numbers for array: ";
   for (int i=0;i<4;i++){
       cin >> myInts[i];
   }
   //C
   int *my_ptrs[4];
   for (int i=0;i<4;i++){
       my_ptrs[i] = &myInts[i];
   }  
   //D
   bubbleSort(my_ptrs, 4);
   //E
   cout << "Your numbers, sorted ascending: ";
    for (int i=0;i<4;i++){
        cout << *my_ptrs[i] << " ";
    }  
    cout << "\n";
    return 0;
}