#include <iostream>
using namespace std;
#define max 5
int arr[max];
int top = -1;

void push()
{
    int x;
    if (top == max - 1)
    {
        cout << "stack is overflow\n";
    }
    else
    {
        cout << "enter element you push:";
        cin >> x;
        top = top + 1;
        arr[top] = x;
    }
}
void pop()
{
    int x;
    if (top == -1)
    {
        cout << "stack is underflow\n";
    }
    else
    {
        x = arr[top];
        cout << "you poped:" << x << endl;
        top--;
    }
}

void display()
{
    int i;
    if (top == -1)
    {
        cout << "stack is empty\n";
    }
    else
    {
        for (i = 0; i <= top; i++)
        {
            cout << arr[i] << " " << endl;
        }
    }
}

int main()
{
    int choice = 0;
    cout << "select the opreation you want\n";
    while (choice != 4)
    {
        cout << "1.push\n";
        cout << "2.pop\n";
        cout << "3.Display\n";
        cout << "4.Exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;
        case 4:
            cout << "EXIT THE OPRREATION";
            break;
        default:
            cout << "enter ivnvalid input";
            break;
        }
    }
    return 0;
}
