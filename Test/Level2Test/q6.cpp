#include <iostream>
#include <cmath>
using namespace std;

void printArr(int *arr, int arr_count);
int recSum(int *arr, int arr_count);

int numArr[100] = {0};
int sum[100] = {0};

int main()
{
    int cases;
    int casesIndx = 0;
    cin >> cases;
    while (casesIndx < cases)
    {
        int arrCount;
        cin >> arrCount;
        for (int arrIndx = 0; arrIndx  < arrCount; arrIndx++)
        {
            cin >> numArr[arrIndx];
        }
            sum[casesIndx]= recSum(numArr, arrCount - 1);
            casesIndx++;

    }

printArr((int *)sum, cases);

}


void printArr(int *arr, int arr_count)
{
    for (int i = 0; i < arr_count; i++)
    {
        cout << arr[i] << endl;
    }
}

int recSum(int *arr, int arr_count)
{
    int result = 0;
    if (arr_count < 0)
    {
        result = 0;
    }
    else
    {
        result = result + arr[arr_count] + recSum(arr, arr_count - 1);

    }

    return result;
}
