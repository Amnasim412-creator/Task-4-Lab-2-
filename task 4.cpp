
#include <iostream>
using namespace std;

int bubbleSort(int arr[], int size)
{
    int passes = 0;

    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = false;
        passes++;

        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }

    return passes;
}

int main()
{
    int arr1[5] = {9, 7, 5, 3, 1};
    int arr2[5] = {1, 2, 3, 4, 5};

    int passes1 = bubbleSort(arr1, 5);
    int passes2 = bubbleSort(arr2, 5);

    cout << "Array 1 sorted: ";

    for (int i = 0; i < 5; i++)
        cout << arr1[i] << " ";

    cout << " Passes: " << passes1 << endl;

    cout << "Array 2 sorted: ";

    for (int i = 0; i < 5; i++)
        cout << arr2[i] << " ";

    cout << " Passes: " << passes2 << endl;

    return 0;
}
