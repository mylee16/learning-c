#include <stdio.h>
#include <time.h>

int binSearch(int x, int v[], int n){
    int low, high, mid;

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if ( x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1 ;
        else
            return mid;
    }
    return -1;
}

int binSearchOptimized(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;

    while (v[mid] != x) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return mid;
}


int main() {

    double time_spent = 0.0;
    clock_t begin, end;

    const int SIZE = 999999;
    int result;
    int my_array[SIZE+1];
    for(int i = 0; i <= SIZE; i++){
        my_array[i] = i;
    }
    int x = 212311;

    begin = clock();
    result = binSearch(x, my_array, SIZE);
    printf("result: %d\n", result);
    end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds\n", time_spent);

    begin = clock();
    result = binSearchOptimized(x, my_array, SIZE);
    printf("result: %d\n", result);
    end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds\n", time_spent);


}