#include <iostream>

using namespace std;
char findMax(int *arr);
void printArr(int *arr, int arr_count);
int occurrence[26] = {0};
string input;
int main()
{
    int i = 0;
    cin >> input;

    while (input[i])
    {
        occurrence[input[i] - 'a']++;
        i++;
    }

    printArr(occurrence, 26);
    cout << (char)(findMax(occurrence) + 'a') ;
}

char findMaxRepeatedChar(int *arr)
{
    int maxOcurr = 0;
    char maxIndx = 0 ;
    for (char indx = 0; indx < 26; indx++)
    {
        if (arr[indx] > maxOcurr)
        {
            maxOcurr = arr[indx];
            maxIndx = indx;
        }
    }

    return maxIndx;
}