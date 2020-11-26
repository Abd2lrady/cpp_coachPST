#include <iostream>

using namespace std;

int findMax(int , int , int );
void printArr(int *, int);

int main()
{
    int input_count, num1, num2, num3,  i = 0;
    cin >> input_count;
    int res[input_count];
    while (i < input_count)
    {
        cin >> num1 >> num2 >> num3;
        res[i] = findMax(num1, num2, num3);
        i++;
    }

    printArr(res, input_count);
}

int findMax(int num1, int num2, int num3)
{
    int maxNum = num1;

    if (num2 > maxNum)
    {
        maxNum = num2;
    }

    if (num3 > maxNum)
    {
        maxNum = num3;
    }

    return maxNum;
}

void printArr(int *arr, int arr_count)
{
    for (int i = 0; i < arr_count; i++)
    {
        cout << arr[i] << endl;
    }
}