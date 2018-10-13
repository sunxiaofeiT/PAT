#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string intToString(int ori)
{
    stringstream stream;
    string re;
    stream << ori;
    stream >> re;
    return re;
}

int charToInt(char ori)
{
    stringstream stream;
    stream << ori;
    int re  = 0;
    stream >> re;
    return re;
}

int main()
{
    int n;
    cin >> n;

    string number = intToString(n);

    for (int i = number.length(); i > 0; i--)
    {
        int temp = 1;
        for (int j = 0; j < charToInt(number[number.length()-i]); j++)
        {
            if (i == 3)
            {
                cout << "B";
            }
            else if(i == 2)
            {
                cout << "S";
            }
            else if(i == 1)
            {
                cout << temp;
                temp++;
            }
        }
    }

    return 0;
}
