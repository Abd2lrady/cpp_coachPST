using namespace std;
void printGlassClkShape(int height);
int main()
{
    int h;
    cin >> h;
    printGlassClkShape(h);
}



void printGlassClkShape(int height)
{
    int vCenter =  height / 2;
    int hCenter =  height / 2;
    // upper half
    for (int row = 0; row <= vCenter; row++)
    {
        for (int col = 0; col < height; col++)
            {
                if (col <= row || col >= height - row - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        cout << endl;
    }
    // lower half
    for (int row = vCenter + 1; row <= height; row++)
    {
        for (int col = 0; col < height; col++)
            {
                if (col <= height - row - 1 || col >= row)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        cout << endl;
    }
}