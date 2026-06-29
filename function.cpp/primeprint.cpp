#include<iostream>
using namespace std;

int isPrime(int num)
{
    int i;
    int prime = 1;

    for (i = 2; i <= (num / 2); i++) {
        if (num % i == 0) {
            prime = 0;
            break;
        }
    }
    return prime;
}
int main()
{
    int j;
    int n;

    cout << "Enter number: ";
    cin >> n;

    cout << "Prime numbers:" << endl;
    for (j = 2; j < n; j++) {
        if (isPrime(j))
            cout << j << " ";
    }
    cout << endl;

    return 0;
}
