#include <iostream>

using namespace std;

int binarySearch(int array[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (array[m] == x)
            return m;

        if (array[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }

    return -1;
}

int main(void)
{
    int arr[] = { 2, 3, 7, 12, 405 };
    int x = 12;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1) cout <<"The element you are looking for is not present";
    else cout <<"The index of the element you are looking for is: " << result;
    return 0;
}
