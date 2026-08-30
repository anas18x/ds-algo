#include <bits/stdc++.h>
using namespace std;


// Function to merge two halves of the array
void merge(vector<int>& arr, int low, int mid, int high) {
    
        // Create temp arrays
        vector<int> temp;
        int left = low, right = mid + 1;

        // Merge two sorted halves
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right])
                temp.push_back(arr[left++]);
            else
                temp.push_back(arr[right++]);
        }

        // Copy remaining elements from left half
        while(left <= mid)
            temp.push_back(arr[left++]);

        // Copy remaining elements from right half
        while(right <= high)
            temp.push_back(arr[right++]);

        // Copy sorted elements back to original array
        for(int i = low; i <= high; i++)
            arr[i] = temp[i - low];
    }



void mergeSort(vector<int>& arr, int low, int high) {

        if (low >= high) return;

        int mid = (low + high) / 2;

        // Recursively sort left half
        mergeSort(arr, low, mid);

        // Recursively sort right half
        mergeSort(arr, mid + 1, high);

        // Merge the two sorted halves
        merge(arr, low, mid, high);
}






int main(){
  vector<int> arr = {64, 25, 12, 22, 11};
  mergeSort(arr, 0, arr.size() - 1);

  for (auto value : arr)
  {
    cout << value << " ";
  }
  return 0;
}