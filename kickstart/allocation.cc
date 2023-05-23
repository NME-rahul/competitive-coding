#include<iostream>
using namespace std;
int delete_(int [], int, int);
int main()
{
    int cases;
    cin>>cases;
    
    for(int i=0; i<cases; i++)
    {
        int houses, money;
        cin>>houses>>money;
        
        int cost[houses];
        
        for(int j=0; j<houses; j++)
        {
            cin>>cost[j];
        }
        
        //filter
        for(int j=0; j<houses; j++)
        {
            if( cost[j] > money)
            {
                houses = delete_(cost, houses, j);
            }
        }
        if(cost[0] > money)
        {
            houses = houses - 1;
        }
        
        //logic
        int sum=0, ans=0;
        if(cost[0] <= money)
        {
            sum = cost[0];
            ans = ans + 1;
        }
        
        int j=0;
        while(j < houses - 1)
        {
            if((sum + cost[j + 1]) <= money)
            {
                sum = cost[j + 1];
                ans = ans + 1;
                j = j + 1;
            }
            else
            {
                j = j + 1;
            }
        }
        
        cout<<"Case #"<<i+1<<": "<<ans<<endl;
    }
    return 0;
}
int delete_(int cost[], int houses, int j)
{
    for(int t=j; t<houses; t++)
    {
        cost[t] = cost[t+1];
    }
    houses = houses - 1;
    
    return houses;
}
