#include <iostream>

using namespace std;

int main()
{
    int n; //the number of the requests
    cin >> n;
    int requests[n];    //requests

    int result = 0; //cost time, up -> 6s, down -> 4s, step -> 5s.

    for (int i = 0; i < n; i++)
    {
        cin >> requests[i];
    }
    for (int i = 0,pre = 0; i < n; i++)
    {
        if ( requests[i] - pre > 0)
        {
            result += 6*(requests[i] - pre);
        }
        else
        {
            result += 4*(pre - requests[i]);
        }
        pre = requests[i];
        result += 5;
    }

    cout << result ;

    return 0;
}
