#include<iostream>

using namespace std;

int main ()
{
    int *array = new int(5);
    for (int i = 0; i < 5; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << array[i];
    }
    delete array;
    return 0;
}
