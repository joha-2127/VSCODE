#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (x >= 18)
    {
        cout << "You are an Adult";
    }
    else
    {
        cout << "You are a Child";
    }
    return 0;
}