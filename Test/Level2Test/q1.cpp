#include <iostream>
#include <cmath>

using namespace std;
int add(int num1, int num2);
void printArr(int *arr, int arr_count);

int main()
{
    int input_count, num1, num2, i = 0;
    cin >> input_count;
    int res[input_count];
    while (i < input_count)
    {
        cin >> num1 >> num2;
        res[i] = add(num1, num2);
        i++;
    }

    printArr(res, input_count);
}

int add(int num1, int num2)
{
    if (num1 < 0)
    {
        num1 *= -1;
    }

    if (num2 < 0)
    {
        num2 *= -1;
    }

    return num1 + num2;
}

void printArr(int *arr, int arr_count)
{
    for (int i = 0; i < arr_count; i++)
    {
        cout << arr[i] << endl;
    }
}