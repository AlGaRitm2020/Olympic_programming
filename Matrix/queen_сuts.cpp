#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iomanip>
#include <string>
using namespace std;

const size_t row = 8;
const size_t col = 2;

int is_unic(int a, int b,  vector<vector<int> > imatrix){
    int k = 0;
    for (int i = 0; i < row; i++){
        if (imatrix[i][0] == a)
            k++;
        if (imatrix[i][1] == b)
            k++;
        if (imatrix[i][0] + imatrix[i][1] == a + b)
            k++;
    }
    if (k > 3)
        return 0;
    else
        return 1;
}

int main()
{
    string ans = "NO";
    vector<vector<int> > imatrix(row);
    // Заполнение
    for(size_t i = 0; i < row; ++i)
    {
        imatrix[i].resize(col);
        for (size_t j = 0; j < col; j++)
        {
            cin >> imatrix[i][j];
        }

    }

    for(size_t i = 0; i < row; ++i)
    {
        imatrix[i].resize(col);

        if (!(is_unic(imatrix[i][0], imatrix[i][1], imatrix) == 1))
            ans = "YES";



    }
    cout << ans;

    return 0;
}