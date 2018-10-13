#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

string intToString(int a) {
    stringstream stream;
    stream << a;
    string result = "";
    stream >> result;
    return result;
}
int stringToInt(char a)
{
    stringstream stream;
    stream << a;
    int result;
    stream >> result;
    return result;
}
string logStringByNumber(int a) {
    switch(a)
    {
    case 0:
        return "zero";
        break;
    case 1:
        return "one";
        break;
    case 2:
        return "two";
        break;
    case 3:
        return "three";
        break;
    case 4:
        return "four";
        break;
    case 5:
        return "five";
        break;
    case 6:
        return "six";
        break;
    case 7:
        return "seven";
        break;
    case 8:
        return "eight";
        break;
    case 9:
        return "nine";
        break;
    }
}

int main()
{
    string n;
    int sum = 0;
    cin >> n;
    int length = n.length();
    for (int i = 0; i < length; i++)
    {
        int temp;
        temp = stringToInt(n[i]);
        sum += temp;
    };
    string sumString = intToString(sum);
    for (int i = 0; i < sumString.length(); i++)
    {
        if (i!= (sumString.length() - 1))
        {
            cout << logStringByNumber(stringToInt(sumString[i])) << " ";
        }else
        {
            cout << logStringByNumber(stringToInt(sumString[i]));
        }
    }

    return 0;
}
