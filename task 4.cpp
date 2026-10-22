#include <iostream>
using namespace std;

bool exists(int arr[], int low, int high, int key)
{
    if (low > high)
        return false;

    int mid = (low + high) / 2;

    if (arr[mid] == key)
        return true;

    else if (key < arr[mid])
        return exists(arr, low, mid - 1, key);

    else
        return exists(arr, mid + 1, high, key);
}

int main()
{
    int marks[7] = {35, 48, 56, 67, 72, 85, 91};

    if (exists(marks, 0, 6, 72))
        cout << "72 is present" << endl;
    else
        cout << "72 is not present" << endl;

    if (exists(marks, 0, 6, 60))
        cout << "60 is present" << endl;
    else
        cout << "60 is not present" << endl;

    return 0;
}
