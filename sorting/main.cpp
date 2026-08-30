#include <bits/stdc++.h>
using namespace std;


void bubbleSort(vector<int>& arr){
  for (int i = 0; i < arr.size() - 1; i++){
    bool swapped = false;

    for (int j = 0; j < arr.size() - i - 1; j++) {
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
      swapped = true;
    }
    if (swapped == false) break;
  }
}




void insertionSort(vector<int>& arr){
  for (int i = 1; i < arr.size(); i++){
    int j = i;

    while (j > 0 && arr[j - 1] > arr[j]){
      swap(arr[j - 1], arr[j]);
      j--;
    }
  }
}



void selectionSort(vector<int>& arr){
  for (int i = 0; i < arr.size() - 1; i++){
    int minValue = i;
    for (int j = i + 1; j < arr.size(); j++){
      if (arr[j] < arr[minValue])
        minValue = j;
    }
    swap(arr[i], arr[minValue]);
  }
}



int main(){
  vector<int> arr = {64, 25, 12, 22, 11};
  selectionSort(arr);
  insertionSort(arr);
  bubbleSort(arr);

  for (auto value : arr)
  {
    cout << value << " ";
  }
  return 0;
}