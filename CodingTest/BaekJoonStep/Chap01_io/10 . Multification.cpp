#include<iostream>
#include<string>

using namespace std;

int main()
{
    int A,B;
    cin >> A;
    cin >> B;
    cout << A * (B%10) << "\n";
    cout << A * ((B/10)%10) << "\n";
    cout << A * (B/100) << "\n";
    cout << A * B;
    return 0;
}