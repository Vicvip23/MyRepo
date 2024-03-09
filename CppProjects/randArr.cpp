#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void fillWithRand(int* arr, int len){

    srand(time(NULL));

    for(int i = 0; i < len; i++){

        *(arr + i) = (rand() % 100 + 1);

    };

}

int* searchMin(int* arr, int len){

    int min = *arr;
    int* min_ptr = arr;

    for(int i = 0; i < len; i++){

        if(min > *(arr + i)){
            min_ptr = (arr + i);
            min = *(arr + i);
        };

    };

    return min_ptr;

}

int* searchMax(int* arr, int len){

    int max = *arr;
    int* max_ptr = arr;

    for(int i = 0; i < len; i++){

        if(max < *(arr + i)){
            max_ptr = (arr + i);
            max = *(arr + i);
        };

    };

    return max_ptr;

}

void displayArray(int* arr, int len){
    for(int i = 0; i < len; i++){
        cout << *(arr + i) << " ";
    };
    cout << endl;
}

int main(){

    int numbers[10];
    fillWithRand(&numbers[0], 10);
    cout << *searchMin(&numbers[0], 10) << endl;
    cout << *searchMax(&numbers[0], 10) << endl;
    displayArray(&numbers[0], 10);

}