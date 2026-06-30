#include<iostream>
#include<algorithm>
using namespace std;

void countingSort(int arr[], int n){
    if(n == 0) return;
    
    int maxVal = *max_element(arr, arr + n);
    int minVal = *min_element(arr, arr + n);
    
    int range = maxVal - minVal + 1;
    int* count = new int[range]{0};
    
    for(int i = 0; i < n; i++){
        count[arr[i] - minVal]++;
    }
    
    for(int i = 1; i < range; i++){
        count[i] += count[i - 1];
    }
    
    int* output = new int[n];
    for(int i = n - 1; i >= 0; i--){
        output[count[arr[i] - minVal] - 1] = arr[i];
        count[arr[i] - minVal]--;
    }
    
    for(int i = 0; i < n; i++){
        arr[i] = output[i];
    }
    
    delete[] count;
    delete[] output;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    countingSort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
