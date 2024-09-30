#include <iostream>
using namespace std;

template <class T>
void arithmeticMean(T array[], size_t size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    sum = sum / size;
    cout << endl<< sum<< endl;
}

template <class T>
void print(T array[], size_t size) {
    for (int i = 0; i < size; i++) {
        cout<< array[i]<<" ";
    }
}

int main()
{
    int Array[]{ 1, 2, 3, 4 };
    int size = sizeof(Array) / sizeof(int);
    print <int>(Array, size);
    arithmeticMean <int>(Array, size);

}

