#include <iostream>
#include <sstream>

using namespace std;

int stringToInt(string a)
{
    stringstream stream;
    stream << a;
    int result;
    stream >> result;
    return result;
}

/**
    time a and time b,
    a > b, return 1,
    a = b, return 0,
    a < b, return -1
**/
int compareTime(string a, string b)
{
    int aHour,bHour,aMin,bMin,aSecond,bSecond;
    for (int i = 0; i < 3; i++)
    {
        int position = 0;
        if( i == 0)
        {
            position = 0;
            aHour = stringToInt(a.substr(position, 2));
            bHour = stringToInt(b.substr(position, 2));
        }else if( i == 1)
        {
            position = 3;
            aMin = stringToInt(a.substr(position, 2));
            bMin = stringToInt(b.substr(position, 2));
        }else
        {
            position = 6;
            aSecond = stringToInt(a.substr(position, 2));
            bSecond = stringToInt(b.substr(position, 2));
        }
    }
    int result;
    if( aHour > bHour )
    {
        result = 1;
    }else if( aHour < bHour )
    {
        result = -1;
    }else
    {
        if( aMin > bMin ) result = 1;
        else if( aMin < bMin ) result = -1;
        else
        {
            if ( aSecond > bSecond ) result = 1;
            else if ( aSecond < bSecond ) result = -1;
            else result = 0;
        }
    }
    return result;
}

int main()
{
    int m = 0;
    cin >> m;
    string id[m],signIn[m],signOut[m];

    for (int i = 0; i < m; i++)
    {
        cin >> id[i] >> signIn[i] >> signOut[i];
    }

    int earlyIndex, lastIndex;
    string earlyTime = signIn[0], lastTime = signOut[0];

    for (int i = 0; i < m; i++)
    {
        if( compareTime( signIn[i], earlyTime) == -1)
        {
            earlyTime = signIn[i];
            earlyIndex = i;
        }
        if( compareTime( signOut[i], lastTime ) == 1)
        {
            lastTime = signOut[i];
            lastIndex = i;
        }
    }

    cout << id[earlyIndex] << " " << id[lastIndex] << endl;

    return 0;
}
