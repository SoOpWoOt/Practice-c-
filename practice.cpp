#include <bits/stdc++.h>
using namespace std;
int is_prime(int a)
{
    int i,  c = 0;
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
            c++;
    }
    if (c == 2)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int main()
{
    int n, k;
    cin >> n;
    k = is_prime(n);
    if (k == 1)
    {
        cout << "prime" << endl;
    }
    else
        cout << "not prime" << endl;
}