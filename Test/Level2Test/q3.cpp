#include <iostream>
#include <cmath>
using namespace std;
bool isPerfectSqrt(int num);
void printArr(int *arr, int arr_count);



int main()
{
    int cases;
    int casesIndx = 0;
    int N;
    cin >> cases;
    int sum[cases] = {0};

    while (casesIndx < cases)
    {
        cin >> N;
        int arr[N][N];
        for (int row = 0; row < N ; row++)
        {
            for (int col = 0; col < N; col++)
            {
                cin >> arr[row][col];
            }
        }

        for (int row = 0; row < N ; row++)
        {
            for (int col = 0; col < N; col++)
            {
                if (isPerfectSqrt(arr[row][col]))
                {
                   sum[casesIndx] = sum[casesIndx] + arr[row][col];
                }
            }
        }
        casesIndx++;
    }

printArr((int *)sum, cases);

}


bool isPerfectSqrt(int num)
{
    bool result = false;
    float numSqr = sqrt(num);

    if (ceil(numSqr) == floor(numSqr))
    {
        result = true;
    }

    return result;
}

void printArr(int *arr, int arr_count)
{
    for (int i = 0; i < arr_count; i++)
    {
        cout << arr[i] << endl;
    }
}
