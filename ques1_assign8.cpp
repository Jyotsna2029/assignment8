#include<iostream>
using namespace std;
void square(int n)
{
    for(int i = 1; i<=n; i++)
    {
        int sq = i*i;
        cout<<"The square of "<<i<<" is "<<sq<<endl;
    }
}

int main()
{
    square(7);
}
