#include <iostream>
using namespace std;

int main()
{
    int n, arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        int minIndex = low;
        int maxIndex = low;

        for (int i = low; i <= high; i++)
        {
            if (arr[i] < arr[minIndex])
            {
                minIndex = i;
            }

            if (arr[i] > arr[maxIndex])
            {
                maxIndex = i;
            }
        }

        swap(arr[low], arr[minIndex]);

        if (maxIndex == low)
        {
            maxIndex = minIndex;
        }

        swap(arr[high], arr[maxIndex]);

        low++;
        high--;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}