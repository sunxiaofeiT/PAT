#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int low = 100, high = 0;
    string lowName,highName,lowId,highId;

    for (int i = 0; i < n; i++)
    {
        string name,id;
        int score;
        cin >> name >> id >> score;
        if (score > high)
        {
            high = score;
            highName = name;
            highId = id;
        }
        if (score < low)
        {
            low = score;
            lowName = name;
            lowId = id;
        }
    }
    cout << highName << " " << highId << endl;
    cout << lowName << " " << lowId << endl;

    return 0;
}
