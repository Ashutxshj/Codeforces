#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n=INT_MIN, n1=0, n2=0, n3=0,count=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> n1>>n2>>n3;
        if((n1==1 &&n2==1) || (n2==1 && n3==1) || (n1==1 && n3==1)){
            count++;
        }
    }
    cout<<count;
}