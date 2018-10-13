#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n=0; //the number of cities
    int m=0;    //the number of roads
    int nowLocation=0;  //now location
    int toLocation=0;   //to the location

    cin >> n >> m >> nowLocation >> toLocation;

    int members[n]; //team members
    for (int i = 0; i < n; i++)
    {
        cin >> members[i];
    }
    int roads[n][n];
    memset(roads,0,sizeof(roads));

    for(int i = 0; i < m; i++)
    {
        int startLocation,endLocation,roadLength;
        cin >> startLocation >> endLocation >> roadLength;
        roads[startLocation][endLocation]=roadLength;
        roads[endLocation][startLocation]=roadLength;
    }

    for (nowLocation; nowLocation<=toLocation; nowLocation++ )
    {
        int ableRoads = 0;
        for (int i = 0; i++; i < n)
        {
            if(roads[nowLocation][i])
            {
                ableRoads ++;
            }
        }

        int allRoads[ableRoads];
        memset(allRoads,0,sizeof(allRoads));


    }
}
