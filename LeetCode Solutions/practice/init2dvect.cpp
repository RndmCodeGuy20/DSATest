#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
    };

    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> row(m);
    vector<vector<int>> mat(n, row);

    cout << m << " " << n << endl
         << endl;

    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            mat[col][row] = matrix[row][col];
        }
    }

    cout << "done\n";

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            printf("%d ", mat[row][col]);
        }
        cout << endl;
    }

    return 0;
}