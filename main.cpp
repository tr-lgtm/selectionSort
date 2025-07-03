#include <iostream>

void selectionSortt(int arr[],int size){
    for(int i = 0; i < size; i++){
        int minIndex = i;
        
        for(int j = i + 1;j < size; j ++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        std::swap(arr[i],arr[minIndex]);
    }
    
}
int main() {

    std::cout << "qsort = ";
    int32_t arr[]{1,3,6,32,444,1,0,0,0,0,7,44,22,1,3};
    selectionSortt(arr,15);
    for(int i = 0; i < 15; i++){
        std::cout << arr[i] << ' ';
    }
    

    return 0;
}
