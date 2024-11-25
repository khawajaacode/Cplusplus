#include <iostream>

using namespace std;

// Function prototypes
int* allocateArray(int size);
void sortArray(int* arr, int size);
double calculateAverage(int* arr, int size);

int main() {
  int numScores;

  // Prompt user for number of scores and validate input
  do {
    cout << "Enter the number of test scores (positive number): ";
    cin >> numScores;
  } while (numScores <= 0);

  // Allocate memory for the array
  int* scores = allocateArray(numScores);

  if (scores == nullptr) {
    cerr << "Memory allocation failed!" << endl;
    return 1;
  }

  // Get test scores from user with validation
  cout << "Enter " << numScores << " test scores (non-negative):" << endl;
  for (int i = 0; i < numScores; ++i) {
    do {
      cout << "Score " << i + 1 << ": ";
      cin >> *(scores + i); // Pointer notation for input
    } while (*(scores + i) < 0); // Validate non-negative scores
  }

  // Sort the scores
  sortArray(scores, numScores);

  // Calculate the average score
  double average = calculateAverage(scores, numScores);

  // Display results
  cout << "\nSorted Scores:" << endl;
  for (int i = 0; i < numScores; ++i) {
    cout << *(scores + i) << " "; // Pointer notation for output
  }
  cout << endl;

  cout << "Average Score: " << average << endl;

  // Deallocate memory
  delete[] scores;

  return 0;
}

// Function to allocate memory for the array
int* allocateArray(int size) {
  int* arr = new int[size];
  if (arr == nullptr) {
    return nullptr;
  }
  return arr;
}

// Function to sort the array in ascending order
void sortArray(int* arr, int size) {
  for (int i = 0; i < size - 1; ++i) {
    for (int j = i + 1; j < size; ++j) {
      if (*(arr + i) > *(arr + j)) {
        swap(*(arr + i), *(arr + j));
      }
    }
  }
}

// Function to calculate the average score
double calculateAverage(int* arr, int size) {
  double sum = 0.0;
  for (int i = 0; i < size; ++i) {
    sum += *(arr + i);
  }
  return sum / size;
}
