/*
Rotate the 'data' to the right by the 
'amount'.   For example, if the data is 
[1, 2, 3, 4, 5, 6, 7, 8, 9] and an amount
is 5 then the list returned should be 
[5, 6, 7, 8, 9, 1, 2, 3, 4].  The value 
of amount will be in the range of 1 and 
len(data).
*/

#include <iostream>
#include <vector>

using std::vector;
void printVector(vector<int> v) {
  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << ", ";   
  }
  std::cout << std::endl;
}
void rotateVectorRightByOne(vector<int> &v) {
    int old_el = v[v.size() - 1];
    v.erase(v.end() - 1);
    v.insert(v.begin(), old_el);
}

void rotateVectorRight(vector<int> &v, int amount) {
  for (int i = 0; i < amount; i++) {
    rotateVectorRightByOne(v);
  }
}

void printArray(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    std::cout << arr[i] << ", ";
  }
  std::cout << std::endl;
}

void rotateListRightByOne(int arr[], int length) {
  int* old_copy = new int[length]{};
  std::copy(arr, arr + length, old_copy);

  for (int i = 0; i < length; i++) {
    if (i - 1 < 0) {
      arr[i] = old_copy[length - 1];
    }
    else {
      arr[i] = old_copy[i - 1];
    }
  }
}

int* rotateListRight(int old_array[], int amount, int length) {

  int* new_array = new int[length]{};
  std::copy(old_array, old_array + length, new_array);

  // new strategy is to rotate list right by one step,
  // then repeat for as many steps as amount
  for (int i = 0; i < amount; i++) {
    rotateListRightByOne(new_array, length);
  }

  return new_array;
// initial version didn't include + 1 to trim_index (off-by-one error)
// initial version didn't include % length (only worked until old
// array index moved past its own length)
/*
  int* new_array = new int[length]{};
  int trim_index = length - amount;

  for (int i = 0; i < trim_index + 1; i++) {
    new_array[i] = old_array[(trim_index + i)  % length];
  }

  for (int i = 0; i < length - trim_index; i++) {
    new_array[trim_index + 1 + i] = old_array[i];
  }
  return new_array;*/
  
}

int* getArray() {
  int arr[] = {1, 2, 3};
  return arr;
}
int* staticArray() {
  static int arr[] = {1, 2, 3};
  int* ptr = arr;
  return arr;
}
void editArray(int* arr) {
  arr[0] = 5;
}
void editArrayByValue(int arr[]) {
  arr[0] = 12;
}
int main() {
//  int *myArray {new int[4] {1, 2, 3, 4}};
/*  int myArray[4] = {1, 2, 3, 4};
  myArray[2] = 100;
  for (int i = 0; i < 4; i++) {
      std::cout << "Array value at index " << i << " is " << myArray[i];
  for (int i : myArray) {
      std::cout << "Array value at index " << i << " is " << myArray[i];
  }    
  
  }*/

  int myArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int* move1 = rotateListRight(myArray, 1, 9);
  printArray(move1, 9);
  int* newArray = rotateListRight(myArray, 5, 9);
  printArray(newArray, 9);
  int* move3 = rotateListRight(myArray, 9, 9);
  printArray(move3, 9);

  vector v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  rotateVectorRight(v1, 1);
  vector v2 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  rotateVectorRight(v2, 5);
  vector v3 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  rotateVectorRight(v3, 9);
  printVector(v1);
  printVector(v2);
  printVector(v3);

  /*int* arr = getArray();
  printArray(arr, 3);*/
  int arr2[] = {1, 2, 3};
  int* arr3 = arr2;
  editArray(arr3);
  printArray(arr3, 3);
  std::cout << arr3 << std::endl;
  int int1 = 6;
  int* int2 = &int1;
  std::cout << *int2 << std::endl;
  std:: cout<< int2 << std::endl;

  std:: cout<< "int 3 address: ";
  int* int3 = arr2 + 2;
  std:: cout << int3 << std::endl;
  std::cout<< "int 3 value: ";
  std::cout << *int3 << std::endl;

  int int4 = 4;
  int int7 = 7;
  int& ref1 = int4;
  int& ref2 = int7;
  ref2 = ref1;
  ref1 = 20;
  std::cout << "ref 1 value: " << ref1 << std::endl;
  std::cout << "ref 2 value: " << ref2 << std::endl;

  vector v4 = {1, 2, 3};
  vector v5 = {4, 5, 6};
  v5 = v4;
  v4[0] = 100;
  std::cout << "v4 value: ";
  printVector(v4);
  std::cout << "v5 value: " << std::endl;
  printVector(v5);
  
  int* arrPtr = arr2;
  std::cout << "Array pointer: " << std::endl;
  printArray(arrPtr, 3);

  std::cout << "Returning static array: " << std::endl;
  printArray(staticArray(), 3);

  int* dynamicPtr = new int[3]{1, 2, 3};
  int& dynamicRef = *dynamicPtr;
  std::cout << "Reference to dyanimcally-allocated array: " <<std::endl;

  editArrayByValue(arr3);
  std::cout << "Editing array to see if it is passed by value: " <<std::endl;
  printArray(arr3, 3);

	std::cout << "Size of int: " << sizeof int4 << std::endl;
  std::cout << "Going past memory allocated for arr3: " << *(arr3 + 3);

  /*vector<int> v4 = {4, 5, 6};
  vector<int>* v5 = v4;*/

  return 0;
}








   