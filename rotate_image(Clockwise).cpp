#include <iostream>
#include <algorithm>

using namespace std;
//clockwise 90'
void rotate(int a[][1000], int n)
{
    //to take transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                swap(a[i][j], a[j][i]);
            }
        }
    }

    //for reversing rows
    for (int row = 0; row < n; row++)
    {
        int start_col = 0;
        int end_col = n - 1;
        while (start_col < end_col)
        {
            swap(a[row][start_col], a[row][end_col]);
            start_col++;
            end_col--;
        }
    }

    
}

void rotate_stl(int a[][1000], int n)
{
    for (int i = 0; i < n; i++)
    {
        reverse(a[i], a[i] + n);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                swap(a[i][j], a[j][i]);
            }
        }
    }
}
int main()
{
    int a[1000][1000];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    //rotate_stl(a, n);
    rotate(a, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}