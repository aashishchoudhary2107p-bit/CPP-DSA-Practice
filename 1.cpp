#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the student no you want :";
    cin >> n;
    string student[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name " << i << " : ";
        cin >> student[i];
    }
    cout << "--------Student details----- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << student[i] << endl;
    }
    return 0;
}