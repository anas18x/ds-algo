#include<iostream>
using namespace std;



// void bubbleSort(int arr[],int n){
//   for(int i=0; i<n-1; i++){
//     for(int j=0 ; j<n-i; j++){
//         if(arr[j] > arr[j+1])
//         swap(arr[j],arr[j+1]);
//     }
//   }  
// }


// ---- OPTIMISED
void bubbleSort(int arr[],int n){
  for(int i=0; i<n-1; i++){
    bool swapped = false;

    for(int j=0 ; j<n-i; j++){
        if(arr[j] > arr[j+1])
        swap(arr[j],arr[j+1]);
        swapped = true;
    }
    if(swapped == false) break;
  }  
}




void insertionSort(int arr[], int n){
 for(int i=1; i<n; i++){                               //(assuming 1st element is sorted)
 int temp = arr[i];
    int j = i-1;

    for(; j>=0; j--){
        if(arr[j] > temp){
          // shift
          arr[j+1] = arr[j];
        }
        else break;
    }
    arr[j+1] = temp;
 }
}



void selectionSort(int arr[],int n){
 for(int i=0; i<n-1; i++){
    int minValue = i;
    for(int j=i+1; j<n; j++){
        if(arr[j] < arr[minValue])
          minValue = j;
    }
    swap(arr[i] , arr[minValue]);
 }
}



int main(){
int arr[] = {64,25,12,22,11};
selectionSort(arr,sizeof(arr)/sizeof(arr[0]));
insertionSort(arr,sizeof(arr)/sizeof(arr[0]));
bubbleSort(arr,sizeof(arr)/sizeof(arr[0]));

 for(auto value: arr){
    cout<<value<<" ";
 }
    return 0; 
}