#include <iostream>
using namespace std;
int main()
{
    int i, count = 0, j, freq[256] = {0};
    string a;
    cout << "enter the string:";
    cin >> a;
    for (i = 0; i < a.length(); i++)
    {
        freq[a[i]]++;
    }
    cout << "frequency-" << a[i] << "-" << freq[a[i]] << endl;

    for (i = 0; i < a.length(); i++)
    {
        if (freq[a[i]] == 1)
        {
            cout << "non repeating:" << a[i] << endl;
            break;
        }
    }
}