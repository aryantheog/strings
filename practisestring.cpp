#include <iostream>
using namespace std;
int main()
{
    int i, j, count = 0;
    string a;
    cout << "enter the string:";
    cin >> a;
    for (i = 0; i < a.length(); i++)
    {
        count = 0;
        for (j = 0; j < a.length(); j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        bool answer = false;
        for (int k = 0; k < i; k++)
        {
            if (a[i] == a[k])
            {
                answer = true;
            }
        }

        if (count == 1)
        {
            cout << "nonrepeatable no.:" << a[i] << endl;
        }
        else if (count > 1 && answer == false)
        {
            cout << " character is repeatable.:" << a[i] << endl;
        }
    }
}