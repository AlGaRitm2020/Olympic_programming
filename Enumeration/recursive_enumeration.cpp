#include <iostream>
#include <vector>
using namespace std;
vector<int> a;
void out()
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
    }
    cout << endl;


}

void rec(int idx, int n, int m)
{
    if (idx == n)
    {
        out();
        return;

    }
    for (int i = 1; i <= m; i++)
    {
        a[idx] = i;
        rec(idx + 1, n, m);
    }
}
int main() {

    int n, m;
    cin >> n;
    cin >> m;
    a = vector<int>(n);

    rec(0, n, m);
    return 0;
}
