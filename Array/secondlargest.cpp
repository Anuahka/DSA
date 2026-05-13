#include <iostream>
using namespace std;
int main()
{
    int arr[6]={23,12,0,56,28,61};
    int larg = arr[0];
    int small = -1;
    for (int i = 1; i < 6; i++)
    {
        if (larg < arr[i])
        {
            small = larg;
            larg = arr[i];
        }
        else if
            (small < arr[i] && larg > arr[i])
            {
                small = arr[i];
            }
    }
    cout << larg << " " << small;
}