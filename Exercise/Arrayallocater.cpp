#include <iostream>

int* allocateArray(int size) {
  // Allocate memory for the array using 'new' operator
  int* array = new int[size];

  // Check if memory allocation was successful
  if (array == nullptr) {
    std::cerr << "Memory allocation failed for array of size " << size << std::endl;
    return nullptr;
  }

  // Memory allocated successfully, return the pointer to the array
  return array;
}

int main() {
  int numElements = 10;

  // Allocate the array
  int* myArray = allocateArray(numElements);

  // Check if allocation was successful
  if (myArray) {
    // Use the allocated array (e.g., initialize elements)
    for (int i = 0; i < numElements; ++i) {
      myArray[i] = i * 2;
    }

    // Print the array elements
    std::cout << "Array elements: ";
    for (int i = 0; i < numElements; ++i) {
      std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate the memory when finished
    delete[] myArray;
  } else {
    std::cerr << "Failed to allocate memory for the array." << std::endl;
  }

  return 0;
}
