#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    double average = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        average += v[i];
    }
    average /= n;
    cout << average << endl;
}