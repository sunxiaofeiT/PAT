#include <iostream>

/**
* 重点: P前面A的个数 * P与T之间A的个数 = T后面A的个数
**/

using namespace std;

bool judge(string ori)
{
    int beforeP = 0, betweenPT = 0, afterT = 0;
    bool includeA = false,includeP = false, includeT = false,includeOther = false;
    int temp = 0;
    for (int i = 0; i < ori.length(); i++)
    {
        if(ori[i] == 'A')
        {
            includeA = true;
            temp ++;
        }
        else if (ori[i] == 'P')
        {
            includeP = true;
            beforeP = temp;
            temp = 0;
        }
        else if (ori[i] == 'T')
        {
            includeT = true;
            betweenPT = temp;
            temp = 0;
        }
        else includeOther = true;
    }
    afterT = temp;

    if( beforeP * betweenPT == afterT && includeA && includeP && includeT && !includeOther)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n; //测试用例的个数
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string ori;
        cin >> ori;
        if (judge(ori))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
