#include <iostream>
using namespace std;
// # define student s[100]

struct student
{
    int rollno;
    string name;
    float marks;
};
void swap(student &x, student &y)
{
    student temp = x;
    x = y;
    y = temp;
}
void detail(student s[100], int &n)
{
    int number = 0, i;
    cout << "no. of student's detail ypu have to put:" << endl;
    cin >> number;
    for (i = n; i < n + number; i++)
    {
        cin.ignore();

        cout << i + 1 << ".enter the student name:";
        getline(cin, s[i].name);

        cout << i + 1 << ".enter the rollno. :";
        cin >> s[i].rollno;

        cout << i + 1 << ".enter the marks:";
        cin >> s[i].marks;
    }
    n = n + number;
}

void resultbyrollno(student s[], int n)
{
    int target, i;
    bool found = false;
    cout << "enter the roll no. for result:";
    cin >> target;
    for (i = 0; i <= n - 1; i++)
    {
        if (s[i].rollno == target)
        {
            cout << "NAME:" << s[i].name << "\t" << "MARKS:" << s[i].marks << endl;
            found = true;
        }
    }
    if (found == false)
    {
        cout << "RESULT NOT FOUND" << endl;
    }
}

void resultlist(student s[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (s[j].marks < s[j + 1].marks)
            {
                swap(s[j], s[j + 1]);
            }
        }
    }
    int k;
    for (k = 0; k <= n - 1; k++)
    {
        cout << "|| RANK:" << k + 1 << "\t" << "ROLL NO.:" << s[k].rollno << "\t" << "NAME:" << s[k].name << "\t" << "MARKS:" << s[k].marks << "||" << endl;
    }
}
void deletedata(student s[], int &n)
{
    int targetrollno, coreindex = -1, i, j;
    cout << "enter rollno. for deletion:";
    cin >> targetrollno;
    for (i = 0; i < n; i++)
    {
        if (s[i].rollno == targetrollno)
        {
            coreindex = i;
            break;
        }
    }

    if (coreindex != -1)
    {
        for (j = coreindex; j < n - 1; j++)
        {
            s[j] = s[j + 1];
        }
        n--;
        cout << "RECORD DELETE SUSSCEFULLY" << endl;
    }

    else
    {
        cout << "ENTERD ROLL NO. IS INVALID" << endl;
    }
}

int main()
{
    student s[100];
    int choice = 0, n = 0;
    do
    {
        cout << "1.enter student details:" << endl;
        cout << "2.enter student rollno. to see detail:" << endl;
        cout << "3.print total list according to marks:" << endl;
        cout << "4.to delete data of student:" << endl;
        cout << "5.exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            detail(s, n);
            break;
        case 2:
            resultbyrollno(s, n);
            break;
        case 3:
            resultlist(s, n);
            break;
        case 4:
            deletedata(s, n);
            break;
        case 5:
            cout << "Exit from section" << endl;
            break;

        default:
            break;
        }
    } while (choice != 5 && choice > 0);
}
