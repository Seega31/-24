#include <iostream>


int* concatenate_arrays(int A[], int n, int B[], int m) {
    int* C = new int[n + m];     
    for (int i = 0; i < n; i++) {
        C[i] = A[i];
    }    
    for (int i = 0; i < m; i++) {
        C[n + i] = B[i];
    }
    delete[] A; 
    delete[] B; 
    return C; 
}
int* resize_arr(int* arr, int current_size, int new_size) {
    if (new_size <= current_size) {
        return arr;
    }
    int* new_arr = new int[new_size];
    for (int i = 0; i < current_size; i++) {
        new_arr[i] = arr[i];
    }
    delete[] arr;
    return new_arr;
}

    int main(){
    setlocale(LC_ALL, "Russian");


    //Задача 1
    int n = 3;
    int m = 4;
    int* A = new int[n];
    int* B = new int[m];    
    for (int i = 0; i < n; i++) {
        A[i] = i;
    }
    for (int i = 0; i < m; i++) {
        B[i] = i + n;
    }
    int* C = concatenate_arrays(A, n, B, m);     
    for (int i = 0; i < n + m; i++) {
        std::cout << C[i] << ' ';
    }
    delete[] C; 



   //Задача 2
    int current_size = 10;
    int new_size = 15;
    int* arr = new int[current_size];   
    for (int i = 0; i < current_size; i++) {
        arr[i] = i;
    }
    arr = resize_arr(arr, current_size, new_size);     
    for (int i = 0; i < new_size; i++) {
        std::cout << arr[i] << ' ';
    }
    delete[] arr; 

    return 0;
}