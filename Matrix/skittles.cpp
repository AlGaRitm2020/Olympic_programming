#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iomanip>
#include <string>
using namespace std;





int main()
{
    int n, k;
    string ans = "NO";

    cin >> n >> k;
    vector<char> row(n);
    for (int i = 0; i < n; i++){
        row[i] = 'I';
    }

    for (int i = 0; i < k; i++){
        int b, e;
        cin >> b >> e;
        for (int j = b - 1; j < e; j++){
            row[j] = '.';
        }

    }
    for (int i = 0; i < n; i++){
        cout << row[i];
    }

    return 0;
}