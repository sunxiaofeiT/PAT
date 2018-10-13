#include <iostream>
#include <cmath>

using namespace std;

bool isPrimeNumber(int ori);

int main()
{
    int n;
    cin >> n;

    int result = 0;

    for(int i = 5; i <= n; i++)
    {
        if (isPrimeNumber(i) && isPrimeNumber(i-2))
        {
            result ++;
        }
    }

    cout << result;

    return 0;
}

bool isPrimeNumber(int ori)
{
    bool isPrimeNumber = true;
    for (int i = 2; i <= sqrt(ori); i++)
    {
        if(ori%i == 0)
        {
            return false;
        }
    }

    return true;
}
