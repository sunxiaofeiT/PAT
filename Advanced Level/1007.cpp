#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;
    int numbers[k], sum = -1;
    for (int i = 0; i < k; i++)
    {
        cin >> numbers[i];
    }
    int startIndex = 0, endIndex = k;
    for ( int i = 0; i < k; i++)
    {
        int tempSum = 0;
        for (int j = i; j < k; j++)
        {
            tempSum += numbers[j];
            if ( tempSum > sum )
            {
                sum = tempSum;
                startIndex = i;
                endIndex = j;
            }
        }

    }
    if ( sum < 0 )
    {
        sum = 0;
        startIndex = 0;
        endIndex = k-1;
    }

    cout << sum << " " << numbers[startIndex] << " " << numbers[endIndex];

    return 0;
}
