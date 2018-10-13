#include <iostream>

using namespace std;

int ka(int n, int count)
{
    if ( n % 2 == 0)
    {
        n = n / 2;
    }
    else
    {
        n = (3*n+1)/2;
    }
    count ++;
    if ( n != 1)
    {
        return ka(n,count);
    }
    else
    {
        return count;
    }
}

int main()
{
    int n,result = 0,count = 0;
    cin >> n;
    if( n == 1)
    {
        cout << 0;
    }
    else
    {
        result = ka(n,count);
        cout << result;
    }
    return 0;
}
