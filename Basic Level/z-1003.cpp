#include <iostream>

/**
* �ص�: Pǰ��A�ĸ��� * P��T֮��A�ĸ��� = T����A�ĸ���
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
    int n; //���������ĸ���
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
