#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int charToInt(char n)
{
    stringstream stream;
    int a;
    stream << n;
    stream >> a;
    return a;
}

string intToString(int a)
{
    stringstream stream;
    string result;
    stream << a;
    stream >> result;
    return result;
}

string printStringNumber(int a)
{
    string result;
    if(a == 0) result = "ling";
    else if (a == 1) result = "yi";
    else if (a == 2) result = "er";
    else if (a == 3) result = "san";
    else if (a == 4) result = "si";
    else if (a == 5) result = "wu";
    else if (a == 6) result = "liu";
    else if(a == 7) result = "qi";
    else if(a == 8) result = "ba";
    else if(a == 9) result = "jiu";
    else result = "";

    return result;
}

int main()
{
    string a;
    cin >> a;

    int sum = 0;

    for (int i = 0; i < a.length(); i++)
    {
        sum += charToInt(a[i]);
    }

    string sumString;
    sumString = intToString(sum);

    string result;
    for (int i = 0; i < sumString.length(); i++)
    {
        result = result + printStringNumber(charToInt(sumString[i]));
        if(i != sumString.length()-1)
        {
            result = result + " ";
        }
    }

    cout << result;

    return 0;
}
