#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main ()
{
    double temp[1001];
    memset(temp,0,sizeof(temp));

    int a,b;

    cin >> a;

    for (int i = 0; i < a; i++ )
    {
        int xishu;
        double n;
        cin >> xishu >> n;
        temp[xishu] += n;
    }

    cin >> b;
    for (int i = 0; i < b; i++)
    {
        int xishu;
        double n;
        cin >> xishu >> n;
        temp[xishu] += n;
    }

    // input is over
    int resultNumbers = 0;
    for (int  i =0; i<1001; i++)
    {
        if( temp[i] != 0)
        {
            resultNumbers ++;
        }
    }
    cout << resultNumbers ;
    for (int i = 1000; i >= 0; i--)
    {
        if(temp[i] != 0)
        {
            cout << " " << i << " " <<setiosflags(ios::fixed)<<setprecision(1) << temp[i];
        }
    }

    return 0;
}
