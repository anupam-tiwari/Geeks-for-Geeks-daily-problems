#include <iostream>
using namespace std; 

int nextGreat(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            if(arr[j]>arr[i]){
                cout<<arr[j]<<" ";
                break; 
            } else if(arr[j] < arr[i]){
                cout<<arr[i]<<" "; 
            }
            if(i == n-1){
                cout<<-1; 
            }
        }
    }
    return 0; 
}

int main(){
    int arr[5] = {6,8, 0, 1, 3}; 
    nextGreat(arr, 4); 
}