#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int sum = 0;
    sum = a + b;
    int sumAbs = abs(sum);

    if (sumAbs < 1000) {
        cout << sum << endl;
    };
    if( sumAbs >= 1000 && sumAbs < 1000000) {
        cout << (sum/1000) << "," << setw(3)<< setfill('0')<< (sumAbs%1000) << endl;
    };
    if ( sumAbs >= 1000000) {
        cout << sum/1000000 << "," << setw(3)<<setfill('0')<< (sumAbs/1000)%1000 << "," << setw(3)<<setfill('0')<< sumAbs%1000 << endl;
    }

    return 0;
}
