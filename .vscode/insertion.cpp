#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 1, 5, 4, 7};
    int size = 5;
    insertion_Sort(arr, size);
    cout << "The sorted array:";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}
void insertion_Sort(int a, int size)
{
}